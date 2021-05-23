/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIInputView.h>

@class NSMutableArray, UIButton, UILabel, _SFTextSuggestion;

@protocol _SFAutoFillInputViewDelegate;

@interface _SFAutoFillInputView : UIInputView

{
    _SFTextSuggestion *_suggestion;
    UILabel *_explanationLabel;
    UIButton *_keyboardButton;
    UIButton *_otherPasswordsButton;
    UIButton *_fillCredentialButton;
    NSMutableArray *_dynamicConstraints;
    id <_SFAutoFillInputViewDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFAutoFillInputViewDelegate> delegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3;
- (void)_updateFillCredentialButtonLabelMetrics;
- (void)_fillCredential:(id)arg1;
- (void)_showStandardKeyboard:(id)arg1;
- (void)_showMorePasswords:(id)arg1;

@end
