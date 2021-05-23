/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NSString;

@protocol NCNotificationListComponent <Swift>

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated;
@property (copy, nonatomic) NSString *logDescription;

- (unsigned short)updateNotificationSectionSettings:previousSectionSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)insertNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)modifyNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)removeNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadNotificationRequest: /* Error: Ran out of types for this method. */;

@end
