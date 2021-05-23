/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKSerializableObject.h>

@class EKSerializableStructuredLocation, NSArray, NSDate, NSMutableArray, NSString, NSTimeZone, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableEvent : EKSerializableObject

{
    _Bool _isAllDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    double _travelTime;
    NSMutableArray *_recurrenceRules;
    NSString *_title;
    NSString *_notes;
    NSURL *_url;
    NSString *_calendarIdentifier;
    NSString *_location;
    EKSerializableStructuredLocation *_structuredLocation;
    NSArray *_attendees;
    NSArray *_alarms;
    NSArray *_attachments;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) _Bool isAllDay;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) NSMutableArray *recurrenceRules;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) EKSerializableStructuredLocation *structuredLocation;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attachments;

+ (id)serializedProperties;
+ (id)classesForKey;

- (id)initWithEvent:(id)arg1;
- (void)_initAlarms:(id)arg1;
- (void)_initAttachments:(id)arg1;
- (void)_initAttendees:(id)arg1;
- (void)_initRecurrenceRules:(id)arg1;
- (id)createEventInEventStore:(id)arg1;

@end
