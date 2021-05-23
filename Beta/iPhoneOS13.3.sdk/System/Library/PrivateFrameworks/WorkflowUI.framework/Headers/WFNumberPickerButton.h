/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFBackgroundFadingButton.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSSet, NSString, UIPickerView, UIView, WFVariableInputCoordinator;

@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberPickerButton : WFBackgroundFadingButton <Swift>

{
    UIView *_inputView;
    UIView *_inputAccessoryView;
    NSSet *_allowedVariableTypes;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    unsigned long long _currentValue;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    UIPickerView *_pickerView;
    WFVariableInputCoordinator *_variableCoordinator;
    struct _NSRange _allowedRange;
}

@property (nonatomic, readonly) UIPickerView *pickerView;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) struct _NSRange allowedRange;
@property (nonatomic) unsigned long long currentValue;
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
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)updateVariableBlock;

@end
