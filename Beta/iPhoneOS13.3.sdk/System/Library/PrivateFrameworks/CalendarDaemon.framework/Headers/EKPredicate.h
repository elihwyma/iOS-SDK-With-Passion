/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@class NSArray, NSDate, NSSet, NSString, NSTimeZone;

@interface EKPredicate : CADPredicate

{
    NSString *_uuid;
    NSTimeZone *_timeZone;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_calendars;
    NSString *_title;
    NSSet *_restrictedCalendarRowIDs;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *calendars;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *restrictedCalendarRowIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)initWithCalendars:(id)arg1;

@end
