/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNTravelEngineDelegate;

@interface CALNNullTravelEngine : NSObject

{
    id <CALNTravelEngineDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CALNTravelEngineDelegate> delegate;

+ (id)sharedInstance;

- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;

@end
