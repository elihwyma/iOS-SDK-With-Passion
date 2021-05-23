/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMBulletinBoardNotification.h>

@class HMCameraUserSettings, NSUUID;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification

{
    NSUUID *_targetUUID;
    HMCameraUserSettings *_cameraUserSettings;
}

@property (weak) HMCameraUserSettings *cameraUserSettings;
@property (readonly) unsigned long long notificationEventTriggers;

+ (id)notificationEventTriggersInPredicate:(id)arg1;
+ (id)predicateForCameraSignificantEvent:(unsigned long long)arg1;

- (void)commitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)targetUUID;
- (id)initWithBulletinBoardNotification:(id)arg1;
- (void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2;

@end
