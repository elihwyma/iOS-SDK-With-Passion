/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSHashTable, NSMutableDictionary, NWPathEvaluator;

@protocol OS_dispatch_queue;

@interface WFServiceReachabilityObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_blockObserversForUUID;
    NSHashTable *_observerObjects;
    long long _reachability;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NWPathEvaluator *_serviceReachabilityEvaluator;
}

@property (retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property (nonatomic) long long reachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NWPathEvaluator *serviceReachabilityEvaluator;
@property (readonly) _Bool isServiceAvailable;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)removeObserver:(id)arg1;
- (void)removeAllObservers;
- (void)_setupReachability;
- (id)addBlockObserver:(CDUnknownBlockType)arg1;
- (_Bool)removeBlockObserverWithHandle:(id)arg1;
- (void)_deliverReachabilityUpdate:(long long)arg1;

@end
