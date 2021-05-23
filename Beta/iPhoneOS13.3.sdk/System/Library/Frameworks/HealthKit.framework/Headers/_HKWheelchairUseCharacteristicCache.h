/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKWheelchairUseObject, NSHashTable;

@protocol OS_dispatch_queue;

@interface _HKWheelchairUseCharacteristicCache : NSObject

{
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
    long long _state;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSObject<OS_dispatch_queue> *_queue;
    int _characteristicUpdateToken;
    long long _queryRetries;
}

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)_fetchWheelchairUseIfNecessary;
- (_Bool)_needsFetch;
- (void)_fetchWheelchairUse;
- (void)_handleFetchSuccess:(id)arg1;
- (void)_handleFetchError:(id)arg1;
- (_Bool)isWheelchairUser;
- (void)_alertObserversDidUpdateToWheelchairUser:(_Bool)arg1;
- (_Bool)hasFetchedWheelchairUse;

@end
