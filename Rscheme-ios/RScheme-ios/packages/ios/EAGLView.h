#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

#import "GLViewController.h"

@class GLViewController;

@interface EAGLView : UIView<UIAccelerometerDelegate> {
	
@private
  GLint backingWidth;
  GLint backingHeight;
  EAGLContext *context;
  GLuint viewRenderbuffer, viewFramebuffer;
  GLuint depthRenderbuffer;
  //NSTimer *animationTimer;
  NSTimeInterval animationInterval;
  int render;

UIDevice *batterydev;
  int batteryidx;
}

@property (nonatomic) NSTimeInterval animationInterval;
@property (strong) CADisplayLink *displayLink;


- (void)startRender;
- (void)stopRender;
- (void)startAnimation;
- (void)stopAnimation;
- (void)drawView;

- (void)startDisplayLink;
- (void)handleDisplayLink:(CADisplayLink *)sender;
- (void)stopDisplayLink;

@end

