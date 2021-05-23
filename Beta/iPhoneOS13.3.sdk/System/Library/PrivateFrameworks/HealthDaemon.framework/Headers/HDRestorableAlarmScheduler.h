/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDXPCAlarm, NSDate, NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface HDRestorableAlarmScheduler : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    NSMapTable *_clients;
    _Bool _hasInitializedSystemScheduler;
    _Bool _maintenanceOperationQueued;
    _Bool _needsMaintenanceNotifyAndSchedule;
    _Bool _needsLockStateUpdates;
    _Bool _isDeviceOnWrist;
    _Bool _isRegisteredForOnWristUpdates;
    _Bool _isRegisteredForLockStateUpdates;
    HDXPCAlarm *_systemScheduler;
    NSDate *__unitTest_currentDate;
}

@property (copy, nonatomic) NSDate *_unitTest_currentDate;
@property (nonatomic, readonly) _Bool isRegisteredForOnWristUpdates;
@property (nonatomic, readonly) _Bool isRegisteredForLockStateUpdates;
@property (nonatomic, readonly) HDXPCAlarm *systemScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (_Bool)removeEvents:(id)arg1 error:(id *)arg2;
- (void)addAlarm:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (id)_currentDate;
- (id)diagnosticDescription;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_startObservingSignificantTimeChangeNotification;
- (void)_queue_setNeedsMaintenanceNotifyAndSchedule:(_Bool)arg1;
- (void)_stopObservingSignificantTimeChangeNotification;
- (void)_queue_significantTimeChangeDidOccur;
- (void)_queue_enqueueMaintenanceNotifyAndSchedule;
- (void)_queue_updateProtectedDataObserverStateIfRequired;
- (void)_runMaintenanceNotifyAndSchedule;
- (void)_queue_processDueEventsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queue_notifyClientsOfDueEventsAndScheduleNextFireDateWithError:(id *)arg1;
- (void)_queue_fetchCurrentWristStateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_enumerateAllAlarmEventsWithError:(id *)arg1 enumerationHandler:(CDUnknownBlockType)arg2;
- (void)_queue_registerForLockStateUpdates:(_Bool)arg1;
- (void)_queue_registerForWristStateUpdates:(_Bool)arg1;
- (void)_queue_beginReceivingSystemEventsIfNecessary;
- (_Bool)_performWriteTransactionAndFireEventsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)scheduleEvents:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllEventsWithClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)replaceAllScheduledEventsWithClientIdentifier:(id)arg1 newEvents:(id)arg2 error:(id *)arg3;
- (id)scheduledEventsForClientIdentifier:(id)arg1 error:(id *)arg2;
- (void)checkForDueEventsImmediatelyWithCompletion:(CDUnknownBlockType)arg1;

@end
