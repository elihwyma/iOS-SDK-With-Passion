/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKUnitPreferenceController, NSMutableArray, NSMutableSet, NSPredicate, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDSampleListStatisticsDataProvider : NSObject

{
    _Bool _hasCompleteDataSet;
    NSPredicate *defaultQueryPredicate;
    NSMutableArray *_data;
    NSMutableArray *_activeDataQueries;
    NSMutableSet *_activeQueryTypes;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKUnitPreferenceController *_unitController;
}

@property (retain) NSMutableArray *data;
@property (retain, nonatomic) NSMutableArray *activeDataQueries;
@property (retain, nonatomic) NSMutableSet *activeQueryTypes;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) NSPredicate *defaultQueryPredicate;
@property _Bool hasCompleteDataSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long cellStyle;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) _Bool textAdjustsFontSizeToFitWidth;
@property (nonatomic, readonly) double customCellHeight;
@property (nonatomic, readonly) double customEstimatedCellHeight;
@property (readonly) _Bool calendarDateSelectorVisible;

- (id)titleForSection:(unsigned long long)arg1;
- (void)deleteAllData;
- (id)sampleTypes;
- (void)stopCollectingData;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)textForObject:(id)arg1;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (void)customizeTableView:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)secondaryTextForObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (void)startCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)viewControllerIsNearEndOfScreen;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)_predicateForTheLastMonth;
- (unsigned long long)_statisticsOptionsForSampleType:(id)arg1;
- (void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(_Bool)arg4 withError:(id)arg5 updateHandler:(CDUnknownBlockType)arg6;
- (void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)_statisticsAtIndexPath:(id)arg1;

@end
