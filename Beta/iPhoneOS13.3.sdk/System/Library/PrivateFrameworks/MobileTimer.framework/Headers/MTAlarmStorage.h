/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarm, MTAlarmMigrator, MTAlarmScheduler, MTObserverStore, NSArray, NSDate, NSMutableArray, NSString;

@protocol MTPersistence, NAScheduler;

@interface MTAlarmStorage : NSObject

{
    MTAlarmScheduler *_scheduler;
    NSMutableArray *_orderedAlarms;
    MTAlarm *_sleepAlarm;
    NSDate *_lastModifiedDate;
    id <NAScheduler> _serializer;
    MTObserverStore *_observers;
    MTAlarmMigrator *_migrator;
    id <MTPersistence> _persistence;
    CDUnknownBlockType _currentDateProvider;
}

@property (retain, nonatomic) NSMutableArray *orderedAlarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) MTAlarmMigrator *migrator;
@property (retain, nonatomic) id <MTPersistence> persistence;
@property (copy, nonatomic, readonly) CDUnknownBlockType currentDateProvider;
@property (weak, nonatomic) MTAlarmScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) MTAlarm *nextAlarm;
@property (nonatomic, readonly) NSArray *allAlarms;

+ (id)_diagnosticDictionaryForAlarm:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithPersistence:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)handleF5Reset;
- (void)handleMigrationFinish;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)_loadAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cleanUpForInternalBuild:(id)arg1;
- (id)_cleanUpSnoozeFireDate:(id)arg1;
- (id)_cleanUpSleepAlarmRepeat:(id)arg1;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 persist:(_Bool)arg4 notify:(_Bool)arg5;
- (id)_queue_allAlarms;
- (void)_queue_addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (id)_queue_updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)_queue_removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeAllAlarmsForSource:(id)arg1;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (id)_queue_alarmMatchingAlarmIdentifier:(id)arg1;
- (_Bool)_queue_hasMatchingAlarm:(id)arg1;
- (id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2;
- (void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2;
- (id)_queue_alarmMatchingAlarm:(id)arg1;
- (void)_queue_dismissMutableAlarm:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)_notifyObserversForAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2;
- (id)_applyNecessaryChangesFromExistingAlarm:(id)arg1 updatedAlarm:(id)arg2;
- (void)_queue_persistAlarms;
- (void)_queue_sortAlarms;
- (void)_queue_resetAlarmsTo:(id)arg1 sleepAlarm:(id)arg2;
- (void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmFire:(id)arg1 triggerType:(unsigned long long)arg2 source:(id)arg3;
- (void)removeAllAlarmsForSource:(id)arg1;
- (id)_diagnosticAlarmDictionary;
- (void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)scheduler:(id)arg1 didFireAlarm:(id)arg2;
- (void)getAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)alarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadAlarms;
- (void)loadAlarmsSync;

@end
