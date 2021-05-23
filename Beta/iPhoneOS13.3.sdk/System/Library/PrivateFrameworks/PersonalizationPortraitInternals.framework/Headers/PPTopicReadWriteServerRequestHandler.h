/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPTopicReadWriteServerRequestHandler : NSObject

- (void)clearWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteAllTopicsWithTopicId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 completion:(CDUnknownBlockType)arg6;

@end
