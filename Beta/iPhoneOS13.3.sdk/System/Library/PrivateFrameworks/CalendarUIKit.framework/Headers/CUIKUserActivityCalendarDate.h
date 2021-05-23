/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity

{
    NSDate *_date;
    unsigned long long _view;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long view;
@property (nonatomic, readonly) _Bool isTomorrow;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)updateActivity:(id)arg1;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2;

@end
