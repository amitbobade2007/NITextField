//
//  FirstViewController.h
//  CustomTextField
//
//  Created by Your Company Name on 02/01/15.
//  Copyright (c) 2015 Your Company Name. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NITextField.h"
@interface FirstViewController : UIViewController <NITextFieldDelegate>
{
    NITextField * text1;
    NITextField * text2;
    NITextField * text3;
}
@end
