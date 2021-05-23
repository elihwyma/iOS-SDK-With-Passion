/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class _DKKnowledgeStore;

@interface REDuetKnowledgeStore : RESingleton

{
    _DKKnowledgeStore *_knowledgeStore;
}

- (id)_init;
- (id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sleepInterval;
- (id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1;
- (id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(unsigned long long)arg2;
- (id)queryForDuetEventWithIdentifier:(id)arg1;
- (id)queryForAllDonatedActions;
- (void)executeQuerySynchronouslyWithBatching:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)queryForAllDonatedActionsWithIdentifier:(id)arg1;
- (id)queryForDonatedActionsAfterDate:(id)arg1;
- (id)queryForDeletedActionsAfterDate:(id)arg1;
- (id)queryForAllRelevantShortcuts;
- (id)_createTimelineFromPredictionTimeline:(id)arg1 filterEmptyData:(_Bool)arg2;
- (id)_duetChargingEventStream;
- (id)_createEventsFromDuetEvents:(id)arg1;
- (id)_duetQueryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 withPredicate:(id)arg3;
- (id)_createActionsFromDuetEvents:(id)arg1;
- (id)_duetDonationsStreams;
- (id)_queryForDonatedActionsAfterDate:(id)arg1 streams:(id)arg2;
- (id)_createTombstonesFromDuetEvents:(id)arg1;
- (void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronouslyWithBatching:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_queryForUnfilteredDonationsForStream:(id)arg1;
- (id)queryForUnfilteredUserActivityDonations;
- (id)queryForUnfilteredIntentDonations;
- (id)queryForUnfilteredRelevantShortcutDonations;

@end
