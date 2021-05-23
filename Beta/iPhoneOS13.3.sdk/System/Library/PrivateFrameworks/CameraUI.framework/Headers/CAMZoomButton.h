/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class CAMZoomFactorLabel, NSString, UIImageView, UIView;

@protocol CAMZoomButtonDelegate;

@interface CAMZoomButton : UIControl

{
    _Bool _shouldHideBackground;
    _Bool _overPlatter;
    _Bool _abbreviateAndEnlargeText;
    id <CAMZoomButtonDelegate> _delegate;
    long long _contentType;
    double _zoomFactor;
    long long _zoomSymbol;
    long long _orientation;
    NSString *_contentSizeCategory;
    UIView *__contentContainerView;
    CAMZoomFactorLabel *__zoomFactorLabel;
    UIImageView *__zoomSymbolView;
    UIImageView *__circleImageView;
    UIImageView *__backgroundImageView;
    struct UIEdgeInsets _tappableEdgeInsets;
    struct CGAffineTransform _highlightingTransform;
}

@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) CAMZoomFactorLabel *_zoomFactorLabel;
@property (nonatomic, readonly) UIImageView *_zoomSymbolView;
@property (nonatomic, readonly) UIImageView *_circleImageView;
@property (nonatomic, readonly) UIImageView *_backgroundImageView;
@property (nonatomic, setter=_setHighlightingTransform:) struct CGAffineTransform highlightingTransform;
@property (weak, nonatomic) id <CAMZoomButtonDelegate> delegate;
@property (nonatomic) long long contentType;
@property (nonatomic) double zoomFactor;
@property (nonatomic) long long zoomSymbol;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (nonatomic) _Bool shouldHideBackground;
@property (nonatomic, getter=isOverPlatter) _Bool overPlatter;
@property (nonatomic) _Bool abbreviateAndEnlargeText;
@property (copy, nonatomic) NSString *contentSizeCategory;

+ (id)textForZoomFactor:(double)arg1 showZoomFactorSymbol:(_Bool)arg2;
+ (double)fontSizeForContentSize:(id)arg1;
+ (id)textForZoomFactor:(double)arg1 showZoomFactorSymbol:(_Bool)arg2 useLeadingZero:(_Bool)arg3;
+ (_Bool)_useOutline;
+ (double)circleDiameterForContentSize:(id)arg1;
+ (_Bool)_shouldUseLargeButtonSizeForContentSize:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_performHighlightAnimation;
- (void)setContentType:(long long)arg1 animated:(_Bool)arg2;
- (void)setZoomSymbol:(long long)arg1 animated:(_Bool)arg2;
- (void)setShouldHideBackground:(_Bool)arg1 animationDuration:(double)arg2;
- (void)_updateBackgroundImageViewAlpha;
- (void)_updateForContentSize;
- (void)_updateZoomFactorLabel;
- (id)_createBackgroundImageForContentSize:(id)arg1;
- (id)_createCircleImageForContentSize:(id)arg1;
- (void)_commonCAMZoomButtonInitialization;
- (void)_createZoomSymbolViewIfNecessary;
- (id)_imageForZoomSymbol:(long long)arg1;
- (struct CGAffineTransform)_targetTransformForHighlighted:(_Bool)arg1 orientation:(long long)arg2;
- (struct CGAffineTransform)_highlightingTransformForHighlighted:(_Bool)arg1;
- (double)_backgroundImageDiameterForContentSize:(id)arg1;
- (double)_circleLineWidthForContentSize:(id)arg1;

@end
