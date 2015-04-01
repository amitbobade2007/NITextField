//
//  SecondViewController.h
//  CustomTextField
//
//  Created by Your Company Name on 02/01/15.
//  Copyright (c) 2015 Your Company Name. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NITextField.h"

@interface SecondViewController : UIViewController <NITextFieldDelegate>
@property (weak, nonatomic) IBOutlet NITextField *text1;
@property (weak, nonatomic) IBOutlet NITextField *text2;
@property (weak, nonatomic) IBOutlet NITextField *ttx4;
@property (weak, nonatomic) IBOutlet NITextField *text3;
@end
