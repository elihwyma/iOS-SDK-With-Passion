/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPDKStorage : NSObject

+ (id)sharedInstance;

- (void)removeObserver:(id)arg1;
- (id)entityStream;
- (id)topicStream;
- (_Bool)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (id)tombstoneStream;
- (_Bool)saveEvents:(id)arg1 error:(id *)arg2;
- (unsigned int)readBatchSize;
- (unsigned int)topicWriteBatchSize;
- (double)topicWriteBatchInterval;
- (unsigned int)namedEntityWriteBatchSize;
- (double)namedEntityWriteBatchInterval;
- (id)_readWriteKnowledgeStore;
- (_Bool)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 error:(id *)arg5 block:(CDUnknownBlockType)arg6;
- (_Bool)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 readMetaData:(_Bool)arg5 error:(id *)arg6 block:(CDUnknownBlockType)arg7;
- (_Bool)deleteEvents:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllEventsInEventStream:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;
- (_Bool)_isFutureCompatibilityVersionAttachedToEvent:(id)arg1;
- (id)namedEntityRecordFromEvent:(id)arg1;
- (id)eventForNamedEntityRecord:(id)arg1 sourceDeviceID:(id)arg2;
- (id)topicRecordFromEvent:(id)arg1;
- (id)eventForTopicRecord:(id)arg1 sourceDeviceID:(id)arg2;
- (id)registerForNamedEntitiesRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
- (id)registerForNamedEntitiesRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
- (id)registerForTopicsRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
- (id)registerForTopicsRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
- (void)_registerForSyncNotifications;

@end
