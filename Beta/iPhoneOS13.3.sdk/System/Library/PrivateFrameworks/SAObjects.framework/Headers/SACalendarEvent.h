/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface SACalendarEvent : SADomainObject

@property (copy, nonatomic) NSArray *alerts;
@property (nonatomic) _Bool allDay;
@property (copy, nonatomic) NSArray *attendees;
@property (copy, nonatomic) NSURL *calendarId;
@property (copy, nonatomic) NSURL *calendarPunchoutURI;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *includeRecurrences;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSNumber *readOnly;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSString *selfParticipantStatus;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *title;

+ (id)event;
+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
