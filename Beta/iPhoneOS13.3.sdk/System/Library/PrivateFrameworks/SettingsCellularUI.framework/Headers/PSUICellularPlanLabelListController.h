/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class NSArray, NSString, PSUICellularPlanUniversalReference, UITextField;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanLabelListController : PSListController

{
    NSArray *_predefinedLabels;
    NSString *_validatedCustomLabelText;
    UITextField *_textField;
    PSUICellularPlanUniversalReference *_planReference;
}

@property (retain, nonatomic) NSArray *predefinedLabels;
@property (retain, nonatomic) NSString *validatedCustomLabelText;
@property (weak, nonatomic) UITextField *textField;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dismissKeyboard;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)specifiers;

@end
