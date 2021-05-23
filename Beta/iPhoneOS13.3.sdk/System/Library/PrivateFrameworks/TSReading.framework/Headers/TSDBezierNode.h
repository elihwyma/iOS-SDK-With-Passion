/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDBezierNode : NSObject

{
    struct CGPoint mIn;
    struct CGPoint mNode;
    struct CGPoint mOut;
    int mReflectedState;
    _Bool mSelected;
    int mType;
}

@property (nonatomic) struct CGPoint nodePoint;
@property (nonatomic) struct CGPoint inControlPoint;
@property (nonatomic) struct CGPoint outControlPoint;
@property (nonatomic) int reflectedState;
@property (nonatomic, readonly) _Bool isCollapsed;
@property (nonatomic) int type;
@property (nonatomic, getter=isSelected) _Bool selected;

+ (id)bezierNodeWithPoint:(struct CGPoint)arg1;
+ (id)bezierNodeWithPoint:(struct CGPoint)arg1 inControlPoint:(struct CGPoint)arg2 outControlPoint:(struct CGPoint)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setNode:(struct CGPoint)arg1;
- (id)typeString;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)collapse;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (id)reflectedStateString;
- (void)balanceControlPoints;
- (void)setInControlPoint:(struct CGPoint)arg1 reflect:(int)arg2 constrain:(_Bool)arg3;
- (void)setOutControlPoint:(struct CGPoint)arg1 reflect:(int)arg2 constrain:(_Bool)arg3;
- (void)setInControlPointFromReflection:(struct CGPoint)arg1 constrain:(_Bool)arg2;
- (void)updateReflectedState;
- (void)swapControlPoints;
- (_Bool)underPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;

@end
