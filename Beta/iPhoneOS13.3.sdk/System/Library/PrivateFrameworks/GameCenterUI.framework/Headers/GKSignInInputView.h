/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface GKSignInInputView : UIView

{
    NSLayoutConstraint *_topToSignInBaselineConstraint;
    NSLayoutConstraint *_bottomToSignInBaselineConstraint;
    NSLayoutConstraint *_signInBaselineToPromptTextTopConstraint;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_promptTextToProgressIndicatorTopConstraint;
    NSLayoutConstraint *_signInFormToSignInLabelTopConstraint;
    NSLayoutConstraint *_privacyLinkToSignInFormTopConstraint;
    NSLayoutConstraint *_signInInputViewHeightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *topToSignInBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomToSignInBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *signInBaselineToPromptTextTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *promptTextToProgressIndicatorTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *signInFormToSignInLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkToSignInFormTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *signInInputViewHeightConstraint;

- (void)setupConstraintConstantsForOrientation:(long long)arg1;
- (id)allVariableConstraints;

@end
