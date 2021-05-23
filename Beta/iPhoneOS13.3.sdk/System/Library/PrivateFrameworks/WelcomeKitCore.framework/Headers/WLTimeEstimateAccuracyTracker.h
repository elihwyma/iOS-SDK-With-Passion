/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WLTimeEstimateAccuracyTracker : NSObject

{
    unsigned long long _thresholdBelowLastSample;
    NSArray *_thresholds;
    NSArray *_samples;
}

@property (retain, nonatomic) NSArray *thresholds;
@property (retain, nonatomic) NSArray *samples;

- (id)init;
- (unsigned long long)_thresholdAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfThresholdGreaterThanOrEqualToEstimate:(unsigned long long)arg1;
- (void)didCalculateTimeEstimate:(unsigned long long)arg1 atDate:(id)arg2 associatedObject:(id)arg3;
- (void)estimatesDidResolveAtDate:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
