/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLSharedEventListener.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSharedEventListenerInternal : MTLSharedEventListener

{
    struct IONotificationPort *_notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1;
- (void)_notifyEventPort:(unsigned int)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

@end
