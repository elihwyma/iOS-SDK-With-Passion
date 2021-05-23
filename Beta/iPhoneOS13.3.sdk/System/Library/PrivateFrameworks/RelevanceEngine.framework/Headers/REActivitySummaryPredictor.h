/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSSet;

@interface REActivitySummaryPredictor : REPredictor

{
    NSSet *_queries;
    float _activeEnergyPercentComplete;
    float _exerciseTimePercentComplete;
    float _standHourPercentComplete;
}

@property float activeEnergyPercentComplete;
@property float exerciseTimePercentComplete;
@property float standHourPercentComplete;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (id)_init;
- (void)pause;
- (void)resume;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)_startActivitySummaryQueryWithRetries:(long long)arg1;
- (void)_stopQueries;
- (void)_stopQuery:(id)arg1;
- (void)_updateWithActivitySummary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runQuery:(id)arg1;

@end
