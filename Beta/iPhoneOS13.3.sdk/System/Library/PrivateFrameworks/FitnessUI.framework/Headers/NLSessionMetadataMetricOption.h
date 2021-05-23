/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIWorkoutSummaryRowOption.h>

@class NSString;

@interface NLSessionMetadataMetricOption : FIUIWorkoutSummaryRowOption

{
    NSString *_requiredMetadataKey;
}

- (_Bool)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2;
- (id)initWithRowType:(unsigned long long)arg1 requiredMetadataKey:(id)arg2;

@end
