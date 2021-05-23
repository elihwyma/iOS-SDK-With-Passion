/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSMutableCharacterSet, NSString, SBUIPasscodeTextField, UIColor, UIFont, UITextField;

@protocol SBUIPasscodeEntryFieldDelegate;

@interface SBUIPasscodeEntryField : UIView

{
    id <SBUIPasscodeEntryFieldDelegate> _delegate;
    SBUIPasscodeTextField *_textField;
    NSMutableCharacterSet *_numericTrimmingSet;
    _Bool _ignoreCallbacks;
    _Bool _resigningFirstResponder;
    UIColor *_customBackgroundColor;
}

@property (nonatomic, readonly, getter=_textField) UITextField *textField;
@property (weak, nonatomic) id <SBUIPasscodeEntryFieldDelegate> delegate;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_usesTextFieldForFirstResponder;

- (void)appendString:(id)arg1;
- (void)reset;
- (_Bool)isFirstResponder;
- (struct CGSize)_viewSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)deleteLastCharacter;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setLuminosityBoost:(double)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
- (void)_appendString:(id)arg1;
- (void)_deleteLastCharacter;
- (_Bool)_hasAnyCharacters;
- (void)notePasscodeFieldDidAcceptEntry;
- (_Bool)shouldInsertPasscodeText:(id)arg1;
- (void)notePasscodeFieldTextDidChange;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;

@end
