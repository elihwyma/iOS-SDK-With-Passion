/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, NSLayoutXAxisAnchor, NSString, SGTappableTextView, UIButton, UIImageView, UILabel;

@interface SGBanner : UIControl

{
    SGTappableTextView *_subtitleLabel;
    NSString *_action;
    _Bool _needsSubtitleUpdate;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIImageView *_secondImageView;
    UIImageView *_firstImageView;
    UIImageView *_disclosureImageView;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSLayoutConstraint *_verticalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_horisontalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_closeButtonHorizontalPositionConstraint;
    NSLayoutConstraint *_closeButtonWidthConstraint;
    NSLayoutConstraint *_disclosureImageViewHorizontalPositionConstraint;
    long long _currentStyle;
    NSArray *_images;
    long long _accessoryType;
    NSLayoutXAxisAnchor *_closeButtonCenterXAnchor;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) long long accessoryType;
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property (nonatomic, readonly) struct CGRect popoverSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_titleFont;
+ (id)_subtitleFont;
+ (id)_disclosureChevronImage;
+ (double)_interLabelBaselineDeltaConstant;
+ (double)_topMarginConstant;
+ (double)_imageCenterOffsetFromTitleBaselineConstant;
+ (id)_cancelImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)_updateBackground;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_titleColor;
- (void)_updateFonts;
- (void)_setupViews;
- (id)_subtitleColor;
- (void)_updateCurrentAppearance;
- (void)tappableTextView:(id)arg1 didTapRange:(struct _NSRange)arg2;
- (void)_installLayoutConstraints;
- (void)_onAction:(id)arg1;
- (void)_onDismiss:(id)arg1;

@end
