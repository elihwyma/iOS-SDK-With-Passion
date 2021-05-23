/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <PersonalizationPortrait/PPTopicStore.h>

@class PPClientFeedbackHelper;

@interface PPXPCTopicStore : PPTopicStore

{
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

- (id)_init;
- (void)setClientIdentifier:(id)arg1;
- (id)clientIdentifier;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)cloudSyncWithError:(id *)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (_Bool)iterRankedTopicsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3;
- (_Bool)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id *)arg3;

@end
