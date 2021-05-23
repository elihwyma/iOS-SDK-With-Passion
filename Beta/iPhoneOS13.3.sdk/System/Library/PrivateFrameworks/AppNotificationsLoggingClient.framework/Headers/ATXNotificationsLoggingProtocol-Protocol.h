/*
 Image: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
 */

@protocol ATXNotificationsLoggingProtocol

- (unsigned short)logNotification:withNotificationId:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)logEvent:forNotificationId:timestamp:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)logEvent:forNotificationId:supplementaryAction:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)logTapCoalesceForNotificationId:andBundleId:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldMakeQuietingSuggestionForBundleId:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)quietingSuggestionResponse:topic:response: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldMakePromotingSuggestionForBundleId:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)promotingSuggestionResponse:topic:response: /* Error: Ran out of types for this method. */;
- (unsigned short)makeQuietingSuggestionForNextNotification;
- (unsigned short)makePromotingSuggestionForNextNotification;
- (unsigned short)makeSuggestionForNextNotification;
- (unsigned short)logSuggestionShown:forType:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)logSuggestionDeduped:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)logRealTimeTuningOutcome:withBundleId: /* Error: Ran out of types for this method. */;
- (unsigned short)submitGrading:rating:category:userId: /* Error: Ran out of types for this method. */;

@end
