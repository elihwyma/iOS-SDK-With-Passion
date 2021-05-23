/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, EKTimedEventStorePurger, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSTimer, RTRoutineManager;

@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject

{
    int _lastDBSequence;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    _Bool _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    _Bool _needsAlarmTablePopulation;
    _Bool _fencesNeedAdjusted;
    NSDateFormatter *_dateFormatter;
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    _Bool _includeRefiringAlarmsForInitialReschedule;
    _Bool _refirePastAlarmsForInitialUpdate;
    NSMutableDictionary *_monitoredRegions;
    _Bool _shouldUpdateWithForceForAlarmTable;
    _Bool _shouldUpdateWithForceForFences;
    long long _vehicleConnectionState;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)requestedDarwinNotifications;
+ (_Bool)remindersNotificationsEnabled;
+ (id)_publisherBulletinIDForTask:(void *)arg1;
+ (void)logUnexpectedRemindersCall:(const char *)arg1;
+ (id)_publisherBulletinIDForReminder:(id)arg1;
+ (id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)start;
- (id)_dateFormatter;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)_timerFired;
- (void)_killTimer;
- (void)_syncDidStart;
- (id)_eventStore;
- (void)_syncDidEnd;
- (void)_timeZoneChanged:(id)arg1;
- (void)_databaseChanged;
- (void)_syncTimerFired:(id)arg1;
- (void)_resetSyncTimer;
- (void)handleDarwinNotification:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)_killSyncTimer;
- (void)_simulatedOffsetChanged:(id)arg1;
- (void)_setupLocationManager;
- (_Bool)_shouldRefireAlarms;
- (_Bool)_shouldUseCoreRoutine;
- (_Bool)_allowConservativeEntry;
- (void)_removeAllFencesSynch;
- (void)_timeDidChangeSignificantly;
- (void)_locationDaemonDidLaunch;
- (void)_calendarNotificationSettingChanged;
- (void)_motionUpdatedWithConnectionState:(long long)arg1;
- (void)_updateWithForceForAlarmTable:(_Bool)arg1 forFences:(_Bool)arg2;
- (_Bool)_isDataProtected;
- (void)_rescheduleTimer;
- (_Bool)_haveAlarmsChanged:(id)arg1;
- (_Bool)_populateAlarmTable:(id)arg1;
- (void)_adjustFences:(id)arg1;
- (void)_removeStaleRefiringAlarmsWithEventStore:(id)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3;
- (void)_populateFinished;
- (void)_installTimerWithFireDate:(id)arg1;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)arg1;
- (void)_notifyAlarmsFired:(id)arg1;
- (_Bool)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (_Bool)_shouldAdjustFencesWithStatus:(int)arg1;
- (void)_updateRegionMonitoringForRegion:(id)arg1 withLocationOfInterest:(id)arg2 forLocation:(struct CLLocationCoordinate2D)arg3;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)arg1;
- (void)_proximityAlertTriggered:(id)arg1 entered:(_Bool)arg2;
- (void)_removeAllFences;
- (_Bool)_allowVehicleTrigger;
- (id)_debugStringForVehicleConnectionState:(long long)arg1;
- (void)_vehicleTriggerFired:(_Bool)arg1;
- (id)_insertSideAlarmObjectForVehicleTriggerAlarm:(id)arg1 forReminder:(id)arg2 withDelay:(double)arg3 eventStore:(id)arg4 context:(id)arg5;

@end
