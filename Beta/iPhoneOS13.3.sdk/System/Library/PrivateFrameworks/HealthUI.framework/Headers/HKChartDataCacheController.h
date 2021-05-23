/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKActivitySummaryDataProvider, HKHealthStore, HKSampleTypeUpdateController, HKUnitPreferenceController, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface HKChartDataCacheController : NSObject

{
    NSArray *_chartCachesByTimeScopeAndDisplayTypeIdentifier;
    struct NSMutableDictionary *_chartCachesByDisplayTypeIdentifier;
    NSMutableArray *_chartCachesByCustomDisplayType;
    NSMutableDictionary *_currentValueDataProvidersByDisplayType;
    NSMutableDictionary *_alternateCurrentValueDataProvidersByDisplayType;
    NSMutableDictionary *_secondaryValueDataProviders;
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;
    HKSampleTypeUpdateController *_updateController;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitController;
}

@property (retain, nonatomic) HKSampleTypeUpdateController *updateController;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (id)initWithHealthStore:(id)arg1 unitController:(id)arg2 updateController:(id)arg3;
- (id)activitySummaryDataProviderWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)alternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)currentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (void)addCustomChartCache:(id)arg1 forDisplayType:(id)arg2;
- (id)interactiveChartsCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (id)_timeScopeBasedChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (id)_chartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 chartCachesByDisplayTypeIdentifier:(struct NSMutableDictionary *)arg3;
- (id)_generateChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (void)_subscribeForUpdatesForDisplayType:(id)arg1;
- (id)_chartCacheIdentifiersFromSamples:(id)arg1;
- (id)allInteractiveChartsCaches;
- (id)_chartCacheIdentifiersFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_createCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;

@end
