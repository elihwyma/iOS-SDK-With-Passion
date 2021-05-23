/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFPasscodeInputView.h>

@class NSString, UITextField;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView

{
    UITextField *_passcodeField;
}

@property (retain, nonatomic) UITextField *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_layout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (id)passcodeDisplayView;
- (id)initWithFrame:(struct CGRect)arg1 numericOnly:(_Bool)arg2;

@end
