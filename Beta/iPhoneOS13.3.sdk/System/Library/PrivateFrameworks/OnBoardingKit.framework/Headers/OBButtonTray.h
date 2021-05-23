/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, OBButtonTrayLayoutGuide, OBPrivacyLinkController, OBTemplateLabel, UIStackView, UIViewController, UIVisualEffectView;

@interface OBButtonTray : UIView

{
    long long _backdropStyle;
    UIViewController *_parentViewController;
    NSMutableArray *_buttons;
    OBButtonTrayLayoutGuide *_buttonLayoutGuide;
    OBPrivacyLinkController *_privacyLinkController;
    OBTemplateLabel *_captionLabel;
    UIStackView *_stackView;
    UIView *_backdropContainer;
    UIVisualEffectView *_effectView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewBottomConstraint;
    NSLayoutConstraint *_stackViewLeadingConstraint;
    NSLayoutConstraint *_stackViewTrailingConstraint;
}

@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) OBButtonTrayLayoutGuide *buttonLayoutGuide;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (retain, nonatomic) OBTemplateLabel *captionLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *backdropContainer;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (nonatomic) long long backdropStyle;

- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_setUpBackdrops;
- (void)_updateTrayVisibility;
- (void)_updateButtonConstraints;
- (id)_captionFont;
- (double)bottomPadding;
- (void)addButton:(id)arg1;
- (void)addPrivacyLinkForBundles:(id)arg1;
- (void)addCaptionText:(id)arg1;

@end
