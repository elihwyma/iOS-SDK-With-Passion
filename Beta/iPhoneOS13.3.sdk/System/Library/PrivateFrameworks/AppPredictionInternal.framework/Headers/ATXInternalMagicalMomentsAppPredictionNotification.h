/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface ATXInternalMagicalMomentsAppPredictionNotification : NSObject

{
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithPredictions:(id)arg1;

- (id)init;
- (void)registerForNotificationsWithBlock:(CDUnknownBlockType)arg1;

@end
