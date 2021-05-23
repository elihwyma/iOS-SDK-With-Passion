/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDPathSource.h>

@interface TSDScalarPathSource : TSDPathSource

{
    int mType;
    double mScalar;
    struct CGSize mNaturalSize;
}

@property (nonatomic) int type;
@property (nonatomic) double scalar;
@property (nonatomic, readonly) double maxScalar;
@property (nonatomic) struct CGSize naturalSize;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)roundedRectangleWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;
+ (id)regularPolygonWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;
+ (id)pathSourceWithType:(int)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3;
+ (id)rectangleWithNaturalSize:(struct CGSize)arg1;
+ (id)chevronWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (id)initWithType:(int)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3;
- (struct CGPoint)p_getControlKnobPointForRoundedRect;
- (struct CGPoint)p_getControlKnobPointForRegularPolygon;
- (struct CGPoint)p_getControlKnobPointForChevron;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForChevron:(struct CGPoint)arg1;
- (void)setScalarValue:(id)arg1;
- (struct CGPath *)p_newRoundedRectPath;
- (struct CGPath *)p_newRegularPolygonPath;
- (struct CGPath *)p_newChevronPath;

@end
