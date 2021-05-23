/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface _ATXInternalAppSessionNotification : NSObject

{
    _ATXInternalNotification *_noteAppSessionStart;
    _ATXInternalNotification *_noteAppSessionEnd;
}

+ (void)postNotificationForAppSessionStart:(id)arg1;
+ (void)postNotificationForAppSessionEnd:(id)arg1;

- (id)init;
- (void)registerForNotificationsWithAppSessionStartBlock:(CDUnknownBlockType)arg1;
- (void)registerForNotificationsWithAppSessionEndBlock:(CDUnknownBlockType)arg1;

@end
