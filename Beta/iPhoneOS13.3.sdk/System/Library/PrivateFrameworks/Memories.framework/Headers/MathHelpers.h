/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MathHelpers : NSObject

+ (double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(_Bool)arg6;
+ (struct CGRect)rectWithAspectRatio:(double)arg1 thatFillsRectBiasedVertically:(struct CGRect)arg2 isTitle:(_Bool)arg3 sourceAspectRatio:(double)arg4;
+ (struct CGRect)rectWithAspectRatio:(double)arg1 thatFillsRect:(struct CGRect)arg2;
+ (struct CGRect)rectWithShortestWidthByComparingRect1:(struct CGRect)arg1 rect2:(struct CGRect)arg2;
+ (struct CGRect)scaleRect:(struct CGRect)arg1 horizontalScale:(double)arg2 verticalScale:(double)arg3 maintainCenterPoint:(_Bool)arg4;
+ (struct CGRect)rectWithLongestWidthByComparingRect1:(struct CGRect)arg1 rect2:(struct CGRect)arg2;
+ (struct CGRect)horizontallyCenterRect:(struct CGRect)arg1 overRect:(struct CGRect)arg2;
+ (struct CGRect)verticallyCenterRect:(struct CGRect)arg1 overRect:(struct CGRect)arg2;
+ (struct CGRect)horizontallyCenterRect:(struct CGRect)arg1 overPoint:(struct CGPoint)arg2;
+ (struct CGRect)verticallyCenterRect:(struct CGRect)arg1 overPoint:(struct CGPoint)arg2;
+ (struct CGRect)moveRectHorizontally:(struct CGRect)arg1 toKeepWithinRect:(struct CGRect)arg2;
+ (struct CGRect)moveRectVertically:(struct CGRect)arg1 toKeepWithinRect:(struct CGRect)arg2;
+ (struct CGRect)centerRect:(struct CGRect)arg1 overRect:(struct CGRect)arg2;
+ (struct CGPoint)negatePoint:(struct CGPoint)arg1;
+ (struct CGPoint)endPointOfLineWithStartPoint:(struct CGPoint)arg1 slope:(struct CGPoint)arg2 distance:(double)arg3;
+ (struct CGRect)centerRect:(struct CGRect)arg1 overPoint:(struct CGPoint)arg2;
+ (struct CGRect)moveRect:(struct CGRect)arg1 toKeepWithinRect:(struct CGRect)arg2;
+ (struct CGPoint)slopeOfLineWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
+ (void)lineWithMidPoint:(struct CGPoint)arg1 slope:(struct CGPoint)arg2 length:(double)arg3 outStartPoint:(struct CGPoint *)arg4 outEndPoint:(struct CGPoint *)arg5;
+ (struct CGPoint)midPointBetweenPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;

@end
