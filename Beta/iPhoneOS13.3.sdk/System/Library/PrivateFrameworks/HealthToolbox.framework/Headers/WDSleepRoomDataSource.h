/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKChartCache, HKSleepAnalysis, HKSleepAnalysisDataSource, HKUnitPreferenceController, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDSleepRoomDataSource : NSObject

{
    HKUnitPreferenceController *_unitController;
    WDProfile *_profile;
    unsigned long long _selectedContext;
    HKSleepAnalysisDataSource *_sleepAnalysisDataSource;
    HKChartCache *_chartCache;
    HKSleepAnalysis *_sleepAnalysis;
}

@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) WDProfile *profile;
@property (nonatomic) unsigned long long selectedContext;
@property (retain, nonatomic) HKSleepAnalysisDataSource *sleepAnalysisDataSource;
@property (retain, nonatomic) HKChartCache *chartCache;
@property (retain, nonatomic) HKSleepAnalysis *sleepAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)availableContextTypes;
+ (id)sleepContextItemForContextType:(unsigned long long)arg1 timeScope:(long long)arg2 sleepAnalysis:(id)arg3;
+ (id)valueLabelFont;
+ (id)unitLabelFont;
+ (id)contextItemsForTimeScope:(long long)arg1 sleepAnalysis:(id)arg2;
+ (id)detailViewForContextType:(unsigned long long)arg1 valueRange:(id)arg2 sleepAnalysis:(id)arg3;

- (id)initWithProfile:(id)arg1;
- (id)_durationFormatter;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (id)durationDisplayType;
- (id)efficiencyDisplayType;
- (id)consistencyDisplayType;
- (id)displayTypesForContext:(unsigned long long)arg1;
- (void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)_generateDurationSeries;
- (id)_goalLineStrokeStyle;
- (id)_genericAsleepInbedLegends;
- (id)_generateDailyTimePeriodSeriesWithLegendEntries:(id)arg1;
- (id)_inBedColor;
- (id)_asleepColor;
- (id)_lessSaturatedColorWithColor:(id)arg1;
- (id)_asleepGradientColors;
- (id)_inbedGradientColors;
- (void)startObservingHealthStore;
- (id)displayTypesForSelectedContext;
- (unsigned long long)selectContextAtIndex:(long long)arg1;
- (id)_countFormatter;

@end
