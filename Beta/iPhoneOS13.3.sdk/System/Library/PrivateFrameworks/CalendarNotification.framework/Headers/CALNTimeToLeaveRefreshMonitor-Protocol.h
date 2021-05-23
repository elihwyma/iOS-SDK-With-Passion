/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@protocol CALNTimeToLeaveRefreshMonitorDelegate;

@protocol CALNTimeToLeaveRefreshMonitor

@property (weak, nonatomic) id <CALNTimeToLeaveRefreshMonitorDelegate> delegate;

- (unsigned short)setUpRefreshTimerWithTriggerDate:eventExternalURL: /* Error: Ran out of types for this method. */;
- (unsigned short)removeRefreshTimerForEventExternalURL: /* Error: Ran out of types for this method. */;

@end
