/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDBezierSegment : NSObject

{
    struct CGPoint mA;
    struct CGPoint mOut;
    struct CGPoint mIn;
    struct CGPoint mB;
}

@property (nonatomic, readonly) struct CGPoint fromPoint;
@property (nonatomic, readonly) struct CGPoint outPoint;
@property (nonatomic, readonly) struct CGPoint inPoint;
@property (nonatomic, readonly) struct CGPoint toPoint;
@property (nonatomic, readonly) _Bool bogusSegment;

+ (id)segmentFromPoint:(struct CGPoint)arg1 outPoint:(struct CGPoint)arg2 inPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;

- (id)description;
- (id)initFromPoint:(struct CGPoint)arg1 outPoint:(struct CGPoint)arg2 inPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;
- (double)parametricValueForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtParametricValue:(double)arg1;
- (void)splitAtParametricValue:(double)arg1 left:(id *)arg2 right:(id *)arg3;
- (struct CGPoint)closestPointToPoint:(struct CGPoint)arg1;

@end
