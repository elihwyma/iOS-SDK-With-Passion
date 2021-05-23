/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSPasscodeField;

@protocol KeychainSyncPasscodeFieldDelegate;

@interface PasscodeFieldCell

{
    PSPasscodeField *_passcodeField;
    _Bool _convertsNumeralsToASCII;
    _Bool _denyFirstResponder;
    id <KeychainSyncPasscodeFieldDelegate> _delegate;
}

@property (weak, nonatomic) id <KeychainSyncPasscodeFieldDelegate> delegate;
@property (nonatomic) _Bool convertsNumeralsToASCII;
@property (nonatomic) _Bool denyFirstResponder;
@property (nonatomic, readonly) PSPasscodeField *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)keyboardType;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)deleteBackward;
- (_Bool)hasText;
- (id)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)cellTapped:(id)arg1;
- (void)_setSecureTextEntry:(_Bool)arg1;
- (void)setPasscodeText:(id)arg1;
- (id)passcodeText;

@end
