/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface _ATXInternalUninstallNotification : NSObject

{
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithUninstallSet:(id)arg1;

- (id)init;
- (void)registerForNotificationsWithUninstallBlock:(CDUnknownBlockType)arg1;

@end
