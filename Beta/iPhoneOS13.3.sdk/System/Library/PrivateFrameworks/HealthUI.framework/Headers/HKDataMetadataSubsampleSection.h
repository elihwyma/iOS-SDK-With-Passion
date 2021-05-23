/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class HKDisplayTypeController, HKHealthStore, HKSample, HKUnitPreferenceController, NSArray, NSMutableDictionary;

@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataSubsampleSection : HKDataMetadataSection

{
    HKSample *_sample;
    NSArray *_subSampleTypes;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKDataMetadataSubsampleDelegate> _subsampleDelegate;
    NSMutableDictionary *_aggregationValue;
}

@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) NSArray *subSampleTypes;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (nonatomic, readonly) id <HKDataMetadataSubsampleDelegate> subsampleDelegate;
@property (retain, nonatomic) NSMutableDictionary *aggregationValue;

- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithSample:(id)arg1 subSampleTypes:(id)arg2 healthStore:(id)arg3 displayTypeController:(id)arg4 unitController:(id)arg5 subsampleDelegate:(id)arg6;
- (id)_mergeTypesForFixedValues:(id)arg1 subSampleTypes:(id)arg2;
- (void)_submitSubSampleAggregateQueriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_subSampleAggregatePredicate:(id)arg1;
- (id)_formattedValueWithUnits:(id)arg1 sampleType:(id)arg2;
- (void)_updateAggregateValue:(id)arg1 sampleType:(id)arg2 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg3;
- (void)_submitSumAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitAverageAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitSingleValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitCountStandHourQueryForSampleType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (id)_trimAndSortSampleTypes:(id)arg1;

@end
