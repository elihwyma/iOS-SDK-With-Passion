/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGradient.h>

@interface TSDTransformGradient : TSDGradient

{
    struct CGPoint mStart;
    struct CGPoint mEnd;
    struct CGSize mBaseNaturalSize;
    struct CGAffineTransform mTransformBeforeUpgrade;
}

@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;
@property (nonatomic) struct CGSize baseNaturalSize;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (_Bool)isAdvancedGradientIgnoringFlag;
- (_Bool)isEqualIgnoringTransform:(id)arg1;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (double)gradientAngleInDegrees;
- (void)p_setDefaultValues;
- (struct CGSize)baseNaturalSizeForBounds:(struct CGRect)arg1;
- (struct CGAffineTransform)transformForSize:(struct CGSize)arg1;
- (void)p_drawQuartzShadingInContext:(struct CGContext *)arg1 withGradientNaturalSize:(struct CGSize)arg2 baseNaturalSize:(struct CGSize)arg3 start:(struct CGPoint)arg4 end:(struct CGPoint)arg5;
- (struct CGPoint)normalizedPointForSize:(struct CGSize)arg1 endPoint:(_Bool)arg2;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(struct CGRect)arg3;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg1 toShapeWithNaturalSize:(struct CGSize)arg2;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg1 fromShapeWithNaturalSize:(struct CGSize)arg2;

@end
