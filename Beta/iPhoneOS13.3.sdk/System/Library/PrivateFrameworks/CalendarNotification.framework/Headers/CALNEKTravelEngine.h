/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKTravelEngine, NSString;

@protocol CALNTravelEngineDelegate;

@interface CALNEKTravelEngine : NSObject

{
    _Bool _active;
    id <CALNTravelEngineDelegate> _delegate;
    EKTravelEngine *_travelEngine;
}

@property (nonatomic, readonly) EKTravelEngine *travelEngine;
@property (nonatomic, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CALNTravelEngineDelegate> delegate;

- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)arg1;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
- (CDUnknownBlockType)_authorizationChangedBlock;
- (id)initWithTravelEngine:(id)arg1;
- (CDUnknownBlockType)_adviceReceivedBlock;
- (CDUnknownBlockType)_eventSignficantlyChangedBlock;

@end
