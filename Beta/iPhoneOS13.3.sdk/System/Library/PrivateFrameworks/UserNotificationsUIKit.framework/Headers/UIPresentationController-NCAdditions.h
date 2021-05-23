/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIPresentationController.h>

@class NCNotificationViewController;

@interface UIPresentationController (NCAdditions)

@property (nonatomic, readonly) NCNotificationViewController *presentedNotificationViewController;

@end
