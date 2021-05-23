/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBFilter : NSObject

{
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    CDUnknownBlockType _notificationBlock;
}

- (id)init;
- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)unregisterNotificationBlock;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (id)filterEvent:(id)arg1;
- (void)forgetDataForService:(struct __IOHIDServiceClient *)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)unscheduleWithDispatchQueue:(id)arg1;
- (id)filterEvents:(id)arg1;

@end
