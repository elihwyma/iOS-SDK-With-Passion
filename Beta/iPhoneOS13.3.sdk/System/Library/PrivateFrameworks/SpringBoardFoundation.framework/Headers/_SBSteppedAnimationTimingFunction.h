/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject

{
    CAMediaTimingFunction *_timingFunction;
    struct SBNormalizedTransitionInterval _constrainedRange;
}

@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;
@property (nonatomic, readonly) struct SBNormalizedTransitionInterval constrainedRange;

+ (id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;

- (double)valueAtPercentage:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;

@end
