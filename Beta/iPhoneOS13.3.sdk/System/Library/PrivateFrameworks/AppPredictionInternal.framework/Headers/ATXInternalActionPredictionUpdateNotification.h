/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdateNotification : NSObject

{
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithCacheRefreshTTL:(double)arg1;

- (id)init;
- (void)registerForNotificationsWithUpdateBlock:(CDUnknownBlockType)arg1;

@end
