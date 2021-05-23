/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarItem.h>

@class EKObjectID, NSDate, NSDateComponents, NSTimeZone;

@interface EKReminder : EKCalendarItem

{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_dueDateComponents;
    EKObjectID *_parentID;
}

@property (nonatomic, readonly) NSTimeZone *dueDateTimeZone;
@property (retain, nonatomic) EKObjectID *parentID;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, getter=isCompleted) _Bool completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;

+ (Class)frozenClass;
+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;
+ (id)reminderWithEventStore:(id)arg1;
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;

- (id)init;
- (id)description;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)reset;
- (_Bool)_reset;
- (void)rollback;
- (_Bool)validate:(id *)arg1;
- (_Bool)refresh;
- (void)setAllDay:(_Bool)arg1;
- (_Bool)isAllDay;
- (id)dueDate;
- (void)setDueDate:(id)arg1;
- (id)startTimeZone;
- (void)setStartTimeZone:(id)arg1;
- (id)startDateForRecurrence;
- (unsigned long long)displayOrder;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (id)reminderIdentifier;
- (id)initWithPersistentObject:(id)arg1;
- (void)forceUpdateFrozenCalendar:(id)arg1;
- (id)externalURI;
- (_Bool)dueDateAllDay;
- (void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1;
- (id)startDateComponentsRaw;
- (id)startDateTimeZone;
- (void)setStartDateTimeZone:(id)arg1;
- (_Bool)startDateAllDay;
- (void)setStartDateAllDay:(_Bool)arg1;
- (id)_generateNewUniqueID;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)firstAlertDate;
- (void)setFirstAlertDate:(id)arg1;
- (void)clearParentID;
- (id)bestDisplayAlarm;

@end
