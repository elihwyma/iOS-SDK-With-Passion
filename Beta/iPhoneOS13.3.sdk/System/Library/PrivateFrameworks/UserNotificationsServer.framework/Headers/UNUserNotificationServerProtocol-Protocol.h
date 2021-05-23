/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <UserNotificationsServer/Swift-Protocol.h>

@protocol UNUserNotificationServerProtocol <Swift>

- (unsigned short)setObservingUserNotifications:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAuthorizationWithOptions:forBundleIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationSettingsForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationCategoriesForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setNotificationCategories:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)addNotificationRequest:forBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceContentForRequestWithIdentifier:bundleIdentifier:replacementContent:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setNotificationRequests:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)getPendingNotificationRequestsForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePendingNotificationRequestsWithIdentifiers:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSimilarNotificationRequests:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllPendingNotificationRequestsForBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)getDeliveredNotificationsForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDeliveredNotificationsWithIdentifiers:forBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllDeliveredNotificationsForBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)getBadgeNumberForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBadgeNumber:forBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBadgeString:forBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setNotificationTopics:forBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationTopicsForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationSettingsForTopicsWithBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;

@end
