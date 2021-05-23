/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClockAlarm, NSDate, NSString, NSURL, NSUUID;

@interface _AFClockAlarmMutation : NSObject

{
    AFClockAlarm *_baseModel;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    _Bool _isFiring;
    NSString *_title;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatOptions;
    _Bool _isEnabled;
    _Bool _isSnoozed;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAlarmID:1;
        unsigned int hasAlarmURL:1;
        unsigned int hasIsFiring:1;
        unsigned int hasTitle:1;
        unsigned int hasHour:1;
        unsigned int hasMinute:1;
        unsigned int hasRepeatOptions:1;
        unsigned int hasIsEnabled:1;
        unsigned int hasIsSnoozed:1;
        unsigned int hasFiredDate:1;
        unsigned int hasDismissedDate:1;
        unsigned int hasLastModifiedDate:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setHour:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setIsFiring:(_Bool)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setDismissedDate:(id)arg1;
- (void)setAlarmID:(id)arg1;
- (void)setAlarmURL:(id)arg1;
- (void)setRepeatOptions:(unsigned long long)arg1;
- (void)setIsSnoozed:(_Bool)arg1;

@end
