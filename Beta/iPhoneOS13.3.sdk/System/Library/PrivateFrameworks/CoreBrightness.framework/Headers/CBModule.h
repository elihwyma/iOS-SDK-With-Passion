/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBModule : NSObject

{
    CDUnknownBlockType _notificationBlock;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)unregisterNotificationBlock;

@end
