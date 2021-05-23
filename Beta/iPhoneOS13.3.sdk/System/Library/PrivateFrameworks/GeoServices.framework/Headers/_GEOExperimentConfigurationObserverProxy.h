/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOExperimentConfigurationObserverProxy : NSObject

{
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)description;
- (void)forEachObserver:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)observersCount;

@end
