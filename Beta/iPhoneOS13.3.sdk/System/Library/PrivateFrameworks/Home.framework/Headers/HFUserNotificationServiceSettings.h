/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSPredicate;

@interface HFUserNotificationServiceSettings : NSObject <Swift>

{
    _Bool _notificationsEnabled;
    _Bool _doorbellNotificationsEnabled;
    _Bool _motionNotificationsEnabled;
    _Bool _smartDetectionNotificationsEnabled;
    NSPredicate *_notificationCondition;
    NSPredicate *_smartCameraNotificationCondition;
}

@property (nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled;
@property (nonatomic, getter=areDoorbellNotificationsEnabled) _Bool doorbellNotificationsEnabled;
@property (nonatomic, getter=areMotionNotificationsEnabled) _Bool motionNotificationsEnabled;
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) _Bool smartDetectionNotificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (retain, nonatomic) NSPredicate *smartCameraNotificationCondition;

+ (id)combinedConditionForBulletinBoardNotifications:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)applySettingsToBulletinBoardNotifications:(id)arg1;
- (id)initWithNotificationsEnabled:(_Bool)arg1 condition:(id)arg2 smartCameraNotificationCondition:(id)arg3;
- (id)initWithBulletinBoardNotifications:(id)arg1;

@end
