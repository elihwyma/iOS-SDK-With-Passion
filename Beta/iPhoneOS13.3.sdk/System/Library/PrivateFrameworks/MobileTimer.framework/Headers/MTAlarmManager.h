/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmCache, MTAlarmManagerExportedObject, MTMetrics, MTXPCConnectionProvider, NSNotificationCenter;

@interface MTAlarmManager : NSObject

{
    MTAlarmManagerExportedObject *_exportedObject;
    struct MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTAlarmCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

@property (retain, nonatomic) MTAlarmManagerExportedObject *exportedObject;
@property (nonatomic, readonly) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTAlarmCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;

+ (void)warmUp;
+ (id)_filteredAlarms:(id)arg1 afterDate:(id)arg2 maxCount:(unsigned long long)arg3 filter:(CDUnknownBlockType)arg4;
+ (id)assistantSyncNotificationName;

- (id)init;
- (void)dealloc;
- (void)checkIn;
- (id)initWithMetrics:(id)arg1;
- (void)reconnect;
- (id)alarms;
- (unsigned long long)indexForAlarm:(id)arg1;
- (id)addAlarm:(id)arg1;
- (id)removeAlarm:(id)arg1;
- (id)alarmsIncludingSleepAlarm:(_Bool)arg1;
- (id)updateAlarm:(id)arg1;
- (id)sleepAlarm;
- (id)nextAlarm;
- (id)alarmsSyncIncludingSleepAlarm:(_Bool)arg1;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (void)_getCachedAlarmsWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)_alarmsIncludingSleepAlarm:(_Bool)arg1 doSynchronous:(_Bool)arg2;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)_nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4 doSynchronous:(_Bool)arg5;
- (id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3 doSynchronous:(_Bool)arg4;
- (id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)_nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4 doSynchronous:(_Bool)arg5;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)alarmsSync;
- (unsigned long long)alarmCountIncludingSleepAlarm:(_Bool)arg1;
- (id)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2;
- (id)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2;
- (unsigned long long)firingAlarmCount;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)sleepAlarmSync;
- (id)nextAlarmSync;
- (id)alarmWithIDString:(id)arg1;
- (id)alarmAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmCount;
- (id)snoozeAlarmWithIdentifier:(id)arg1;
- (id)dismissAlarmWithIdentifier:(id)arg1;

@end
