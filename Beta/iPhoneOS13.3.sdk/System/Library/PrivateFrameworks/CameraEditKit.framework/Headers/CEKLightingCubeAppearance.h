/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@interface CEKLightingCubeAppearance : NSObject

{
    struct CGGradient *_background;
    struct CGColor *_topFill;
    struct CGGradient *_topGlow;
    struct CGGradient *_topMask;
    struct CGColor *_bottomFill;
    struct CGGradient *_bottomInnerGlow;
    struct CGGradient *_bottomOuterGlow;
    struct CGGradient *_bottomMask;
    struct CGColor *_verticalFillColor;
    double _verticalFillFrontIntensity;
    double _verticalFillBackIntensity;
    struct CGGradient *_topOver;
    struct CGColor *_stroke;
}

@property (nonatomic, readonly) struct CGGradient *background;
@property (nonatomic, readonly) struct CGColor *topFill;
@property (nonatomic, readonly) struct CGGradient *topGlow;
@property (nonatomic, readonly) struct CGGradient *topMask;
@property (nonatomic, readonly) struct CGColor *bottomFill;
@property (nonatomic, readonly) struct CGGradient *bottomInnerGlow;
@property (nonatomic, readonly) struct CGGradient *bottomOuterGlow;
@property (nonatomic, readonly) struct CGGradient *bottomMask;
@property (nonatomic, readonly) struct CGColor *verticalFillColor;
@property (nonatomic, readonly) double verticalFillBackIntensity;
@property (nonatomic, readonly) double verticalFillFrontIntensity;
@property (nonatomic, readonly) struct CGGradient *topOver;
@property (nonatomic, readonly) struct CGColor *stroke;

+ (id)appearanceFrom:(id)arg1 to:(id)arg2 progress:(double)arg3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithStroke:(struct CGColor *)arg1;

@end
