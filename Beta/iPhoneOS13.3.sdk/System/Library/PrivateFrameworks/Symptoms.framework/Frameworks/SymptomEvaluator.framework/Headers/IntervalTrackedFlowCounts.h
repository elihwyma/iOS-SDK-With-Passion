/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TrackedFlowCounts.h>

__attribute__((visibility("hidden")))
@interface IntervalTrackedFlowCounts : TrackedFlowCounts

{
    unsigned long long _timestampSeconds;
    unsigned long long _numBlemishedFlows;
    unsigned long long _numUnblemishedFlows;
}

@property (nonatomic) unsigned long long timestampSeconds;
@property (nonatomic) unsigned long long numBlemishedFlows;
@property (nonatomic) unsigned long long numUnblemishedFlows;

- (id)description;
- (void)addFlowCounts:(id)arg1;
- (void)subtractFlowCounts:(id)arg1;
- (void)addIntervalFlowCounts:(id)arg1;
- (void)subtractIntervalFlowCounts:(id)arg1;

@end
