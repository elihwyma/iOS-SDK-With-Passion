/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMZoomDialDotsView, NSArray, NSObject, NSString, UIImageView;

@protocol OS_dispatch_queue;

@interface CAMZoomDial : UIView

{
    _Bool _expanded;
    _Bool _hideLabels;
    _Bool __backgroundViewUpdateNeeded;
    _Bool __labelsUpdateNeeded;
    _Bool __dotsUpdateNeeded;
    _Bool __ticksUpdateNeeded;
    _Bool __maskUpdateNeeded;
    long long _style;
    NSArray *_zoomFactors;
    double _minAvailableZoomFactor;
    double _maxAvailableZoomFactor;
    double _zoomFactor;
    double _contentMaskingHeight;
    double _contractionDistance;
    long long _orientation;
    NSString *_contentSizeCategory;
    UIImageView *__backgroundView;
    UIView *__contentContainerView;
    UIView *__labelContainerView;
    UIImageView *__ticksView;
    UIImageView *__contentMaskView;
    UIView *__needleView;
    NSArray *__focalLengthLabelsPortrait;
    NSArray *__focalLengthLabelsLandscape;
    NSArray *__labels;
    CAMZoomDialDotsView *__activeDots;
    CAMZoomDialDotsView *__inactiveDots;
    NSObject<OS_dispatch_queue> *__imageGenerationQueue;
    long long __backgroundImageJobIdentifier;
    long long __ticksImageJobIdentifier;
    long long __maskImageJobIdentifier;
}

@property (nonatomic, readonly) _Bool _useDots;
@property (nonatomic, readonly) _Bool _useTicks;
@property (nonatomic, readonly) double _backgroundAlpha;
@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) UIView *_labelContainerView;
@property (nonatomic, readonly) UIImageView *_ticksView;
@property (nonatomic, readonly) UIImageView *_contentMaskView;
@property (nonatomic, readonly) UIView *_needleView;
@property (retain, nonatomic, setter=_setFocalLengthLabelsPortrait:) NSArray *_focalLengthLabelsPortrait;
@property (retain, nonatomic, setter=_setFocalLengthLabelsLandscape:) NSArray *_focalLengthLabelsLandscape;
@property (retain, nonatomic, setter=_setLabels:) NSArray *_labels;
@property (nonatomic, readonly) CAMZoomDialDotsView *_activeDots;
@property (nonatomic, readonly) CAMZoomDialDotsView *_inactiveDots;
@property (nonatomic, readonly) double _fullRadius;
@property (nonatomic, readonly) double _fullRadiusInset;
@property (nonatomic, readonly) double _radiusDelta;
@property (nonatomic, readonly) double _borderStrokeWidth;
@property (nonatomic, readonly) double _tickLabelCenterRadialInset;
@property (nonatomic, readonly) double _focalLengthInsetPortrait;
@property (nonatomic, readonly) double _focalLengthInsetLandscape;
@property (nonatomic, readonly) double _labelPaddingForContentSizeCategory;
@property (nonatomic, getter=_isBackgroundViewUpdateNeeded, setter=_setBackgroundViewUpdateNeeded:) _Bool _backgroundViewUpdateNeeded;
@property (nonatomic, getter=_isLabelsUpdateNeeded, setter=_setLabelsUpdateNeeded:) _Bool _labelsUpdateNeeded;
@property (nonatomic, getter=_isDotsUpdateNeeded, setter=_setDotsUpdateNeeded:) _Bool _dotsUpdateNeeded;
@property (nonatomic, getter=_isTicksUpdateNeeded, setter=_setTicksUpdateNeeded:) _Bool _ticksUpdateNeeded;
@property (nonatomic, getter=_isMaskUpdateNeeded, setter=_setMaskUpdateNeeded:) _Bool _maskUpdateNeeded;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_imageGenerationQueue;
@property (nonatomic, setter=_setBackgroundImageJobIdentifier:) long long _backgroundImageJobIdentifier;
@property (nonatomic, setter=_setTicksImageJobIdentifier:) long long _ticksImageJobIdentifier;
@property (nonatomic, setter=_setMaskImageJobIdentifier:) long long _maskImageJobIdentifier;
@property (nonatomic, readonly) long long style;
@property (retain, nonatomic) NSArray *zoomFactors;
@property (nonatomic, readonly) double minimumZoomFactor;
@property (nonatomic, readonly) double maximumZoomFactor;
@property (nonatomic) double minAvailableZoomFactor;
@property (nonatomic) double maxAvailableZoomFactor;
@property (nonatomic) double zoomFactor;
@property (nonatomic) double contentMaskingHeight;
@property (nonatomic) double contractionDistance;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic) long long orientation;
@property (nonatomic) _Bool hideLabels;
@property (nonatomic, readonly) struct CGPoint dialCenter;
@property (nonatomic, readonly) double dotCenterInset;
@property (nonatomic, readonly) double dialBorderWidth;
@property (nonatomic, readonly) double angleDeltaForZoomRange;
@property (copy, nonatomic) NSString *contentSizeCategory;

+ (double)_normalizedValueForZoomFactor:(double)arg1 min:(double)arg2 max:(double)arg3;
+ (double)_offsetAngleForZoomFactor:(double)arg1 relativeToCurrentZoomFactor:(_Bool)arg2 currentZoomFactor:(double)arg3 min:(double)arg4 max:(double)arg5 signedAngleDeltaForZoomRange:(double)arg6;
+ (struct CGPoint)_pointForOffsetAngle:(double)arg1 dialCenter:(struct CGPoint)arg2 radius:(double)arg3;
+ (id)_createBackgroundImageForBounds:(struct CGRect)arg1 dialCenter:(struct CGPoint)arg2 radius:(double)arg3 backgroundAlpha:(double)arg4 borderStrokeWidth:(double)arg5;
+ (id)_createTicksImageForBounds:(struct CGRect)arg1 dialCenter:(struct CGPoint)arg2 radius:(double)arg3 pixelWidth:(double)arg4 zoomFactors:(id)arg5 minAvailableZoomFactor:(double)arg6 maxAvailableZoomFactor:(double)arg7 signedAngleDeltaForZoomRange:(double)arg8;
+ (id)_createMaskImageWithSize:(struct CGSize)arg1 tickLabelCenterRadialInset:(double)arg2 notchMaskImage:(id)arg3 labelMaskImage:(id)arg4;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateLabels;
- (void)_updateContentIfNeeded;
- (void)removeInternalAnimationsAndSetToCurrentPresentationValues:(_Bool)arg1;
- (struct CGPoint)textCenterForZoomFactor:(double)arg1 assumeExpanded:(_Bool)arg2;
- (double)offsetAngleForPoint:(struct CGPoint)arg1;
- (double)offsetAngleForZoomFactor:(double)arg1;
- (double)zoomFactorForOffsetAngle:(double)arg1;
- (double)normalizedValueForZoomFactor:(double)arg1;
- (double)zoomFactorForNormalizedValue:(double)arg1;
- (void)_commonCAMZoomDialInitialization;
- (id)_createDotImage;
- (void)_updateFocalLengthLabels;
- (void)_updateDots;
- (void)_updateTicksImageIfNeeded;
- (void)_updateMaskImageIfNeeded;
- (void)_updateFocalLengthLabelAlphas;
- (double)_offsetAngleForZoomFactor:(double)arg1 relativeToCurrentZoomFactor:(_Bool)arg2;
- (double)_signedAngleDeltaForZoomRange;
- (struct CGPoint)_dotCenterForOffsetAngle:(double)arg1 assumeExpanded:(_Bool)arg2;
- (struct CGPoint)_pointForOffsetAngle:(double)arg1 radialInset:(double)arg2 assumeExpanded:(_Bool)arg3;
- (struct CGPoint)_textCenterForOffsetAngle:(double)arg1 assumeExpanded:(_Bool)arg2;
- (void)_invalidateImagesForViewSize;
- (void)_updateBackroundImageViewIfNeeded;
- (void)_layoutSubviewsWithDots;
- (void)_layoutSubviewsWithTicks;
- (void)_layoutBackgroundAndContainerWithContentInset:(double)arg1;
- (struct CGPoint)_dotCenterForZoomFactor:(double)arg1 assumeExpanded:(_Bool)arg2 relativeToCurrentZoomFactor:(_Bool)arg3;
- (double)_labelRotationAngleForOrientation;
- (struct CGPoint)_tickEndpointForOffsetAngle:(double)arg1 isTop:(_Bool)arg2;

@end
