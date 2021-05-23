/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isAvailable;
- (void)_updateState;
- (void)_clearState;
- (void)_availabilityChanged;
- (void)_notifyObservers;
- (void)_startObservingAvailability;
- (void)_stopObservingAvailability;

@end
