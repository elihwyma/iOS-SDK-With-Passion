/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPContainerPersister, MSPQuerySource, NSArray, NSCountedSet, NSHashTable, NSMutableArray, NSMutableSet, NSString;

@protocol MSPContainerStateSnapshot, NSObject><NSCopying, OS_dispatch_queue;

@interface MSPContainer : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <MSPContainerStateSnapshot> _currentStateSnapshot;
    NSArray *_currentProcessedContents;
    NSHashTable *_observers;
    MSPContainerPersister *_persister;
    NSCountedSet *_editCoalescingContexts;
    _Bool _isCommittingEnqueuedEdits;
    id <NSObject><NSCopying> _contextCoalescingFor;
    _Bool _coalescedEditsNeedEntireContents;
    NSMutableSet *_coalescedPartialContentIdentifiersToFetch;
    NSMutableArray *_enqueuedCoalescingEditBarrierBlocks;
    NSMutableArray *_enqueuedCoalescingCompletionBlocks;
    _Bool _hasScheduledDelayedCommitForCoalescedEdits;
    _Bool _hasLoadedContents;
    _Bool _preventsAssertionsForDuplicateStorageIdentifiers;
    _Bool _simulatesClearingDiscardableDataAfterOperations;
}

@property (nonatomic, readonly) MSPQuerySource *entireContentsQuerySource;
@property (nonatomic, readonly) MSPContainerPersister *persister;
@property (nonatomic, readonly, getter=_accessQueue) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) _Bool _preventsAssertionsForDuplicateStorageIdentifiers;
@property (nonatomic, getter=_simulatesClearingDiscardableDataAfterOperations, setter=_setSimulatesClearingDiscardableDataAfterOperations:) _Bool simulatesClearingDiscardableDataAfterOperations;
@property (nonatomic, readonly) _Bool containerHasLoadedContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_disableLogging;
+ (void)mutableObjectContentDidUpdate:(id)arg1;
+ (void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(CDUnknownBlockType)arg1;
+ (void)clearDiscardableDataFromAllContainers;
+ (_Bool)_deletes:(unsigned long long)arg1 mayRepresentDataLossIfAppliedTo:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_forEachObserver:(CDUnknownBlockType)arg1;
- (void)editByMergingStateSnapshot:(id)arg1 mergeOptions:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)accessStateSnapshotUsingConcurrentBlock:(CDUnknownBlockType)arg1;
- (void)accessContentsUsingConcurrentBlock:(CDUnknownBlockType)arg1;
- (void)editContentsUsingBarrierBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPersister:(id)arg1;
- (void)persisterContentsDidChangeExternally:(id)arg1;
- (void)_processNewEditedContents:(id)arg1;
- (void)_processNewLoadedContents:(id)arg1;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)editContentsUsingBarrierBlock:(CDUnknownBlockType)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)eraseFromStorageTypes:(unsigned long long)arg1 withCompletionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_clearObjectCacheIfNeeded;
- (void)_performInitialLoadNotifyingObservers:(_Bool)arg1 kickOffSynchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_processedContentsForPersisterContents:(id)arg1;
- (id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1;
- (_Bool)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(CDUnknownBlockType)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_commitPendingCoalescedEditsIfAny;
- (id)beginCoalescingEditsWithContext:(id)arg1;
- (void)eraseWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_endCoalescingEditsForContext:(id)arg1;
- (void)coalesceEditsForContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;

@end
