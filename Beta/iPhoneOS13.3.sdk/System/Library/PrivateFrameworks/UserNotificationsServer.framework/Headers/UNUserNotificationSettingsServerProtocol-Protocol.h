/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <UserNotificationsServer/Swift-Protocol.h>

@protocol UNUserNotificationSettingsServerProtocol <Swift>

- (unsigned short)replaceNotificationSettings:forNotificationSourceIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceNotificationTopicSettings:forNotificationSourceIdentifier:topicIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setNotificationSystemSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationSource:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationSources:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllNotificationSourcesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNotificationSystemSettingsWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
