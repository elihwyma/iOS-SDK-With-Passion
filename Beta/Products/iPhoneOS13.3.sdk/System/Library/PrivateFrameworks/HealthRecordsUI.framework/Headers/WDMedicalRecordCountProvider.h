/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDMedicalRecordCountProvider : NSObject <HKSampleTypeUpdateControllerObserver> {
    NSNumber * _allRecordsCount;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _countByCategory;
    NSMutableDictionary * _countBySampleType;
    NSObject<OS_dispatch_queue> * _countingQueue;
    NSHashTable * _observers;
    HRProfile * _profile;
    NSArray * _supportedCategories;
    id /* block */  _unitTesting_allObserversReadyCallback;
}

@property (nonatomic, retain) NSNumber *allRecordsCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSMutableDictionary *countByCategory;
@property (nonatomic, retain) NSMutableDictionary *countBySampleType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *countingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) HRProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedCategories;
@property (nonatomic, copy) id /* block */ unitTesting_allObserversReadyCallback;

- (void).cxx_destruct;
- (id)CDASampleCount;
- (bool)_areAllObserverQueriesRunning;
- (void)_callAllObserversReadyCallbackIfNecessary;
- (bool)_includeCategoryInAllRecordCount:(id)arg1;
- (void)_loadInitialCounts;
- (void)_queue_incorporateAndNotifyObserversWithCategoryCounts:(id)arg1 sampleTypeCounts:(id)arg2;
- (void)_queue_updateAllCategoryRecordCount;
- (void)_sampleCountForSampleTypes:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 completion:(id /* block */)arg4;
- (void)_setupSampleUpdateObserver;
- (void)addObserver:(id)arg1;
- (id)allRecordsCount;
- (id)clientQueue;
- (id)countByCategory;
- (id)countBySampleType;
- (id)countingQueue;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)loadCountOfSamplesForCategories:(id)arg1 additionalSampleTypes:(id)arg2 completion:(id /* block */)arg3;
- (id)numberOfRecordsForCategory:(id)arg1;
- (id)numberOfRecordsForSampleType:(id)arg1;
- (id)observers;
- (id)profile;
- (void)removeObserver:(id)arg1;
- (void)setAllRecordsCount:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCountByCategory:(id)arg1;
- (void)setCountBySampleType:(id)arg1;
- (void)setCountingQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSupportedCategories:(id)arg1;
- (void)setUnitTesting_allObserversReadyCallback:(id /* block */)arg1;
- (id)supportedCategories;
- (id /* block */)unitTesting_allObserversReadyCallback;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;

@end