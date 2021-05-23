/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKImageResizingConstraints : NSObject

{
    int _constraintType;
    double _fixedDimension;
    struct CGSize _size;
    double _minAspectRatio;
    double _maxAspectRatio;
    _Bool _respectAspectRatioRange;
    _Bool _outputMirrored;
    double _outputScale;
    double _outputBorderTrim;
    double _outputCornerRadius;
}

@property (nonatomic) double outputScale;
@property (nonatomic) double outputBorderTrim;
@property (nonatomic) double outputCornerRadius;
@property (nonatomic) _Bool outputMirrored;

+ (id)constraintsWithAspectFillToSize:(struct CGSize)arg1;
+ (id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMinSize:(struct CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize)arg1;
+ (id)constraintsWithMinSize:(struct CGSize)arg1;
+ (id)constraintsWithFixedSize:(struct CGSize)arg1;
+ (id)constraintsWithAspectFitToSize:(struct CGSize)arg1;

- (id)init;
- (_Bool)getPixelCropRect:(struct CGRect *)arg1 pixelOutputSize:(struct CGSize *)arg2 forImage:(id)arg3;
- (id)resizedImage:(id)arg1;
- (struct CGRect)_getDrawRectForImage:(struct CGImage *)arg1 withOutputSize:(struct CGSize)arg2;
- (_Bool)_getPixelCropRect:(struct CGRect *)arg1 pixelOutputSize:(struct CGSize *)arg2 forImageSize:(struct CGSize)arg3 scale:(double)arg4;
- (id)_flippedConstraints;
- (_Bool)_reasonable;

@end
