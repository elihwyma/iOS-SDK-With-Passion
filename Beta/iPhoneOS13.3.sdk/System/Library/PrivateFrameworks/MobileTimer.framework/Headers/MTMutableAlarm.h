/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTAlarm.h>

@class MTSound, NSNumber, NSString;

@interface MTMutableAlarm : MTAlarm

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
@property (nonatomic) _Bool allowsSnooze;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyChangesFromChangeSet:(id)arg1;

@end
