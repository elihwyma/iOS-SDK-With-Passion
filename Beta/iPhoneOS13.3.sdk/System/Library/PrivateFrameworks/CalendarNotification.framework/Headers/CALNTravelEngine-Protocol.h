/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@protocol CALNTravelEngineDelegate;

@protocol CALNTravelEngine <Swift>

@property (weak, nonatomic) id <CALNTravelEngineDelegate> delegate;

- (unsigned short)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL: /* Error: Ran out of types for this method. */;
- (unsigned short)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelHypothesisRefreshRequestForEventWithExternalURL: /* Error: Ran out of types for this method. */;
- (unsigned short)requestHypothesisRefreshAtDate:forEventWithExternalURL: /* Error: Ran out of types for this method. */;
- (unsigned short)ceaseMonitoringForEventWithExternalURL: /* Error: Ran out of types for this method. */;

@end
