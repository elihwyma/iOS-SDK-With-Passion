/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PINView.h>

@class AlphanumericPINTableViewCell, NSString, UITableView, UITextField;

@interface PSTextFieldPINView : PINView

{
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
    _Bool _usesNumericKeyboard;
}

@property (nonatomic) _Bool usesNumericKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)appendString:(id)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (_Bool)isFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)deleteLastCharacter;
- (void)setBlocked:(_Bool)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)showError:(id)arg1 animate:(_Bool)arg2;
- (void)hidePasscodeField:(_Bool)arg1;
- (void)okButtonPressed:(id)arg1;

@end
