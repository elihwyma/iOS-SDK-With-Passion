/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/SFActivityBitmaps.h>

@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps

{
    NSMutableDictionary *_flows;
}

@property (retain) NSMutableDictionary *flows;

- (id)init;
- (void)freeUpBufferSpace;
- (void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4;
- (void)resetAllActivities;
- (id)getAllFlowIds;
- (id)getWrappedBitmapsForFlowId:(unsigned long long)arg1;
- (id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3;
- (unsigned long long)getHammingWeightForFlowId:(unsigned long long)arg1;
- (unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)arg1;

@end
