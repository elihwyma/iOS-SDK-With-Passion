/*
 Image: /System/Library/Frameworks/PushKit.framework/PushKit
 */

#import <PushKit/Swift-Protocol.h>

@protocol PKUserNotificationServerRemoteNotificationXPCServer <Swift>

- (unsigned short)requestTokenForRemoteNotificationsForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateTokenForRemoteNotificationsForBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllowsRemoteNotificationsForBundleIdentifier:withCompletionHandler: /* Error: Ran out of types for this method. */;

@end
