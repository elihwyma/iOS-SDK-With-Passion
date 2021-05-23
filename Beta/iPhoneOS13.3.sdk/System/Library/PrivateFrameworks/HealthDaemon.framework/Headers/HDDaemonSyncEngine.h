/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemonSyncEntityManager, HDProfile, NSArray, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface HDDaemonSyncEngine : NSObject

{
    HDDaemonSyncEntityManager *_entityManager;
    CDUnknownBlockType _unitTest_didCompleteReadTransaction;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType unitTest_didCompleteReadTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *allOrderedSyncEntities;
@property (copy, nonatomic, readonly) NSDictionary *allSyncEntitiesByIdentifier;

- (id)initWithProfile:(id)arg1;
- (_Bool)performSyncSession:(id)arg1 error:(id *)arg2;
- (void)resetStore:(id)arg1;
- (_Bool)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (_Bool)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(_Bool)arg3 resetInvalid:(_Bool)arg4 error:(id *)arg5;
- (_Bool)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (long long)session:(id)arg1 requiresSyncWithAnchors:(id)arg2 error:(id *)arg3;
- (long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 error:(id *)arg4;
- (_Bool)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)_applySyncChange:(id)arg1 entity:(Class)arg2 store:(id)arg3 error:(id *)arg4;
- (_Bool)_performSyncSession:(id)arg1 error:(id *)arg2;
- (void)_resetStore:(id)arg1;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id *)arg3;
- (_Bool)generateSyncObjectsForSession:(id)arg1 entity:(Class)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 messageHandler:(id)arg4 error:(id *)arg5;
- (long long)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 startAnchor:(long long *)arg3 finalAnchor:(long long)arg4 postTransactionBlocks:(id)arg5 error:(id *)arg6;
- (long long)_sendChanges:(id)arg1 session:(id)arg2 error:(id *)arg3;

@end
