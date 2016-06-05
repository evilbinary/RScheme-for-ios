#import <UIKit/UIKit.h>

@class EAGLView;

@interface GLViewController : UIViewController {
  EAGLView *glView;
}
- (void)actionDrawView:(EAGLView*)view;
- (void)actionSetupView:(EAGLView*)view;

@end


