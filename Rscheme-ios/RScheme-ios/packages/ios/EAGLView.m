#import <CoreGraphics/CoreGraphics.h>

#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/EAGLDrawable.h>

#import <UIKit/UIKit.h>

#import "EAGLView.h"
#include "iosop.h"

#define USE_DEPTH_BUFFER 0

@interface EAGLView ()

@property (nonatomic, retain) EAGLContext *context;
@property (nonatomic, assign) NSTimer *animationTimer;

- (BOOL) createFramebuffer;
- (void) destroyFramebuffer;

@end

@implementation EAGLView

@synthesize context;
@synthesize animationTimer;
@synthesize animationInterval;

+ (Class)layerClass {
  return [CAEAGLLayer class];
}

- (id)initWithFrame:(CGRect)frame {

    if ((self = [super initWithFrame:frame])) {
    CAEAGLLayer *eaglLayer = (CAEAGLLayer *)self.layer;
    eaglLayer.opaque = YES;
    eaglLayer.drawableProperties = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSNumber numberWithBool:NO], 
    kEAGLDrawablePropertyRetainedBacking, 
    kEAGLColorFormatRGBA8, kEAGLDrawablePropertyColorFormat, nil];
    context = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES1];
    if (!context || ![EAGLContext setCurrentContext:context]) {
      return nil;
    }
    animationInterval = 1.0 / 1.0;
  }
   
  batterydev=[UIDevice currentDevice];
  [batterydev setBatteryMonitoringEnabled:YES];
  batteryidx=0;

#ifdef USE_MULTITOUCH
  [self setMultipleTouchEnabled:YES];
#endif 

  return self;
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {

    for( UITouch *t in touches ) {
    CGPoint p= [t locationInView:self];
        
  }
}

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event {
  NSLog(@"EAGLView: touchesMoved");
  for( UITouch *t in touches ) {
    CGPoint p= [t locationInView:self];
      
  }
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
  NSLog(@"EAGLView: touchesEnded");
  for( UITouch *t in touches ) {
    CGPoint p= [t locationInView:self];
      gui_on_event(1,p.x,p.y);
  }
}


- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event {
  NSLog(@"EAGLView: touchesCancelled");

}

- (void)drawView {
  //NSLog(@"EAGLView: drawView render=%i",render);
  if (render) {		
    [EAGLContext setCurrentContext:context];
    glBindFramebufferOES(GL_FRAMEBUFFER_OES, viewFramebuffer);
    glViewport(0, 0, backingWidth, backingHeight);
  }
    
    

  if (render) {
    glBindRenderbufferOES(GL_RENDERBUFFER_OES, viewRenderbuffer);
    [context presentRenderbuffer:GL_RENDERBUFFER_OES];
  }
}

- (void)layoutSubviews {
  NSLog(@"EAGLView: layoutSubviews");
  [EAGLContext setCurrentContext:context];
  [self destroyFramebuffer];
  [self createFramebuffer];
  [self drawView];
}

- (BOOL)createFramebuffer {
  NSLog(@"EAGLView: createFramebuffer");
  glGenFramebuffersOES(1, &viewFramebuffer);
  glGenRenderbuffersOES(1, &viewRenderbuffer);
  glBindFramebufferOES(GL_FRAMEBUFFER_OES, viewFramebuffer);
  glBindRenderbufferOES(GL_RENDERBUFFER_OES, viewRenderbuffer);
  [context renderbufferStorage:GL_RENDERBUFFER_OES fromDrawable:(CAEAGLLayer*)self.layer];
  glFramebufferRenderbufferOES(GL_FRAMEBUFFER_OES, GL_COLOR_ATTACHMENT0_OES, GL_RENDERBUFFER_OES, viewRenderbuffer);
  glGetRenderbufferParameterivOES(GL_RENDERBUFFER_OES, GL_RENDERBUFFER_WIDTH_OES, &backingWidth);
  glGetRenderbufferParameterivOES(GL_RENDERBUFFER_OES, GL_RENDERBUFFER_HEIGHT_OES, &backingHeight);
  if (USE_DEPTH_BUFFER) {
    glGenRenderbuffersOES(1, &depthRenderbuffer);
    glBindRenderbufferOES(GL_RENDERBUFFER_OES, depthRenderbuffer);
    glRenderbufferStorageOES(GL_RENDERBUFFER_OES, GL_DEPTH_COMPONENT16_OES, backingWidth, backingHeight);
    glFramebufferRenderbufferOES(GL_FRAMEBUFFER_OES, GL_DEPTH_ATTACHMENT_OES, GL_RENDERBUFFER_OES, depthRenderbuffer);
    }
  if(glCheckFramebufferStatusOES(GL_FRAMEBUFFER_OES) != GL_FRAMEBUFFER_COMPLETE_OES) {
    NSLog(@"failed to make complete framebuffer object %x", glCheckFramebufferStatusOES(GL_FRAMEBUFFER_OES));
    return NO;
  }
  return YES;
}

- (void)destroyFramebuffer {
  NSLog(@"EAGLView: destroyFramebuffer");
  glDeleteFramebuffersOES(1, &viewFramebuffer);
  viewFramebuffer = 0;
  glDeleteRenderbuffersOES(1, &viewRenderbuffer);
  viewRenderbuffer = 0;
  if(depthRenderbuffer) {
    glDeleteRenderbuffersOES(1, &depthRenderbuffer);
    depthRenderbuffer = 0;
  }
}

- (void)startRender {
   NSLog(@"EAGLView: startRender");
  render=1;
}

- (void)stopRender {
  NSLog(@"EAGLView: stopRender");
  render=0;
}

- (void)startAnimation {
  NSLog(@"EAGLView: startAnimation");
  self.animationTimer = [NSTimer scheduledTimerWithTimeInterval:animationInterval 
                          target:self selector:@selector(drawView) userInfo:nil repeats:YES];
  render=1;
}

- (void)stopAnimation {
  NSLog(@"EAGLView: stopAnimation");
  self.animationTimer = nil;
}

- (void)setAnimationTimer:(NSTimer *)newTimer {
  NSLog(@"EAGLView: setAnimationTimer");
  [animationTimer invalidate];
  animationTimer = newTimer;
}

- (void)setAnimationInterval:(NSTimeInterval)interval {
  NSLog(@"EAGLView: setAnimationTimer");
  animationInterval = interval;
  if (animationTimer) {
    [self stopAnimation];
    [self startAnimation];
  }
}

- (void)dealloc {
  NSLog(@"EAGLView: dealloc");
  [self stopAnimation];
  if ([EAGLContext currentContext] == context) {
    [EAGLContext setCurrentContext:nil];
  }
    
}

@end
