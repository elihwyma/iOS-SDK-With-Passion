/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NSString;

@protocol NCNotificationCustomContentDelegate;

@protocol NCNotificationCustomContent <Swift>

@property (copy, nonatomic, readonly) NSString *title;
@property (weak, nonatomic) id <NCNotificationCustomContentDelegate> delegate;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;

- (unsigned short)userInteractionEnabled;
- (unsigned short)didReceiveNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)performAction:forNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)customContentLocation;
- (unsigned short)performAction:forNotification:withUserInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultContentHidden;
- (unsigned short)overridesDefaultTitle;
- (unsigned short)allowManualDismiss;

@end
