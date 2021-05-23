/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdatedNotification : NSObject

{
    _ATXInternalNotification *_note;
}

+ (void)postNotification;

- (id)init;
- (void)registerForNotificationsWithUpdateBlock:(CDUnknownBlockType)arg1;

@end
