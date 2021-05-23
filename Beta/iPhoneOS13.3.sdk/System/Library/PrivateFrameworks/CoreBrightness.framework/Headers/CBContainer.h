/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBContainer : NSObject

{
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    CDUnknownBlockType _notificationBlock;
}

- (void)dealloc;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)unregisterNotificationBlock;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)unscheduleWithDispatchQueue:(id)arg1;

@end
