/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOperation.h>

@class AVOutputContextDestinationChange, AVWeakReference, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation

{
    AVWeakReference *_weakObserver;
    struct OpaqueFigRoutingContext *_routingContext;
    struct __CFString *_routeChangeID;
    CDUnknownBlockType _routeChangeBlock;
    NSObject<OS_dispatch_queue> *_routeChangeIvarAccessQueue;
    AVOutputContextDestinationChange *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AVOutputContextDestinationChange *result;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1 routeChangeID:(struct __CFString *)arg2 routeChangeBlock:(CDUnknownBlockType)arg3;
- (void)_setResultIfNotAlreadySet:(id)arg1;
- (void)_routeConfigUpdateWithID:(struct __CFString *)arg1 endedWithReason:(struct __CFString *)arg2;

@end
