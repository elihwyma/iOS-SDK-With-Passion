/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSDate, NSString;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource

{
    NSString *_title;
    NSString *_externalID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_relatedUniqueIdentifier;
    unsigned long long _view;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long view;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2;
- (void)updateActivity:(id)arg1;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(_Bool)arg3;
- (id)eventFromStore:(id)arg1;

@end
