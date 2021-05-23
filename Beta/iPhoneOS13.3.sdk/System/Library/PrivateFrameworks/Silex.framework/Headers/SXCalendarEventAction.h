/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSDate, NSString, NSTimeZone, NSURL, SXFormattedText;

@interface SXCalendarEventAction : NSObject <Swift>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;

- (id)initWithStartDate:(id)arg1;

@end
