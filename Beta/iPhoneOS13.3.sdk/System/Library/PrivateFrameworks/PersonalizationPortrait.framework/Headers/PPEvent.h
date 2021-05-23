/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class CLLocation, NSArray, NSDate, NSString, NSURL, PPCalendar;

@interface PPEvent : NSObject

{
    BOOL _availability;
    unsigned char _eventFlags;
    NSString *_eventIdentifier;
    NSString *_title;
    NSString *_location;
    PPCalendar *_calendar;
    NSDate *_startDate;
    NSDate *_endDate;
    NSURL *_externalURI;
    NSArray *_attendees;
    NSString *_organizerName;
    NSString *_notes;
    NSURL *_url;
    NSString *_structuredLocationTitle;
    NSString *_structuredLocationAddress;
    CLLocation *_structuredLocationCoordinates;
}

@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) PPCalendar *calendar;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) BOOL availability;
@property (nonatomic, readonly) NSURL *externalURI;
@property (nonatomic, readonly) NSArray *attendees;
@property (nonatomic, readonly) NSString *organizerName;
@property (nonatomic, readonly) unsigned char eventFlags;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *structuredLocationTitle;
@property (nonatomic, readonly) NSString *structuredLocationAddress;
@property (nonatomic, readonly) CLLocation *structuredLocationCoordinates;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEvent:(id)arg1;
- (long long)compareStartDateWithEvent:(id)arg1;
- (id)initWithEKEvent:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 title:(id)arg2 location:(id)arg3 calendar:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 availability:(BOOL)arg7 externalURI:(id)arg8 attendees:(id)arg9 organizerName:(id)arg10 eventFlags:(unsigned char)arg11 notes:(id)arg12 url:(id)arg13 structuredLocationTitle:(id)arg14 structuredLocationAddress:(id)arg15 structuredLocationCoordinates:(id)arg16;
- (_Bool)representsUnscheduledFreeTime;
- (_Bool)organizerIsCurrentUser;

@end
