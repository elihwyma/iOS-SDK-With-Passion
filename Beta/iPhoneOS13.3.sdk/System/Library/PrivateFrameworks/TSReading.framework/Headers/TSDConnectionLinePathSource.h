/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDBezierPathSource.h>

@interface TSDConnectionLinePathSource : TSDBezierPathSource

{
    int mType;
    double mOutsetFrom;
    double mOutsetTo;
}

@property (nonatomic) int type;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)pathSourceAtAngleOfSize:(struct CGSize)arg1 forType:(int)arg2;
+ (id)pathSourceOfLength:(double)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bezierPath;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (void)bend;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (_Bool)isLineSegment;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (struct CGPoint)fixedPointForControlKnobChange;
- (id)initWithBezierPath:(id)arg1;
- (void)p_setBezierPath:(id)arg1;
- (long long)pathElementIndexForKnobTag:(unsigned long long)arg1;

@end
