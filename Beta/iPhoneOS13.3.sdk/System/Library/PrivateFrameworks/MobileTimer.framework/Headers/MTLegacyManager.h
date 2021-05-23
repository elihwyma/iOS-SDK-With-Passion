/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class Alarm, NSArray, NSString, UNUserNotificationCenter;

@protocol OS_dispatch_queue;

@interface MTLegacyManager : NSObject

{
    _Bool _loaded;
    _Bool _purged;
    NSArray *_alarms;
    Alarm *_sleepAlarm;
    double _defaultDuration;
    NSString *_defaultSound;
    NSObject<OS_dispatch_queue> *_serializer;
    UNUserNotificationCenter *_notificationCenter;
    NSArray *_scheduledNotifications;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSArray *scheduledNotifications;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) Alarm *sleepAlarm;
@property (nonatomic) double defaultDuration;
@property (copy, nonatomic) NSString *defaultSound;
@property (nonatomic) _Bool loaded;
@property (nonatomic) _Bool purged;

+ (id)sharedManager;
+ (id)alarmFromOldAlarm:(id)arg1;
+ (id)_bundleIDForUNSchedule;
+ (unsigned long long)repeatScheduleFromOldAlarm:(id)arg1;
+ (id)soundFromOldAlarm:(id)arg1;
+ (id)_numberFromString:(id)arg1;

- (id)init;
- (_Bool)_upgrade;
- (void)loadLegacyData;
- (void)purgeLegacyData;
- (void)cancelNotifications;
- (void)_loadUserPreferences;
- (void)_loadScheduledNotifications;
- (void)_upgradeFromSpringboardDefaults;
- (void)_loadAlarms;
- (void)_reconcileAlarmsAndNotifications;
- (void)_loadTimerDefaults;
- (_Bool)_upgradeIfNeverAttempted;
- (_Bool)_discardOldVersion;
- (_Bool)_upgradeAlarms;
- (_Bool)_upgradeTimers;
- (id)_copyLegacyAlarmsFromPreferences;
- (_Bool)_discardOldAlarms;
- (_Bool)_discardOldTimers;
- (id)_copyLegacySleepAlarmFromPreferences;
- (void)_purgeAlarmsAndTimers;
- (void)_cancelNotifications;

@end
