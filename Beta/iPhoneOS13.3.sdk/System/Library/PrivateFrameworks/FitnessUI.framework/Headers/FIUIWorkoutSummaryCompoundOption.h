/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIWorkoutSummaryRowOption.h>

@class NSArray;

@interface FIUIWorkoutSummaryCompoundOption : FIUIWorkoutSummaryRowOption

{
    unsigned long long _compoundPredicateType;
    NSArray *_subOptions;
}

- (_Bool)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2;
- (id)initWithRowType:(unsigned long long)arg1 compoundPredicateType:(unsigned long long)arg2 subOptions:(id)arg3;

@end
