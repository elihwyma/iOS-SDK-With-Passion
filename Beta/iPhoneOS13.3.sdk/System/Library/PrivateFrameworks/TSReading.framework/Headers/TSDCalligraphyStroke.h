/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)mutableClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (double)scale;
- (double)angle;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (_Bool)chisel;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (_Bool)canApplyToCAShapeLayer;
- (_Bool)drawsOutsideStrokeBounds;
- (struct CGRect)boundsForPath:(id)arg1;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)drawsInOneStep;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (struct CGAffineTransform)transformInContext:(struct CGContext *)arg1;

@end
