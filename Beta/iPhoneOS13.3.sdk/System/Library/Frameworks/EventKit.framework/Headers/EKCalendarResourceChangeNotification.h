/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarNotification.h>

@class NSDate, NSNumber, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification

{
    _Bool _allDay;
    _Bool _dateChanged;
    _Bool _timeChanged;
    _Bool _locationChanged;
    _Bool _titleChanged;
    unsigned int _changeType;
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSDate *_endDate;
    NSString *_eventID;
    NSNumber *_createCount;
    NSNumber *_updateCount;
    NSNumber *_deleteCount;
}

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *calendarName;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *startDateForNextOccurrence;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) _Bool allDay;
@property (retain, nonatomic) NSString *eventID;
@property (nonatomic) unsigned int changeType;
@property (nonatomic) _Bool dateChanged;
@property (nonatomic) _Bool timeChanged;
@property (nonatomic) _Bool locationChanged;
@property (nonatomic) _Bool titleChanged;
@property (retain, nonatomic) NSNumber *createCount;
@property (retain, nonatomic) NSNumber *updateCount;
@property (retain, nonatomic) NSNumber *deleteCount;

- (id)initWithType:(long long)arg1;
- (id)resourceChangeFromEventStore:(id)arg1;
- (_Bool)needsAlert;

@end
