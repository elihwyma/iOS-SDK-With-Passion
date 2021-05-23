/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

#import <PersonalizationPortrait/Swift-Protocol.h>

@class NSString;

@interface PPTopicStore : NSObject <Swift>

@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)defaultStore;
+ (double)decayValue:(double)arg1 withDecayRate:(double)arg2 forTimeElapsed:(double)arg3;
+ (double)squash:(double)arg1 withSigmoidWidth:(double)arg2 withPeakAt:(double)arg3;
+ (double)squash:(double)arg1 usingHalfSigmoidWithScalingFactor:(double)arg2;

- (id)init;
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
- (id)_initFromSubclass;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)clearWithError:(id *)arg1;

@end
