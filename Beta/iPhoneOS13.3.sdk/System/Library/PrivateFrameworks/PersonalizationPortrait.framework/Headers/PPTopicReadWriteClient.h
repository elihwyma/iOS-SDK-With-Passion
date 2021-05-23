/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class PPXPCClientHelper;

@interface PPTopicReadWriteClient : NSObject

{
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)_doSyncCallWithError:(id *)arg1 syncCall:(CDUnknownBlockType)arg2;
- (_Bool)_doDeletionSyncCallWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2 syncCall:(CDUnknownBlockType)arg3;
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)cloudSyncWithError:(id *)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;

@end
