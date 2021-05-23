/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source, VKNotificationObserverDelegate;

__attribute__((visibility("hidden")))
@interface VKNotificationObserver : NSObject

{
    struct _geo_weak_ptr<id<VKNotificationObserverDelegate>> {
        id <VKNotificationObserverDelegate> _p;
    } _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)_receivedMemoryNotification;
- (id)initWithTarget:(id)arg1 taskContext:(const struct TaskContext *)arg2;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedLocalChangedNotification;

@end
