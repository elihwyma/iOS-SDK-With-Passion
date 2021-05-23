/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGradient.h>

@interface TSDAngleGradient : TSDGradient

{
    double mAngle;
}

@property (nonatomic) double gradientAngle;
@property (nonatomic, readonly) double gradientAngleInDegrees;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setGradientType:(unsigned long long)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3 angle:(double)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(double)arg1;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)evenlyDistributeStops;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setGradientStops:(id)arg1;
- (void)setFirstColor:(id)arg1;
- (void)setLastColor:(id)arg1;
- (struct CGAffineTransform)p_shadingTransformForBounds:(struct CGRect)arg1;
- (double)p_bestGradientLengthForRect:(struct CGRect)arg1 atAngle:(double)arg2;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3 angle:(double)arg4;

@end
