/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class CKContainer, NSOperationQueue, _DKKnowledgeStorage;

@protocol OS_dispatch_group, OS_dispatch_queue, _DKKeyValueStore;

@interface _DKSyncV1CloudKitKnowledgeStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    CKContainer *_container;
    id <_DKKeyValueStore> _keyValueStore;
    _DKKnowledgeStorage *_storage;
    NSObject<OS_dispatch_group> *_group;
    NSOperationQueue *_operationQueue;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) CKContainer *container;
@property (retain) id <_DKKeyValueStore> keyValueStore;
@property (weak) _DKKnowledgeStorage *storage;
@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSOperationQueue *operationQueue;

+ (void)setupWithStorage:(id)arg1;

- (id)initWithStorage:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)syncDown;
- (id)getLegacySyncToken;
- (_Bool)_enqueueDatabaseOperation:(id)arg1;

@end
