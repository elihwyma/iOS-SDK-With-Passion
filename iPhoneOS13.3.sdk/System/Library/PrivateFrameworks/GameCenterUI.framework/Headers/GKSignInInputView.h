//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(retain, nonatomic) NSLayoutConstraint *signInInputViewHeightConstraint; // @synthesize signInInputViewHeightConstraint=_signInInputViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *privacyLinkToSignInFormTopConstraint; // @synthesize privacyLinkToSignInFormTopConstraint=_privacyLinkToSignInFormTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *signInFormToSignInLabelTopConstraint; // @synthesize signInFormToSignInLabelTopConstraint=_signInFormToSignInLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *promptTextToProgressIndicatorTopConstraint; // @synthesize promptTextToProgressIndicatorTopConstraint=_promptTextToProgressIndicatorTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *signInBaselineToPromptTextTopConstraint; // @synthesize signInBaselineToPromptTextTopConstraint=_signInBaselineToPromptTextTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomToSignInBaselineConstraint; // @synthesize bottomToSignInBaselineConstraint=_bottomToSignInBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topToSignInBaselineConstraint; // @synthesize topToSignInBaselineConstraint=_topToSignInBaselineConstraint;
// - (void).cxx_destruct;
- (id)allVariableConstraints;
- (void)setupConstraintConstantsForOrientation:(long long)arg1;

@end

