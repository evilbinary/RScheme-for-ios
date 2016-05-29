//
//  main.m
//  Rscheme-ios
//
//  Created by evil on 5/14/16.
//  Copyright © 2016 evilbinary.org. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#include "shell.h"
#include <stdlib.h>

int main(int argc, char * argv[]) {
    
 
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory,NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
  
    NSTemporaryDirectory();
    
    //NSLog(@"path:%@ \n%@\n%@\n%@",documentsDirectory, NSHomeDirectory(), [[NSBundle mainBundle] resourcePath],    [[NSBundle mainBundle] pathForResource: @"sys" ofType: @"img"]);
    
    for (int i=0; i<argc; i++) {
        //NSLog(@"argv=%s\n",argv[i]);
    }
    
    NSString *homePath=[[NSBundle mainBundle] resourcePath];
    const char *home = [homePath UTF8String];
    homePath=[homePath stringByAppendingFormat:@"/modules"];
    const char *module = [homePath UTF8String];

    
    setenv( "RS_INSTALL_DIR", home,0);
    setenv( "RS_MODULE_PATH", module,0);

    //as_main(argc,argv);
    as_init(argc,argv);
    
    
    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
