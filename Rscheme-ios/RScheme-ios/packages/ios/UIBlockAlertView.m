//
//  DialogUIAlertView.m
//  RScheme-ios
//
//  Created by evil on 5/28/16.
//  Copyright © 2016 evilbinary.org. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "UIBlockAlertView.h"

@implementation UIBlockAlertView

- (id)initWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ...
{
    alv = [[UIAlertView alloc] initWithTitle:title message:message delegate:self cancelButtonTitle:cancelButtonTitle otherButtonTitles:otherButtonTitles,nil];
    
    isWaiting4Tap = YES;
    return self;
}
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    alertViewRetValue = buttonIndex;
    isWaiting4Tap = NO;
}
- (int)showDialog
{
    isWaiting4Tap = YES;
    [alv show];
    while (isWaiting4Tap) {
        [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate distantFuture]];
    }
    return alertViewRetValue;
}
- (void)dealloc {
    //[super dealloc];
    //[alv release];
}
@end