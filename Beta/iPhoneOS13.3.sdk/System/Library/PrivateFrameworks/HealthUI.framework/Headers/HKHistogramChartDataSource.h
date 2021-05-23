/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock, HKHealthStore, HKQuantitySample, HKQuantityType, HKUnit, HKUnitPreferenceController, HKValueRange, NSArray, NSDate, NSPredicate, NSString;

@protocol HKHistogramChartDataSourceDataFetchObserver;

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource

{
    unsigned char _didExecuteQuery;
    id <HKHistogramChartDataSourceDataFetchObserver> _fetchObserver;
    unsigned long long _binningMode;
    unsigned long long _binCalculation;
    unsigned long long _dateBasedBinModeConfig;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitPreferenceController;
    NSString *_quantityIdentifier;
    NSPredicate *_predicate;
    HKGraphSeriesDataBlock *_dataBlock;
    NSDate *_samplesStartDate;
    NSDate *_samplesEndDate;
    HKValueRange *_xAxisRange;
    HKValueRange *_yAxisRange;
    unsigned long long _numberOfBins;
    unsigned long long _binWidth;
    CDUnknownBlockType _dataBlockBuilder;
    CDUnknownBlockType _xAxisStringForLocation;
    HKQuantitySample *_minimumSample;
    HKQuantitySample *_maximumSample;
    NSArray *_quantityValueRanges;
}

@property (nonatomic) unsigned long long binningMode;
@property (nonatomic) unsigned long long binCalculation;
@property (nonatomic) unsigned long long dateBasedBinModeConfig;
@property (nonatomic) unsigned long long numberOfBins;
@property (nonatomic) unsigned long long binWidth;
@property (nonatomic) unsigned char didExecuteQuery;
@property (retain, nonatomic) HKQuantitySample *minimumSample;
@property (retain, nonatomic) HKQuantitySample *maximumSample;
@property (retain, nonatomic) NSArray *quantityValueRanges;
@property (weak, nonatomic) id <HKHistogramChartDataSourceDataFetchObserver> fetchObserver;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic, readonly) NSString *quantityIdentifier;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) HKUnit *unit;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSArray *sortDescriptors;
@property (retain, nonatomic) HKGraphSeriesDataBlock *dataBlock;
@property (retain, nonatomic) NSDate *samplesStartDate;
@property (retain, nonatomic) NSDate *samplesEndDate;
@property (nonatomic, readonly) HKValueRange *xAxisRange;
@property (nonatomic, readonly) HKValueRange *yAxisRange;
@property (copy, nonatomic) CDUnknownBlockType dataBlockBuilder;
@property (copy, nonatomic) CDUnknownBlockType xAxisStringForLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_daysInWeekXValueRange;
+ (id)_hoursInDayXValueRange;

- (id)_query;
- (id)_displayType;
- (void)fetchData;
- (id)_daysOfTheWeek;
- (id)_dayNameFormatter;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binWidth:(double)arg6;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)_initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 xAxisRange:(id)arg5 yAxisRange:(id)arg6 binMode:(unsigned long long)arg7 binCalculation:(unsigned long long)arg8 binWidth:(double)arg9 numberOfBins:(unsigned long long)arg10 dateBasedBinModeConfig:(unsigned long long)arg11;
- (id)_dayXAxisStringForLocation:(id)arg1;
- (id)_hourXAxisStringForLocation:(id)arg1;
- (id)_samplesSortedByQuantity:(id)arg1;
- (id)_buildQuantityValueRangesFromSortedSamples:(id)arg1;
- (id)buildBinsWithSamples:(id)arg1;
- (id)calculateBinValueForBins:(id)arg1 usingCalculation:(unsigned long long)arg2;
- (id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)arg1;
- (id)_dateBasedXValueRangeForConfig:(unsigned long long)arg1;
- (unsigned long long)_binIndexForSample:(id)arg1;
- (id)xAxisStringForLocation:(id)arg1;
- (id)buildGraphSeriesDataBlockFromSamples:(id)arg1;
- (void)didCompleteFetch;
- (unsigned long long)_normalBinIndexForSample:(id)arg1;
- (unsigned long long)_dateBasedBinIndexForSample:(id)arg1;
- (unsigned long long)_dayIndexForDayName:(id)arg1;
- (id)_hourOfTheDayFormatter;
- (id)_dayNameFromDayIndex:(unsigned long long)arg1;
- (id)stringForLocation:(id)arg1;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binCalculation:(unsigned long long)arg6 dateBasedBinModeConfig:(unsigned long long)arg7;
- (id)_hourNameFromHourIndex:(unsigned long long)arg1;

@end
