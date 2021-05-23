/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, CAShapeLayer, UIButton, UILabel, UIVisualEffectView;

@protocol CAMDescriptionOverlayViewDelegate;

@interface CAMDescriptionOverlayView : UIView

{
    _Bool _blackoutFrameVisible;
    id <CAMDescriptionOverlayViewDelegate> _delegate;
    long long _orientation;
    UIVisualEffectView *__blurEffectView;
    UIView *__blackoutView;
    CAShapeLayer *__blackoutMask;
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *__primaryVibrancyEffectView;
    UILabel *__titleLabel;
    UILabel *__descriptionTitleLabel;
    UILabel *__descriptionLabel;
    UILabel *__infoTitleLabel;
    UILabel *__infoLabel;
    UIButton *__acknowledgmentButton;
    double __descriptionFontSizeMultiplier;
    double __infoFontSizeMultiplier;
    struct CGRect _viewportFrame;
}

@property (nonatomic, readonly) UIVisualEffectView *_blurEffectView;
@property (nonatomic, readonly) UIView *_blackoutView;
@property (nonatomic, readonly) CAShapeLayer *_blackoutMask;
@property (nonatomic, readonly) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, readonly) UILabel *_descriptionTitleLabel;
@property (nonatomic, readonly) UILabel *_descriptionLabel;
@property (nonatomic, readonly) UILabel *_infoTitleLabel;
@property (nonatomic, readonly) UILabel *_infoLabel;
@property (nonatomic, readonly) UIButton *_acknowledgmentButton;
@property (nonatomic, setter=_setDescriptionFontSizeMultiplier:) double _descriptionFontSizeMultiplier;
@property (nonatomic, setter=_setInfoFontSizeMultiplier:) double _infoFontSizeMultiplier;
@property (weak, nonatomic) id <CAMDescriptionOverlayViewDelegate> delegate;
@property (nonatomic, getter=isAcknowledgmentButtonHighlighted) _Bool acknowledgmentButtonHighlighted;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect viewportFrame;
@property (nonatomic, getter=isBlackoutFrameVisible) _Bool blackoutFrameVisible;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_isVisible;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)updateToContentSize:(id)arg1;
- (void)setVisible:(_Bool)arg1 animationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)titleTextUsingNarrowWidth:(_Bool)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTitleTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTextUsingNarrowWidth:(_Bool)arg1;
- (id)infoTitleTextUsingNarrowWidth:(_Bool)arg1;
- (id)infoTextUsingNarrowWidth:(_Bool)arg1;
- (double)maxDescriptionTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxInfoTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)additionalSpacing;
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;
- (void)_updateFontsUsingNarrowWidth:(_Bool)arg1;
- (void)_updateTextUsingNarrowWidth:(_Bool)arg1;
- (void)_layoutBlackoutMaskForFrame:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;

@end
