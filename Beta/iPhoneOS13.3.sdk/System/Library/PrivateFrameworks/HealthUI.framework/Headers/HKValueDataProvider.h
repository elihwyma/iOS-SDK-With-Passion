/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDateCache, HKDisplayType, HKFetchOperation, HKHealthStore, NSHashTable, NSString;

@interface HKValueDataProvider : NSObject

{
    _Bool _resultsLoaded;
    _Bool _needsToReFetchValue;
    id _value;
    HKFetchOperation *_outstandingFetchOperation;
    NSHashTable *_observers;
    HKHealthStore *_healthStore;
    HKDateCache *_dateCache;
    HKDisplayType *_displayType;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) _Bool hasLoadedData;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)currentValue;
- (id)secondaryValue;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)invalidateValue;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)_handleUnitPreferencesDidChangeNotification:(id)arg1;
- (void)_refreshValueIfNecessary;
- (_Bool)_currentlyFetchingValue;
- (void)_setNeedsReFetchValue;
- (void)_alertObserversDidUpdateValues;
- (_Bool)_requiresValueFetch;
- (void)_fetchValueWithRetryCount:(long long)arg1;
- (void)_transitionToFetchFailure;
- (void)_updateValueWithValue:(id)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)didUpdateValue;
- (void)unitPreferencesDidUpdate;
- (id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4;

@end
