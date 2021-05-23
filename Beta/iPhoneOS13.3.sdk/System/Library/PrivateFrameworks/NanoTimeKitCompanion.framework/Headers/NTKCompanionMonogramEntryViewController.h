/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Preferences/PSListController.h>

@class NSString, UITextField;

@interface NTKCompanionMonogramEntryViewController : PSListController

{
    _Bool _showsDoneButton;
    UITextField *_monogramEntry;
}

@property (retain, nonatomic) UITextField *monogramEntry;
@property (nonatomic) _Bool showsDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localizedDescription;
+ (id)localizedTitle;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_doneTapped;
- (id)specifiers;
- (void)returnPressedAtEnd;
- (void)setCustomMonogram:(id)arg1 specifier:(id)arg2;
- (id)customMonogram:(id)arg1;
- (void)_resetEntryField;

@end
