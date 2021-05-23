/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <MobileTimerUI/MTUIDateLabel.h>

@class NSCalendar, NSDate;

@interface MTUIDigitalClockLabel : MTUIDateLabel

{
    NSCalendar *_calendar;
    NSDate *_baseDate;
    long long _hour;
    long long _minute;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)setHour:(long long)arg1 minute:(long long)arg2;
- (void)significantTimeChange:(id)arg1;
- (void)refreshUI;
- (void)resetFontSizes;
- (void)forceSetHour:(long long)arg1 minute:(long long)arg2;
- (void)setTimeLabelText:(id)arg1;

@end
