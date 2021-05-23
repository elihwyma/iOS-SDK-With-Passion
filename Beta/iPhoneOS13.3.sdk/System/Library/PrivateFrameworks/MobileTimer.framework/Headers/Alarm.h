/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL;

@protocol AlarmDelegate;

@interface Alarm : NSObject

{
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    _Bool _allowsSnooze;
    NSDate *_lastModified;
    unsigned int _revision;
    Alarm *_editingProxy;
    _Bool _pretendActiveIfProxy;
    NSMutableDictionary *_settings;
    NSArray *_repeatDays;
    NSString *_vibrationID;
    _Bool _snoozed;
    _Bool _isSleepAlarm;
    _Bool _forceActiveForMigration;
    long long _soundType;
    NSString *_sound;
    NSString *_title;
    id <AlarmDelegate> _delegate;
    NSString *_alarmID;
    NSURL *_alarmIDURL;
}

@property (retain, nonatomic) NSString *alarmID;
@property (retain, nonatomic) NSURL *alarmIDURL;
@property (nonatomic, readonly) Alarm *editingProxy;
@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isSnoozed) _Bool snoozed;
@property (nonatomic) _Bool isSleepAlarm;
@property (copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int hour;
@property (nonatomic) unsigned int minute;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic, readonly) _Bool repeats;
@property (nonatomic, readonly) NSArray *repeatDays;
@property (nonatomic) unsigned int daySetting;
@property (nonatomic) _Bool allowsSnooze;
@property (nonatomic, readonly) long long soundType;
@property (nonatomic, readonly) NSString *sound;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (nonatomic, readonly) NSString *uiTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *vibrationID;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly) unsigned int revision;
@property (weak, nonatomic) id <AlarmDelegate> delegate;
@property (nonatomic) _Bool forceActiveForMigration;

+ (_Bool)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (CDUnknownBlockType)timeComparator;
+ (_Bool)verifySettings:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)initWithSettings:(id)arg1;
- (void)applySettings:(id)arg1;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
- (void)dropEditingProxy;
- (void)prepareEditingProxy;
- (void)applyChangesFromEditingProxy;
- (id)nowDateForOffsetCalculation;
- (id)timeZoneForOffsetCalculation;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (void)refreshActiveState;
- (void)markModified;
- (long long)compareTime:(id)arg1;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (id)alarmSoundVolume;
- (void)setAlarmSoundVolume:(id)arg1;

@end
