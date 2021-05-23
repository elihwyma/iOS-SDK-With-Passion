/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSObservation, NSProgress, UIColor, UIImage, UIImageView, UIVisualEffectView;

@interface UIProgressView : UIView <Swift>

{
    long long _progressViewStyle;
    float _progress;
    long long _barStyle;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIView *_contentView;
    UIImageView *_trackView;
    UIImageView *_progressView;
    _Bool _isAnimating;
    NSArray *_trackColors;
    NSArray *_progressColors;
    UIVisualEffectView *_effectView;
    NSProgress *_observedProgress;
    NSObservation *_progressObservation;
    UIView *_shadowView;
    double _currentCornerRadius;
    UIImage *_trackImage;
    UIImage *_progressImage;
}

@property (nonatomic) long long progressViewStyle;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *trackTintColor;
@property (retain, nonatomic) UIImage *progressImage;
@property (retain, nonatomic) UIImage *trackImage;
@property (retain, nonatomic) NSProgress *observedProgress;

+ (struct CGSize)defaultSize;
+ (id)_tintedImageWithTraitCollection:(id)arg1 forHeight:(double)arg2 andColors:(id)arg3 roundingRectCorners:(unsigned long long)arg4;
+ (id)_tintedImageWithTraitCollection:(id)arg1 forHeight:(double)arg2 andColors:(id)arg3;
+ (unsigned long long)_indexForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (void)_fillImagesForIndex:(unsigned long long)arg1 style:(long long)arg2 barStyle:(long long)arg3;
+ (id)_standardOuterImageForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (id)_standardInnerImageForStyle:(long long)arg1 barStyle:(long long)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_layoutShadow;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBarStyle:(long long)arg1;
- (long long)barStyle;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)_setProgress:(float)arg1;
- (id)_progressColor;
- (id)_effectiveContentView;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (void)_setupProgressViewCommon;
- (void)_updateImages;
- (_Bool)_shouldTintTrack;
- (_Bool)_shouldTintProgress;
- (id)_defaultTrackColorForCurrentStyle;
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;
- (id)_appropriateTrackImage;
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;
- (id)_appropriateProgressImage;
- (double)_shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4;
- (id)initWithProgressViewStyle:(long long)arg1;
- (void)_updateCornerRadiusWithSize:(struct CGSize)arg1;
- (void)_setupShadow;
- (void)_setProgressColor:(id)arg1;

@end
