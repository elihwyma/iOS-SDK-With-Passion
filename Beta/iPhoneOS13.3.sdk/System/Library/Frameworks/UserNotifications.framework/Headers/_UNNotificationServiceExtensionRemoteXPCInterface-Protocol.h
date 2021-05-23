/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/Swift-Protocol.h>

@protocol _UNNotificationServiceExtensionRemoteXPCInterface <Swift>

- (unsigned short)serviceExtensionTimeWillExpire;
- (unsigned short)didReceiveNotificationRequest:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)serviceExtensionPerformCleanup;

@end
