/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject

{
    _Bool _active;
    _Bool _registeredForBackgroundTaskAgentJobs;
    id <CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
    id <CALNTimeToLeaveRefreshStorage> _storage;
}

@property (nonatomic, readonly) id <CALNTimeToLeaveRefreshStorage> storage;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isRegisteredForBackgroundTaskAgentJobs) _Bool registeredForBackgroundTaskAgentJobs;
@property (weak, nonatomic) id <CALNTimeToLeaveRefreshMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_refreshTimerBTAJobNameForEventExternalURL:(id)arg1;

- (id)initWithStorage:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)arg1;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;
- (void)_refreshTimerFiredForEventExternalURL:(id)arg1;

@end
