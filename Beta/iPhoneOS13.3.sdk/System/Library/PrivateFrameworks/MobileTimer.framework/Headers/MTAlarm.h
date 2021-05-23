/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class MTIntentAlarm, MTSound, NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface MTAlarm : NSObject <Swift>

{
    _Bool _sleepSchedule;
    _Bool _bedtimeDoNotDisturb;
    _Bool _timeInBedTracking;
    _Bool _enabled;
    _Bool _sleepAlarm;
    _Bool _allowsSnooze;
    NSUUID *_alarmID;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _bedtimeHour;
    unsigned long long _bedtimeMinute;
    NSNumber *_bedtimeReminder;
    unsigned long long _bedtimeDoNotDisturbOptions;
    unsigned long long _repeatSchedule;
    unsigned long long _playOptions;
    NSDate *_lastModifiedDate;
    NSString *_title;
    MTSound *_sound;
    NSDate *_snoozeFireDate;
    NSDate *_bedtimeSnoozeFireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    unsigned long long _dismissedAction;
    NSDate *_bedtimeFiredDate;
    NSDate *_bedtimeDismissedDate;
    unsigned long long _bedtimeDismissedAction;
    NSDate *_keepOffUntilDate;
    unsigned long long _onboardingVersion;
    CDUnknownBlockType _currentDateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MTIntentAlarm *intentAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) _Bool bedtimeDoNotDisturb;
@property (nonatomic) unsigned long long bedtimeDoNotDisturbOptions;
@property (nonatomic) _Bool timeInBedTracking;
@property (nonatomic) _Bool sleepSchedule;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) unsigned long long playOptions;
@property (nonatomic, getter=isSleepAlarm) _Bool sleepAlarm;
@property (nonatomic) _Bool allowsSnooze;
@property (copy, nonatomic) NSDate *snoozeFireDate;
@property (copy, nonatomic) NSDate *bedtimeSnoozeFireDate;
@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *dismissedDate;
@property (nonatomic) unsigned long long dismissedAction;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *bedtimeFiredDate;
@property (copy, nonatomic) NSDate *bedtimeDismissedDate;
@property (nonatomic) unsigned long long bedtimeDismissedAction;
@property (copy, nonatomic) NSDate *keepOffUntilDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;
@property (nonatomic) unsigned long long onboardingVersion;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider;
@property (nonatomic, readonly) NSUUID *alarmID;
@property (nonatomic, readonly) NSURL *alarmURL;
@property (nonatomic, readonly) _Bool repeats;
@property (nonatomic, readonly) _Bool playsOnThisDevice;
@property (nonatomic, readonly, getter=isFiring) _Bool firing;
@property (nonatomic, readonly, getter=isSnoozed) _Bool snoozed;
@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) unsigned long long sleepDuration;
@property (nonatomic, readonly) NSDate *nextFireDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isInternalBuild;
+ (id)alarm;
+ (id)sleepAlarm;
+ (id)alarmWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (id)propertiesAffectingNotification;
+ (id)propertiesAffectingSnooze;
+ (unsigned long long)defaultPlayOptionsIsSleepAlarm:(_Bool)arg1;
+ (unsigned long long)defaultBedtimeDoNotDisturbOptions;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2;
+ (unsigned long long)defaultPlayOptions;
+ (_Bool)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3;
+ (id)descriptionForPlayOptions:(unsigned long long)arg1;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4;
+ (id)mostRecentlyUpdatedAlarmForAlarms:(id)arg1;
+ (id)propertiesAffectingWaketime;
+ (id)propertiesAffectingBedtime;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)dateComponents;
- (id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(_Bool)arg2;
- (id)_initCommon;
- (id)alarmIDString;
- (_Bool)shouldBeScheduled;
- (id)upcomingTriggersAfterDate:(id)arg1;
- (id)nextTriggersAfterDate:(id)arg1 includeBedtime:(_Bool)arg2;
- (_Bool)confirmedLastBedtimeReminder;
- (_Bool)isBedtimeSnoozed;
- (_Bool)isEqualToAlarm:(id)arg1;
- (id)nextTriggerAfterDate:(id)arg1;
- (id)intentLabel;
- (id)alarmIDIntentObject;
- (id)alarmIntentDisplayString;
- (id)timeObject;
- (id)bedtimeComponents;
- (id)nextTriggersAfterDate:(id)arg1 inclusionOptions:(unsigned long long)arg2;
- (id)nextExpectedWakeUpDateAfterDate:(id)arg1;
- (id)nextExpectedBedtimeDateAfterDate:(id)arg1;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)initWithCurrentTimeFromCurrentDateProvider:(CDUnknownBlockType)arg1;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (double)sleepDurationSeconds;
- (id)nextTrigger;
- (id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(_Bool)arg2;
- (id)nextTriggerAfterDate:(id)arg1 includeSnooze:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextTriggersAfterDate:(id)arg1 includeSnooze:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)_earliestTriggerDateForDate:(id)arg1;
- (id)_nextDateHelperWithDate:(id)arg1 calendar:(id)arg2;
- (id)_nextBedtimeTriggersHelperWithDate:(id)arg1 wakeUpDate:(id)arg2 inclusionOptions:(unsigned long long)arg3 calendar:(id)arg4;
- (_Bool)_isEqualToAlarm:(id)arg1 checkLastModified:(_Bool)arg2;
- (void)_copyStateOntoAlarm:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (void)_updatePropertiesFromDeserializer:(id)arg1;
- (void)serializeWithSerializer:(id)arg1;
- (void)setFiring:(_Bool)arg1;
- (id)nextFireDateAfterDate:(id)arg1;
- (id)nextTriggerAfterDate:(id)arg1 ofType:(unsigned long long)arg2;
- (id)nextTriggersAfterDate:(id)arg1;
- (_Bool)isEqualIgnoringLastModifiedDate:(id)arg1;

@end
