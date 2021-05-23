/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimeZone, NSURL, SXFormattedText;

@interface SXPresentableCalendarEvent : NSObject

{
    _Bool _allDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_title;
    NSString *_location;
    NSURL *_URL;
    SXFormattedText *_notes;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) _Bool allDay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) SXFormattedText *notes;

- (id)initWithStartDate:(id)arg1;

@end
