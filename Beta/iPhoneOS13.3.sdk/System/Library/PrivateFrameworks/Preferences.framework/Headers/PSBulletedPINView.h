/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PINView.h>

@class NSString, PSPasscodeField;

@interface PSBulletedPINView : PINView

{
    PSPasscodeField *_passcodeField;
}

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
- (void)deleteLastCharacter;
- (void)setBlocked:(_Bool)arg1;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)hidePasscodeField:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 numberOfFields:(int)arg2;

@end
