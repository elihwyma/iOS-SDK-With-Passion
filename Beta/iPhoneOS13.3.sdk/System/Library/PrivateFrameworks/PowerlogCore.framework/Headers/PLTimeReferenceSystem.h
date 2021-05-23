/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReferenceSystem

- (void)dealloc;
- (id)currentTime;
- (void)registerForTimeChangedNotification;
- (void)registerForDayChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (void)dayChangedNotificationReceived:(id)arg1;
- (void)timeZoneChangedNotificationReceived:(id)arg1;
- (void)registerForClockSetNotification;
- (void)timeChangedToMidnightLocalTime;

@end
