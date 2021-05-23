/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class NSHashTable, Protocol;

@protocol OS_dispatch_queue;

@interface CARObserverHashTable : NSObject

{
    Protocol *_protocol;
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) _Bool hasObservers;

- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)initWithProtocol:(id)arg1 callbackQueue:(id)arg2;

@end
