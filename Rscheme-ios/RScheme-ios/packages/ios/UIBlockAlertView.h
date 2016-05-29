//
//  DialogUIAlertView.h
//  RScheme-ios
//
//  Created by evil on 5/28/16.
//  Copyright © 2016 evilbinary.org. All rights reserved.
//

#ifndef DialogUIAlertView_h
#define DialogUIAlertView_h


//  DialogUIAlertView.h
#import <Foundation/Foundation.h>
#import <UIKit/UIAlertView.h>

@interface UIBlockAlertView : NSObject {
    BOOL isWaiting4Tap;
    UIAlertView * alv;
    int alertViewRetValue;
    
}
- (id)initWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ...;
- (int)showDialog;
@end

#endif /* DialogUIAlertView_h */
