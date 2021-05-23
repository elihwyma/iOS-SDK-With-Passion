/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortrait/PPTopicStore.h>

@class PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, PPMObjectsDeletion, PPMTopicDonation, PPMTopicDonationError, PPTopicStorage, _PASLock;

@interface PPLocalTopicStore : PPTopicStore

{
    _PASLock *_lock;
    PPMTopicDonationError *_errorTracker;
    PPMTopicDonation *_donationTracker;
    PPMObjectsDeletion *_deletionTracker;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
    PPTopicStorage *_storage;
}

@property (nonatomic, readonly) PPTopicStorage *storage;

+ (id)defaultStore;
+ (id)recordsForTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;
+ (void)calibrate:(id)arg1;
+ (id)ppFeedbackItemToPPPBFeedbackItem:(id)arg1;
+ (_Bool)_yesWithProbability:(double)arg1;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;
+ (id)_loadScoreInterpreter;
+ (float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2;
+ (id)aggregateRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;
+ (id)_topicTransformForId:(id)arg1;
+ (struct PPScoredItem *)scoreTopics:(id)arg1 scoringDate:(id)arg2 decayRate:(double)arg3 strictFiltering:(_Bool)arg4 sourceStats:(id)arg5 scoreInterpreter:(id)arg6;

- (id)init;
- (id)initWithStorage:(id)arg1;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)cloudSyncWithError:(id *)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (_Bool)flushDonationsWithError:(id *)arg1;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3;
- (_Bool)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (void)logDonationErrorForReason:(struct PPMTopicDonationErrorReason_)arg1;
- (void)disableSyncForBundleIds:(id)arg1;
- (void)processFeedback:(id)arg1;
- (id)sourceStatsExcludedAlgorithms:(id)arg1;
- (_Bool)_logFeedbackSessionsWithFeedback:(id)arg1 error:(id *)arg2;
- (_Bool)_unlimitedTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)_petLoggingForQuery:(id)arg1 count:(unsigned long long)arg2 clientProcessName:(id)arg3 hasError:(_Bool)arg4;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2 clientProcessName:(id)arg3;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 clientProcessName:(id)arg4;
- (void)_petLoggingForMappedTopicQuery:(id)arg1 mappingId:(id)arg2 count:(unsigned long long)arg3 clientProcessName:(id)arg4 hasError:(_Bool)arg5;
- (id)_coalesceScoredTopics:(id)arg1;
- (void)_filterBlacklistedTopicRecords:(id)arg1;
- (id)_filterBlacklistedScoredTopics:(id)arg1;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 algorithm:(unsigned long long)arg3 olderThan:(id)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_logDonationForTopics:(id)arg1 bundleId:(id)arg2 algorithm:(unsigned long long)arg3;
- (id)getScoredTopicsFeaturesWithTopicId:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id *)arg4 strictFiltering:(_Bool)arg5 scoreInterpreter:(id)arg6;

@end
