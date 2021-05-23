/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, Protocol, geo_isolater;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNObserverHashTable : NSObject

{
    Protocol *_protocol;
    NSHashTable *_observers;
    geo_isolater *_observerLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) _Bool hasObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)count;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithProtocol:(id)arg1;

@end
