/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DCSelectorDelayer : NSObject

{
    _Bool _waitToFireUntilRequestsStop;
    _Bool _callOnMainThread;
    id _target;
    SEL _selector;
    double _delay;
    NSObject<OS_dispatch_queue> *_requestQueue;
    CDUnknownBlockType _fireBlock;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) _Bool waitToFireUntilRequestsStop;
@property (nonatomic) _Bool callOnMainThread;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) CDUnknownBlockType fireBlock;
@property double delay;
@property (nonatomic, readonly) _Bool isScheduledToFire;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(_Bool)arg4 callOnMainThread:(_Bool)arg5;
- (void)requestFire;
- (void)fireImmediately;
- (void)_cancelFireRequests;
- (void)callTargetSelector;
- (void)cancelPreviousFireRequests;

@end
