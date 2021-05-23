/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClockAlarmSnapshot, AFClockItemStorage, MTAlarmManager, NSHashTable, NSMutableOrderedSet, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface AFClockAlarmObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    MTAlarmManager *_alarmManager;
    AFClockAlarmSnapshot *_alarmSnapshot;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
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
- (void)_setUp;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;
- (void)stateReset:(id)arg1;
- (void)_fetchAlarmsForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_alarmSnapshot;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)firingAlarmChanged:(id)arg1;
- (void)firingAlarmDismissed:(id)arg1;
- (void)alarmsChanged:(id)arg1;
- (void)_handleFetchAlarmsForReason:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAlarmSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFiringAlarmIDsWithCompletion:(CDUnknownBlockType)arg1;

@end
