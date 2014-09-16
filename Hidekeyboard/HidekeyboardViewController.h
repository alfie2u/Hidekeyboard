//
//  HidekeyboardViewController.h
//  Hidekeyboard
//
//  Created by webstudent on 9/15/14.
//  Copyright (c) 2014 webstudent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HidekeyboardViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIScrollView *scrollview;
@property (weak, nonatomic) IBOutlet UITextField *txtfirst;

@property (weak, nonatomic) IBOutlet UITextField *txtthird;
@property (weak, nonatomic) IBOutlet UITextField *txtfourth;
@property (weak, nonatomic) IBOutlet UITextField *txtfifth;
@property (weak, nonatomic) IBOutlet UITextField *txtsecond;
-(IBAction) doneEditing:(id) sender;
@end
