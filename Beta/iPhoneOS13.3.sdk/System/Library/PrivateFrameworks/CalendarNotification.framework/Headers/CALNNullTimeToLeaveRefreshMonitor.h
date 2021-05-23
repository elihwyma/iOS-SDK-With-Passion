/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate;

@interface CALNNullTimeToLeaveRefreshMonitor : NSObject

{
    id <CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
}

@property (weak, nonatomic) id <CALNTimeToLeaveRefreshMonitorDelegate> delegate;

+ (id)sharedInstance;

- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;

@end
