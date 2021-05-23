/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSHashTable, Protocol;

@protocol OS_dispatch_queue;

@interface GEOObserverHashTable : NSObject

{
    Protocol *_protocol;
    NSHashTable *_observers;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, readonly) _Bool hasObservers;

- (id)init;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithProtocol:(id)arg1 queue:(id)arg2;

@end
