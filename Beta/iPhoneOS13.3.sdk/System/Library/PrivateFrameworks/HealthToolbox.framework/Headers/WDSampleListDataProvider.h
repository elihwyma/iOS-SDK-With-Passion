/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKHealthStore, HKSortedSampleArray, NSDictionary, NSPredicate, NSString, WDProfile, _HKFilter;

__attribute__((visibility("hidden")))
@interface WDSampleListDataProvider : NSObject

{
    NSDictionary *_pagingContexts;
    _HKFilter *_defaultQueryPredicateFilter;
    CDUnknownBlockType _updateCallback;
    NSPredicate *_defaultQueryPredicate;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKSortedSampleArray *_samples;
}

@property (nonatomic, readonly) HKDisplayType *displayType;
@property (weak, nonatomic, readonly) WDProfile *profile;
@property (nonatomic, readonly) HKSortedSampleArray *samples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSPredicate *defaultQueryPredicate;
@property (nonatomic, readonly) long long cellStyle;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) _Bool textAdjustsFontSizeToFitWidth;
@property (nonatomic, readonly) double customCellHeight;
@property (nonatomic, readonly) double customEstimatedCellHeight;
@property (readonly) _Bool hasCompleteDataSet;
@property (readonly) _Bool calendarDateSelectorVisible;
@property (nonatomic, readonly) HKHealthStore *healthStore;

- (id)titleForSection:(unsigned long long)arg1;
- (void)deleteAllData;
- (id)sampleTypes;
- (void)_callUpdateHandler;
- (id)unitController;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)stopCollectingData;
- (id)displayTypeController;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)textForObject:(id)arg1;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)viewControllerWantsDataIncludingDate:(id)arg1;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (void)customizeTableView:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canEditRowAtIndexPath:(id)arg1;
- (id)queryDateForSelectedDate:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)secondaryTextForObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (void)startCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)viewControllerIsNearEndOfScreen;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)predicateForType:(id)arg1;
- (id)_samplesSortDescriptor;
- (void)_requestNextPageOfData;
- (void)_stopAllQueries;
- (id)_pagingContextForSampleType:(id)arg1;
- (void)_resetAllData;
- (void)_requestNextPageOfDataForSampleType:(id)arg1;
- (id)_defaultPredicateWithPredicateForType:(id)arg1;
- (id)_UUIDsForSamplesWithEndDate:(id)arg1;
- (void)_handleQueryResultsForSampleType:(id)arg1 results:(id)arg2;
- (_Bool)_handleObjectsRemoved:(id)arg1;
- (id)defaultPredicateForSampleType:(id)arg1;
- (id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
- (id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
- (_Bool)shareDocumentUsingSample:(id)arg1;

@end
