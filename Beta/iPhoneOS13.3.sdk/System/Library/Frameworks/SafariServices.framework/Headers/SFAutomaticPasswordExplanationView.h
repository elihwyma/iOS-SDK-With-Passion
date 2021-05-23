/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

#import <SafariServices/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, SFAutomaticPasswordScrollViewContentView, UIButton, UIImageView, UILabel, UILayoutGuide, UIScrollView;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordExplanationView : UIView <Swift>

{
    _Bool _isPad;
    long long _keyboardType;
    UIScrollView *_scrollView;
    SFAutomaticPasswordScrollViewContentView *_scrollableContentView;
    UIImageView *_shadowImageView;
    NSLayoutConstraint *_strongPasswordButtonWidthConstraint;
    NSLayoutConstraint *_strongPasswordButtonHeightConstraint;
    NSLayoutConstraint *_useCustomPasswordButtonWidthConstraint;
    NSLayoutConstraint *_useCustomPasswordBaselineToBottomConstraint;
    NSArray *_wideShadowImageViewConstraints;
    NSArray *_narrowShadowImageViewConstraints;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_contentLayoutGuideBottomConstraint;
    UILayoutGuide *_scrollableContentCenterLayoutGuide;
    _Bool _requiresWideAppearance;
    double _wideContentMaximumPadding;
    NSLayoutConstraint *_wideContentLeadingConstraint;
    NSLayoutConstraint *_wideContentTrailingConstraint;
    NSLayoutConstraint *_narrowContentLeadingConstraint;
    NSLayoutConstraint *_narrowContentTrailingConstraint;
    NSLayoutConstraint *_iPadWidthConstraint;
    _Bool _scrollViewNeedsShadowCachedValue;
    UILabel *_explanationLabel;
    UILabel *_passwordRetrievalExpalantionLabel;
    UIButton *_useStrongPasswordButton;
    UIButton *_useOtherPasswordButton;
    long long _keyboardAppearance;
}

@property (nonatomic, readonly) UILabel *explanationLabel;
@property (nonatomic, readonly) UILabel *passwordRetrievalExpalantionLabel;
@property (nonatomic, readonly) UIButton *useStrongPasswordButton;
@property (nonatomic, readonly) UIButton *useOtherPasswordButton;
@property (nonatomic) long long keyboardAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)scrollViewDidScroll:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (id)initWithKeyboardType:(long long)arg1;
- (void)_createSubviews;
- (void)automaticPasswordScrollContentViewDidLayout:(id)arg1;
- (void)_createLayoutConstraints;
- (void)_updateTextAndButtonColor;
- (void)_updateStrongPasswordHeightConstraint;
- (void)_updateWideAppearanceRequirement;
- (void)_updateMaximumPadding;
- (void)_updateContentLayoutGuideBottomConstraint;
- (void)_updateUseCustomPasswordBaselineToBottomConstraint;
- (_Bool)_scrollViewNeedsShadow:(_Bool)arg1;
- (void)_updateShadowViewAlpha;

@end
