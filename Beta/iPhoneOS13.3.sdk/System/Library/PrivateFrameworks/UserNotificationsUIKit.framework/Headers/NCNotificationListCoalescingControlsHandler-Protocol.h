/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@protocol NCNotificationListCoalescingControlsHandler <Swift>

@property (weak, nonatomic) id <NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;

- (unsigned short)resetClearButtonStateAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldReceiveTouchAtPointInWindowSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissModalFullScreenIfNeeded;

@end
