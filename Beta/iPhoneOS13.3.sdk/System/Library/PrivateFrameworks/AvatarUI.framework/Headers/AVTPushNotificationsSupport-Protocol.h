/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@protocol AVTPushNotificationsSupportDelegate;

@protocol AVTPushNotificationsSupport

@property (weak, nonatomic) id <AVTPushNotificationsSupportDelegate> delegate;

- (unsigned short)startListeningToPushNotifications;
- (unsigned short)stopListeningToPushNotifications;

@end
