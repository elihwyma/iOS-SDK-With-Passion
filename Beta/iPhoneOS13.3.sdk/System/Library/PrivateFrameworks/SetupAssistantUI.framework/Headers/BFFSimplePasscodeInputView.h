/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFPasscodeInputView.h>

@class NSString, PSPasscodeField;

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView

{
    _Bool _limitCharactersToNumbers;
    PSPasscodeField *_passcodeField;
}

@property (retain, nonatomic) PSPasscodeField *passcodeField;
@property (nonatomic) _Bool limitCharactersToNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (id)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 numberOfEntryFields:(unsigned long long)arg2;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (id)passcodeDisplayView;

@end
