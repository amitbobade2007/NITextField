//
//  SecondViewController.m
//  CustomTextField
//
//  Created by Your Company Name on 02/01/15.
//  Copyright (c) 2015 Your Company Name. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController
@synthesize text1;
@synthesize text2;
@synthesize text3;
@synthesize ttx4;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
     
        
        self.title = @"InterfaceBuilder";

    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    text1.niDelegate = self;
    
    text2.type = NITextFieldTypePicker;
    text2.items = [NSArray arrayWithObjects:@"Red",@"Green",@"Blue",@"Black",@"White", nil];
    text2.niDelegate = self;
    
    text3.type = NITextFieldTypeDatePicker;
    text3.datePickerMode = UIDatePickerModeDateAndTime; 
    text3.niDelegate = self;
    
    ttx4.niDelegate = self;
    
    // Do any additional setup after loading the view from its nib.
}

-(void)next:(NITextField *)textField
{
    if(textField == text1)
    {
        [text2 becomeFirstResponder];
    }
    else if(textField == text2)
    {
        [text3 becomeFirstResponder];
    }
}
-(void)previous:(NITextField *)textField
{
    if(textField == text2)
    {
        [text1 becomeFirstResponder];
    }
    else if(textField == text3)
    {
        [text2 becomeFirstResponder];
    }
}


- (void)viewDidUnload
{
    [self setText1:nil];
    [self setText2:nil];
    [self setText3:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
