/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class EKRecurrenceRule, NSDate, NSString;

@protocol OS_dispatch_queue;

@interface ADCalendarEvent : NSObject

{
    _Bool _allDay;
    NSString *_eventDescription;
    NSString *_location;
    NSString *_summary;
    NSString *_url;
    NSDate *_start;
    NSDate *_end;
    EKRecurrenceRule *_recurrence;
    NSObject<OS_dispatch_queue> *_calendarEventQueue;
}

@property (copy, nonatomic) NSString *eventDescription;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDate *start;
@property (retain, nonatomic) NSDate *end;
@property (nonatomic) _Bool allDay;
@property (retain, nonatomic) EKRecurrenceRule *recurrence;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calendarEventQueue;

- (id)initWithDictionary:(id)arg1;
- (id)EKEventInEventStore:(id)arg1;
- (void)retrieveEventInEventStore:(id)arg1 byIdentifier:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_recurrenceRuleFromDictionary:(id)arg1;
- (_Bool)_eventIsEqualToCalendarEvent:(id)arg1;

@end
