/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class CSModalButton, CSStatusTextViewController, NSLayoutConstraint, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UILayoutGuide, UIView, _UILegibilitySettings;

@protocol CSModalViewDelegate;

@interface CSModalView : CSCoverSheetViewBase

{
    id <CSModalViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondarySubtitleLabel;
    UIImageView *_imageView;
    UIView *_detailView;
    CSModalButton *_primaryActionButton;
    UIButton *_secondaryActionButton;
    UIView *_centralGroupView;
    UILayoutGuide *_dateViewLayoutGuide;
    NSLayoutConstraint *_dateViewVerticalConstraint;
    NSLayoutConstraint *_centralGroupTopConstraint;
    NSLayoutConstraint *_centralGroupBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSString *_overrideFooterText;
    CSStatusTextViewController *_statusTextViewController;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _showsStatusText;
    _Bool _needsTitleConstraints;
    _Bool _needsSubTitleConstraints;
    _Bool _needsSecondarySubTitleConstraints;
    _Bool _needsPrimaryActionConstraints;
    _Bool _needsSecondaryActionConstraints;
    _Bool _needsImageConstraints;
    _Bool _needsDetailViewConstraints;
    _Bool _wantsEnhancedSecondaryActionButton;
    _Bool _showsDateView;
}

@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel;
@property (retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel;
@property (retain, nonatomic, getter=_secondarySubtitleLabel, setter=_setSecondarySubtitleLabel:) UILabel *secondarySubtitleLabel;
@property (retain, nonatomic, getter=_secondaryActionButton, setter=_setSecondaryActionButton:) UIButton *secondaryActionButton;
@property (retain, nonatomic, getter=_primaryActionButton, setter=_setPrimaryActionButton:) CSModalButton *primaryActionButton;
@property (retain, nonatomic, getter=_imageView, setter=_setImageView:) UIImageView *imageView;
@property (weak, nonatomic) id <CSModalViewDelegate> delegate;
@property (retain, nonatomic) UIView *detailView;
@property (nonatomic) _Bool wantsEnhancedSecondaryActionButton;
@property (nonatomic) _Bool showsDateView;
@property (nonatomic) _Bool showsStatusText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *secondarySubtitleText;
@property (copy, nonatomic) NSString *primaryActionButtonText;
@property (retain, nonatomic) UIColor *primaryActionButtonBackgroundColor;
@property (copy, nonatomic) NSString *secondaryActionButtonText;
@property (copy, nonatomic) UIColor *secondaryActionButtonTextColor;
@property (copy, nonatomic) NSString *footerText;
@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)_titleFont;
- (id)_subtitleFont;
- (void)_buttonTapped:(id)arg1;
- (void)_createAppropriateSecondaryActionButtonIfNecessary;
- (id)_labelWithNumberOfLines:(unsigned long long)arg1 font:(id)arg2;
- (void)_createPrimaryActionButtonIfNecessary;
- (_Bool)_replaceView:(id)arg1 withNewView:(id)arg2 inParentView:(id)arg3;
- (struct CGRect)_dateTimeFrame;
- (void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(_Bool)arg2;
- (double)_bottomBaselineOffset;
- (id)_preferredContentSizeCategoryCappedToSize:(id)arg1;
- (id)_fontWithTextStyle:(id)arg1 cappedToSize:(id)arg2;
- (id)_primaryActionFont;
- (void)_createEnhancedSecondaryActionButtonIfNecessary;
- (void)_createSecondaryActionButtonIfNecessary;
- (id)_secondaryActionFont;
- (double)_timeLabelBaselineY;
- (double)_timeToSubtitleLabelBaselineDifferenceY;

@end
