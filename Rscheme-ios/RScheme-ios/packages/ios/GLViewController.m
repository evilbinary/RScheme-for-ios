#import <OpenGLES/EAGLDrawable.h>

#import "GLViewController.h"
#import "EAGLView.h"

@class EAGLView;

@implementation GLViewController

- (void)loadView 
{
  NSLog(@"GLViewController: loadView");
  self.view = [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
}

-(void)viewDidLoad
{
   NSLog(@"GLViewController: viewDidLoad");
  [super viewDidLoad];
  glView = [[EAGLView alloc] initWithFrame:[UIScreen mainScreen].bounds];
  [self.view addSubview:glView];
  [glView startAnimation];
}

-(void)actionSetupView:(EAGLView*)view {
   NSLog(@"GLViewController: actionSetupView");
}

- (void)actionDrawView:(EAGLView*)view {
  NSLog(@"GLViewController: actionDrawView");
}

- (void)didReceiveMemoryWarning 
{
   NSLog(@"GLViewController: didReceiveMemoryWarning");
  [super didReceiveMemoryWarning]; 
}

- (void)dealloc {
   NSLog(@"GLViewController: dealloc");
}

- (BOOL)shouldAutorotate
{
   NSLog(@"GLViewController: shouldAutorotate");
  return NO;
}

@end
