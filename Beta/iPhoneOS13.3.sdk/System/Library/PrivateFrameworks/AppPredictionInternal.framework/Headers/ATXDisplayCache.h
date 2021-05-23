/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXActionCriteriaWorldState, NSArray, NSString, _ATXAppPredictorJSONScoreLogger;

@interface ATXDisplayCache : NSObject

{
    NSArray *_producers;
    NSString *_cacheBasePath;
    _ATXAppPredictorJSONScoreLogger *_cacheValuationScoreLogger;
    ATXActionCriteriaWorldState *_worldState;
}

@property (retain, nonatomic) ATXActionCriteriaWorldState *worldState;
@property (nonatomic, readonly) NSString *cacheBasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)firstUpdateDateForActions:(id)arg1;
+ (id)sharedDisplayCache;

- (id)actions;
- (void)writeToDisk;
- (void)actionProducerProducedNewActions:(id)arg1;
- (id)initWithProducers:(id)arg1 cacheBasePath:(id)arg2;
- (id)filteredActionsFromActions:(id)arg1;
- (id)unFilteredActions;
- (void)updateOnDiskCache;
- (void)setUpdateJobForDate:(id)arg1;
- (void)setUpdateJobForCriteria:(id)arg1;
- (id)_criteriaForJobOnDate:(id)arg1;
- (void)updateLockscreenIfNeededOldAction:(id)arg1 newAction:(id)arg2 actionResponse:(id)arg3;
- (void)logDisplayCacheActionResults:(id)arg1 lockscreenPredictionIndices:(id)arg2;
- (void)writeToDiskActions:(id)arg1;
- (void)_logCacheUpdateWithSpotlightDiff:(double)arg1 spotlightSetDiff:(double)arg2 lockscreenDiff:(double)arg3 lockscreenSetDiff:(double)arg4;

@end
