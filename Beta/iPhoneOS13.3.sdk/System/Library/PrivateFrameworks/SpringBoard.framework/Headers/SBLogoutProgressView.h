/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CNContact, NSArray, NSLayoutConstraint, SBAppStatusBarSettingsAssertion, UIActivityIndicatorView, UIImageView, UILabel, _UILegibilitySettings;

@interface SBLogoutProgressView : UIView

{
    CNContact *_userContact;
    NSArray *_pendingApplications;
    _UILegibilitySettings *_legibilitySettings;
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBAppStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

@property (retain, nonatomic) CNContact *userContact;
@property (copy, nonatomic) NSArray *pendingApplications;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isProgressVisible) _Bool progressVisible;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_updateLegibility;
- (double)_goodbyeLabelBaselineOffset;
- (double)_userAvatarVerticalOffsetFromCenter;
- (double)_moreDocumentsLabelBaselineOffset;
- (void)_updateViewData;
- (void)_updateUserAvatar;
- (void)_updateUserAvatarLegibility;
- (void)_updateGoodbye;
- (void)_updateBlame;

@end
