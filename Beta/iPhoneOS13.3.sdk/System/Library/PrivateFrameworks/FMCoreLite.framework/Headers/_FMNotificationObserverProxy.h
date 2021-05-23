/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <FMCoreLite/_FMObserverProxy.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _FMNotificationObserverProxy : _FMObserverProxy

{
    id _notificationObserver;
    NSOperationQueue *_observerQueue;
    CDUnknownBlockType _observerBlock;
    NSString *_notificationName;
}

@property (nonatomic, readonly) NSOperationQueue *observerQueue;
@property (copy, nonatomic, readonly) CDUnknownBlockType observerBlock;
@property (copy, nonatomic, readonly) NSString *notificationName;

- (void)invalidate;
- (id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(CDUnknownBlockType)arg4;
- (void)performObserverBlock;

@end
