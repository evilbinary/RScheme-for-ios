/**********************************************
THIS FILE WAS AUTOMATICALLY COPIED FROM THE
RSCHEME SOURCE TREE, AND THE ORIGINAL MAY CHANGE.
HENCE, DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

#line 1 "./iosop.m"
#import <UIKit/UIKit.h>
#import "UIBlockAlertView.h"
#import "GLViewController.h"
#include "iosop.h"


char* show_input(){
    
    __block bool isInput = NO;
    __block char* result="";
    NSCondition *inputCondition= [[NSCondition alloc] init];
    [inputCondition lock];

    dispatch_async(dispatch_get_main_queue(), ^{
        //创建instance
        UIAlertController *alertVC = [UIAlertController alertControllerWithTitle:@"提示" message:@"" preferredStyle:UIAlertControllerStyleAlert];
        
        //添加action
        [alertVC addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
            
            UITextField *text=alertVC.textFields.firstObject;
            result=[[text text] UTF8String];
            //NSLog(@"result===>%@",result );

            isInput=YES;
            [inputCondition signal];

        }]];
        
        
        //添加textField, 由于UIAlertView最多只支持添加两个textField，所以这里如果你添加了多个textField，iOS8之前最多显示两个，iOS8及其之后会显示出多个。
        [alertVC addTextFieldWithConfigurationHandler:^(UITextField *textField) {
            textField.placeholder = @"请输入";
        }];
        
        //展示
        //[self presentViewController:alertVC animated:YES completion:nil];

        UIViewController *vc = [UIApplication sharedApplication].windows[0].rootViewController;
        [vc presentViewController:alertVC animated:YES completion:nil];
    });
    
    while (!isInput){
        [inputCondition wait];
    }
    [inputCondition unlock];
    //NSLog(@"result=>%@",result );
    
    return result;
}
void alert(char *title,char * message){
    UIAlertView *alert = [[UIAlertView alloc]
                          initWithTitle:[NSString stringWithUTF8String:title]
                          message:[NSString stringWithUTF8String:message]
                          delegate:nil
                          cancelButtonTitle:@"Cancel"
                          otherButtonTitles:nil];
    // optional - add more buttons:
    //[alert addButtonWithTitle:@"Yes"];
    [alert show];
}

void show(){
    UIAlertView* alert = [[UIAlertView alloc] initWithTitle:@"message"
                                                    message:@"please input"
                                                   delegate:nil
                                          cancelButtonTitle:@"cancel"
                                          otherButtonTitles:@"OK", nil];
    // 基本输入框，显示实际输入的内容
    alert.alertViewStyle = UIAlertViewStylePlainTextInput;
    // 用户名，密码登录框
    //    alert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    // 密码形式的输入框，输入字符会显示为圆点
    //    alert.alertViewStyle = UIAlertViewStyleSecureTextInput;
    
    //设置输入框的键盘类型
    UITextField *tf = [alert textFieldAtIndex:0];
    tf.keyboardType = UIKeyboardTypeNumberPad;
    
    UITextField *tf2 = nil;
    if (alert.alertViewStyle == UIAlertViewStyleLoginAndPasswordInput) {
        // 对于用户名密码类型的弹出框，还可以取另一个输入框
        tf2 = [alert textFieldAtIndex:1];
        tf2.keyboardType = UIKeyboardTypeASCIICapable;
    }
    
    // 取得输入的值
    NSString* text = tf.text;
    NSLog(@"INPUT:%@", text);
    if (alert.alertViewStyle == UIAlertViewStyleLoginAndPasswordInput) {
        // 对于两个输入框的
        NSString* text2 = tf2.text;
        NSLog(@"INPUT2:%@", text2);
    }
    
    [alert show];
}



UIViewController * getCurrentViewController(){
    UIViewController *result = nil;
    
    UIWindow * window = [[UIApplication sharedApplication] keyWindow];
    if (window.windowLevel != UIWindowLevelNormal)
    {
        NSArray *windows = [[UIApplication sharedApplication] windows];
        for(UIWindow * tmpWin in windows)
        {
            if (tmpWin.windowLevel == UIWindowLevelNormal)
            {
                window = tmpWin;
                break;
            }
        }
    }
    
    UIView *frontView = [[window subviews] objectAtIndex:0];
    id nextResponder = [frontView nextResponder];
    
    if ([nextResponder isKindOfClass:[UIViewController class]])
        result = nextResponder;
        else
            result = window.rootViewController;
            
            return result;
}

UIViewController * getPresentedViewController()
{
    UIViewController *appRootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
    UIViewController *topVC = appRootVC;
    if (topVC.presentedViewController) {
        topVC = topVC.presentedViewController;
    }
    
    return topVC;
}



void jmpToController(UIViewController * vc){
    UIViewController * oldVc=getPresentedViewController();
    [oldVc presentViewController:vc animated:YES completion:^(void){
        
    }];
}
void gl_init(){
     dispatch_async(dispatch_get_main_queue(), ^{
         UIViewController * vc=[[GLViewController alloc] init];
         jmpToController(vc);
     });
}
void gl_exit(){
     dispatch_async(dispatch_get_main_queue(), ^{
         UIViewController * vc=getPresentedViewController();
         [vc dismissViewControllerAnimated:YES completion:^(void){
             
         }];
     });
}

obj gui_event_callback;

void gui_on_event(int type,int x,int y){
    call_scheme( gui_event_callback, 4,gui_event_callback, int2fx(type),int2fx(x),int2fx(y) );
}





