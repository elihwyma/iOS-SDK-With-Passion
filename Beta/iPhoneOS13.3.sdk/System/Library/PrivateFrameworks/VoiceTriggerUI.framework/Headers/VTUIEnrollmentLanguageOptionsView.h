/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@class NSArray, NSMutableArray, NSString, UITextView, UIView;

@protocol VTUIEnrollmentSetupIntroViewDelegate;

@interface VTUIEnrollmentLanguageOptionsView

{
    UIView *_footerView;
    UITextView *_footerTextView;
    NSArray *_continueButtonsLanguages;
    id <VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
    NSMutableArray *_continueButtons;
}

@property (weak, nonatomic) id <VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;
@property (nonatomic, readonly) NSMutableArray *continueButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)footerView;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)_createFooter;
- (id)languageSelectionOfContinueButton:(id)arg1;
- (void)setContinueButtonLanguages:(id)arg1;
- (void)_setupContent;
- (void)_setupImage;
- (_Bool)suppressFinishButton;
- (void)_addContinueButtonsToFooter;

@end
