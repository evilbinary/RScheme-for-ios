//
//  ViewController.m
//  Rscheme-ios
//
//  Created by evil on 5/14/16.
//  Copyright © 2016 evilbinary.org. All rights reserved.
//

#import "ViewController.h"
#include "shell.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextView *text;
@property (weak, nonatomic) IBOutlet UITextView *resultText;


@end

@implementation ViewController

@synthesize resultText;
@synthesize text;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    text.returnKeyType= UIReturnKeyDefault;
    text.keyboardType= UIKeyboardTypeDefault;
    //定义一个toolBar
    
    UIToolbar
    * topView = [[UIToolbar alloc]initWithFrame:CGRectMake(0, 0, 320, 35)];
    
    
    
    //设置style
    
    [topView setBarStyle:UIBarStyleDefault];
    
    //定义两个flexibleSpace的button，放在toolBar上，这样完成按钮就会在最右边
    UIBarButtonItem
    * button1 =[[UIBarButtonItem  alloc]initWithBarButtonSystemItem:                                        UIBarButtonSystemItemFlexibleSpace target:self action:nil];
    
    UIBarButtonItem
    * button2 = [[UIBarButtonItem  alloc]   initWithBarButtonSystemItem:                                        UIBarButtonSystemItemFlexibleSpace target:self action:nil];
    
    //定义完成按钮
    UIBarButtonItem
    * doneButton = [[UIBarButtonItem alloc] initWithTitle:@"运行" style:UIBarButtonItemStyleDone
                                                  target:self action:@selector(resignKeyboard)];
    //在toolBar上加上这些按钮
    NSArray* buttonsArray = [NSArray arrayWithObjects:button1,button2,doneButton,nil];
    [topView setItems:buttonsArray];
    [text setInputAccessoryView:topView];
    
    
    
    
}

- (void)eval:(NSString*)exp{
  
    NSLog(@"eval----%@",[NSThread currentThread]);

    obj ret=as_eval([exp UTF8String] );
    char *result=unicode_string_text(ret);
    
    [self performSelectorOnMainThread:@selector(evalFinished:) withObject:[NSString stringWithUTF8String:result] waitUntilDone:NO];



}
- (void)evalFinished:(NSString *)result {
 
    NSLog(@"evalFinished----%@",[NSThread currentThread]);
    
    [resultText setText:result];
    [text resignFirstResponder];
}

-(void)resignKeyboard{
    
    //[self performSelectorInBackground:@selector(eval:)   withObject:[text text] ];
    
    //NSThread *thread = [[NSThread alloc] initWithTarget:self selector:@selector(eval:) object:[text text] ];
    //[thread start];
    [NSThread detachNewThreadSelector:@selector(eval:) toTarget:self withObject:[text text] ];

    
}

- (IBAction)runAction:(id)sender {
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
