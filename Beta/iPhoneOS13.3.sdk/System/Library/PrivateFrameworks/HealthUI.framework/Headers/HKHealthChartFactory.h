/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKChartDataCacheController, HKDateCache, HKDisplayCategoryController, HKDisplayTypeController, HKHealthStore, HKSampleTypeDateRangeController, HKSampleTypeUpdateController, HKSelectedTimeScopeController, HKUnitPreferenceController, NSDictionary, _HKWheelchairUseCharacteristicCache;

@interface HKHealthChartFactory : NSObject

{
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitPreferenceController;
    HKDisplayCategoryController *_displayCategoryController;
    HKChartDataCacheController *_chartDataCacheController;
    HKSampleTypeUpdateController *_sampleTypeUpdateController;
    HKDateCache *_dateCache;
    HKSelectedTimeScopeController *_selectedTimeScopeController;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    HKSampleTypeDateRangeController *_sampleTypeDateRangeController;
    NSDictionary *_identifierToDisplayTypeMapping;
}

@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic, readonly) HKDisplayCategoryController *displayCategoryController;
@property (nonatomic, readonly) HKChartDataCacheController *chartDataCacheController;
@property (nonatomic, readonly) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (nonatomic, readonly) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (nonatomic, readonly) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (retain, nonatomic) NSDictionary *identifierToDisplayTypeMapping;
@property (nonatomic, readonly) HKHealthStore *healthStore;

+ (id)_standardIdentifierMappings;

- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)CHRRoomApplicationItems;
- (id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(struct CGSize)arg3 disableXAxis:(_Bool)arg4;
- (id)interactiveChartForTypeIdentifier:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDateInterval:(id)arg3;
- (id)activityChartForDisplayDate:(id)arg1;
- (id)_mapTypeIdentifierToDisplayType:(id)arg1;
- (long long)_resolvedTimeScopeForTypeIdentifier:(id)arg1 displayDateInterval:(id)arg2;
- (id)_customTypeIdentifierController:(id)arg1 displayDate:(id)arg2 secondaryIdentifier:(id)arg3;
- (id)_displayTypeForTypeIdentifier:(id)arg1;
- (id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(struct CGSize)arg3;

@end
