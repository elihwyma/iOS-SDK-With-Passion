/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDPathSource.h>

@interface TSDCalloutPathSource : TSDPathSource

{
    double mCornerRadius;
    double mTailSize;
    struct CGPoint mTailPosition;
    struct CGSize mNaturalSize;
    _Bool mIsTailAtCenter;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) double maxCornerRadius;
@property (nonatomic) struct CGPoint tailKnobPosition;
@property (nonatomic) double tailSize;
@property (nonatomic, readonly) double maxTailSize;
@property (nonatomic) struct CGPoint tailSizeKnobPosition;
@property (nonatomic, readonly) struct CGPoint tailCenter;
@property (nonatomic, readonly) _Bool isTailAtCenter;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)quoteBubbleWithTailPosition:(struct CGPoint)arg1 tailSize:(double)arg2 naturalSize:(struct CGSize)arg3;
+ (id)calloutWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)naturalSize;
- (void)setNaturalSize:(struct CGSize)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)bezierPathWithoutFlips;
- (id)interiorWrapPath;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (struct CGPoint)p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;
- (void)p_setNaturalSize:(struct CGSize)arg1;
- (void)p_setCornerRadius:(double)arg1;
- (void)p_setTailPosition:(struct CGPoint)arg1;
- (void)p_setTailSize:(double)arg1;
- (void)p_setTailAtCenter:(_Bool)arg1;
- (id)initWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4 tailAtCenter:(_Bool)arg5;
- (struct CGPoint)p_tailPosition;
- (id)p_basePath;
- (void)p_getTailPath:(id)arg1 center:(struct CGPoint *)arg2 tailSize:(double *)arg3 intersections:(struct CGPoint [2])arg4;
- (struct CGPoint)p_adjustedCenterForPath:(id)arg1;
- (_Bool)isOval;
- (id)p_buildPath;

@end
