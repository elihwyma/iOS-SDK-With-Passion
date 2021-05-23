/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface _ATXInternalInstallNotification : NSObject

{
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallDictionary:(id)arg1;

- (id)init;
- (void)registerForNotificationsWithInstallBlock:(CDUnknownBlockType)arg1;

@end
