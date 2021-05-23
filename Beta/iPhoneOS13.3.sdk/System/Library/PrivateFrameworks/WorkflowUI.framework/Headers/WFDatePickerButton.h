/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSDate, NSSet, NSString, UIDatePicker, UIView, WFVariableInputCoordinator;

@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFDatePickerButton : UIButton <Swift>

{
    UIView *_inputView;
    UIView *_inputAccessoryView;
    NSDate *_currentDate;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _datePickerMode;
    NSSet *_allowedVariableTypes;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    UIDatePicker *_datePicker;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (nonatomic) long long datePickerMode;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType variableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)datePickerValueChanged;

@end
