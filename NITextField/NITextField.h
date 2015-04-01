//
//  NITextField.h
//  CustomTextField
//
//  Created by Your Company Name on 02/01/15.
//  Copyright (c) 2015 Your Company Name. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NITextFieldDelegate;

typedef enum  {
   NITextFieldTypeNone = 0,
   NITextFieldTypePicker = 1 ,
   NITextFieldTypeDatePicker = 2
} NITextFieldType;


@interface NITextField : UITextField <UIPickerViewDelegate,UIPickerViewDataSource>
{
    
@private;
    UIPopoverController * popOverController;
}
-(id)initWithType:(NITextFieldType)type_;
@property(nonatomic,strong) NSDate * date;
@property(nonatomic) NITextFieldType type;
@property(nonatomic,strong) NSArray * items;
@property(nonatomic) UIDatePickerMode datePickerMode;
@property(nonatomic,strong) NSDateFormatter * dateFormatter;
@property(nonatomic,assign) id<NITextFieldDelegate> niDelegate;
@end

@protocol NITextFieldDelegate <NSObject>

-(void)next:(NITextField*)textField;
-(void)previous:(NITextField*)textField;

@end