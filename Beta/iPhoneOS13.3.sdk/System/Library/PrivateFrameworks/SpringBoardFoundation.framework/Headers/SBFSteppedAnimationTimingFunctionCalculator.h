/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject

{
    NSMutableDictionary *_functionsByName;
    double _percentComplete;
}

@property (nonatomic) double percentComplete;

- (id)init;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2;
- (void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2;
- (id)timingFunctionNames;
- (double)valueForFunctionWithName:(id)arg1;

@end
