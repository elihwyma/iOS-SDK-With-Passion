/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClockItemStorage, AFClockTimerSnapshot, MTTimerManager, NSHashTable, NSMutableOrderedSet, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface AFClockTimerObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    MTTimerManager *_timerManager;
    AFClockTimerSnapshot *_timerSnapshot;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_tearDown;
- (void)timerFired:(id)arg1;
- (void)_setUp;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)_fetchTimersForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_timerSnapshot;
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;
- (void)timersAdded:(id)arg1;
- (void)timersUpdated:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)firingTimerChanged:(id)arg1;
- (void)firingTimerDismissed:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)timersChanged:(id)arg1;
- (void)_handleFetchTimersForReason:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleFetchTimersForReason:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFiringTimerIDsWithCompletion:(CDUnknownBlockType)arg1;

@end
