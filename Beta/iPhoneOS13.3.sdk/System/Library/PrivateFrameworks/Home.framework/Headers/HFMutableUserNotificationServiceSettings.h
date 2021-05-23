/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFUserNotificationServiceSettings.h>

@class NSPredicate;

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled;
@property (nonatomic, getter=areMotionNotificationsEnabled) _Bool motionNotificationsEnabled;
@property (nonatomic, getter=areDoorbellNotificationsEnabled) _Bool doorbellNotificationsEnabled;
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) _Bool smartDetectionNotificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (retain, nonatomic) NSPredicate *smartCameraNotificationCondition;

@end
