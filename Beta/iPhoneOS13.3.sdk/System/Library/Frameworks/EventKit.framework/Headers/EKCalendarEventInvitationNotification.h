/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarNotification.h>

@class EKCalendarEventInvitationNotificationAttendee, EKRecurrenceRule, NSArray, NSDate, NSString, NSTimeZone;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification

{
    _Bool _allDay;
    _Bool _timeChanged;
    _Bool _dateChanged;
    _Bool _locationChanged;
    _Bool _attendeeReplyChanged;
    NSString *_location;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSDate *_endDate;
    NSDate *_participationStatusModifiedDate;
    NSTimeZone *_timeZone;
    long long _participationStatus;
    long long _status;
    EKRecurrenceRule *_recurrenceRule;
    NSArray *_attendees;
    EKCalendarEventInvitationNotificationAttendee *_owner;
    NSString *_invitedBy;
}

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *startDateForNextOccurrence;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *participationStatusModifiedDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long participationStatus;
@property (nonatomic) long long status;
@property (nonatomic, getter=isAllDay) _Bool allDay;
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule;
@property (nonatomic) _Bool timeChanged;
@property (nonatomic) _Bool dateChanged;
@property (nonatomic) _Bool locationChanged;
@property (nonatomic) _Bool attendeeReplyChanged;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *owner;
@property (nonatomic, readonly) NSString *invitedBy;
@property (nonatomic) _Bool couldBeJunk;

- (id)initWithEvent:(id)arg1;
- (_Bool)hasRecurrenceRules;
- (id)eventFromEventStore:(id)arg1;

@end
