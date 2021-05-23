/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

#import <MediaMiningKit/Swift-Protocol.h>

@class CLLocation, CLSEKCalendar, CLSEKParticipant, NSArray, NSDate, NSString;

@interface CLSEKEvent : NSObject <Swift>

{
    _Bool _isBirthday;
    _Bool _allDay;
    _Bool _hasAttendees;
    _Bool _organizedByMe;
    _Bool _isSelfOrganized;
    _Bool _hasRecurrenceRules;
    _Bool _isSuggestedAndAccepted;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_attendees;
    CLSEKParticipant *_selfAttendee;
    CLSEKCalendar *_calendar;
    NSString *_calendarItemIdentifier;
    struct CLLocationCoordinate2D _coordinate;
}

@property (readonly) NSString *calendarItemIdentifier;
@property (readonly) NSString *title;
@property (readonly) _Bool isBirthday;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly, getter=isAllDay) _Bool allDay;
@property (readonly) _Bool hasAttendees;
@property (readonly) NSArray *attendees;
@property (readonly) _Bool organizedByMe;
@property (readonly) CLSEKParticipant *selfAttendee;
@property (readonly) CLSEKCalendar *calendar;
@property (readonly) _Bool hasRecurrenceRules;
@property (readonly) CLLocation *geoLocation;
@property (readonly) struct CLLocationCoordinate2D coordinate;
@property (readonly) _Bool isSuggestedAndAccepted;
@property (readonly) _Bool isSelfOrganized;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1;

@end
