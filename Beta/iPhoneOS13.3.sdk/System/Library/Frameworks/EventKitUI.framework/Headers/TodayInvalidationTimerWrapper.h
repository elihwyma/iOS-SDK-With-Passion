/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject

{
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void)dealloc;
- (id)initWithCalendar:(id)arg1;
- (_Bool)todayChangedAfterInvalidation;
- (void)_setupTimeZoneTimerWithCalendar:(id)arg1;
- (void)_killTimeZoneTimer;
- (void)invalidateTodayAndNotifyIfChanged;

@end
