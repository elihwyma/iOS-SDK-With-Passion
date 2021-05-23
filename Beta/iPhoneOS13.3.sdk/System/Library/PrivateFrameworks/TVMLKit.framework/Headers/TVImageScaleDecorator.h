/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface TVImageScaleDecorator : TVImageDecorator

{
    _Bool _cornerContinuous;
    _Bool _preservesAlpha;
    long long _scaleMode;
    double _focusedSizeIncrease;
    UIColor *_bgColor;
    struct CGSize _scaleToSize;
    struct UIEdgeInsets _padding;
    struct TVCornerRadii _cornerRadii;
}

@property (nonatomic) struct CGSize scaleToSize;
@property (nonatomic) long long scaleMode;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) struct TVCornerRadii cornerRadii;
@property (nonatomic) _Bool cornerContinuous;
@property (copy, nonatomic) UIColor *bgColor;
@property (nonatomic) _Bool preservesAlpha;
@property (nonatomic) _Bool cropToFit;
@property (nonatomic) double upscaleAdjustment;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)expectedSize;
- (id)initWithScaleToSize:(struct CGSize)arg1 scaleMode:(long long)arg2;
- (struct CGSize)_scaleToSizeAdjustedForUpscaling;
- (struct UIEdgeInsets)_paddingAdjustedForUpscaling;
- (_Bool)needsAlphaForImage:(id)arg1;
- (void)_applyCornerMaskForRect:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;
- (id)_imageFixedForRotation:(id)arg1;
- (double)_focusedSizeIncreaseFactor;
- (id)initWithScaleToSize:(struct CGSize)arg1;
- (id)initWithScaleToSize:(struct CGSize)arg1 cropToFit:(_Bool)arg2;
- (id)decoratorIdentifier;
- (struct CGSize)loaderScaleToSize;
- (_Bool)loaderCropToFit;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;

@end
