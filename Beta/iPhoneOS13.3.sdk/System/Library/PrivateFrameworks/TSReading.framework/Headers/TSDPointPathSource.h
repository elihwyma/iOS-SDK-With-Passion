/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDPathSource.h>

@interface TSDPointPathSource : TSDPathSource

{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mNaturalSize;
}

@property int type;
@property struct CGPoint point;
@property struct CGSize naturalSize;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)rightSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)doubleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)starWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)pathSourceWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
+ (id)leftSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)plusWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (void)setPointValue:(id)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;
- (id)initWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
- (struct CGPoint)p_getControlKnobPointForArrow;
- (struct CGPoint)p_getControlKnobPointForStarPoints;
- (struct CGPoint)p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint)p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForArrow:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint)arg1;
- (void)p_setControlKnobPointForPlus:(struct CGPoint)arg1;
- (struct CGPath *)p_newArrowPath;
- (struct CGPath *)p_newStarPath;
- (struct CGPath *)p_newPlusPath;
- (_Bool)p_isRightFacingArrow;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (struct CGPoint)minPointValue;
- (struct CGPoint)maxPointValue;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (_Bool)p_isFlippedDoubleArrow;

@end
