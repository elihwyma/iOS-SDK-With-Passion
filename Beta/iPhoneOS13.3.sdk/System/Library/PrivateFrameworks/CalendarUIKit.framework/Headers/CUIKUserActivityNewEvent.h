/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate, NSString, NSTimeZone, NSURL;

@interface CUIKUserActivityNewEvent : CUIKUserActivity

{
    _Bool _allDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_title;
    NSURL *_url;
    NSString *_notes;
    NSString *_location;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSTimeZone *timeZone;
@property _Bool allDay;
@property (retain) NSString *title;
@property (retain) NSURL *url;
@property (retain) NSString *notes;
@property (retain) NSString *location;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)eventWithEventStore:(id)arg1;

@end
