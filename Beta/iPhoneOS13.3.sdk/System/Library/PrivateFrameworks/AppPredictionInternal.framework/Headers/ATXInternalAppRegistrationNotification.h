/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface ATXInternalAppRegistrationNotification : NSObject

{
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallDictionary:(id)arg1;

- (id)init;
- (void)registerForNotificationsWithRegisterBlock:(CDUnknownBlockType)arg1;
- (void)registerForNotificationsWithUpgradeBlock:(CDUnknownBlockType)arg1;

@end
