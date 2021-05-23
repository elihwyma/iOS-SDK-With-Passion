/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKChartDataCacheController, HKDateCache, HKDisplayCategoryController, HKDisplayTypeController, HKHealthStore, HKSampleTypeDateRangeController, HKSampleTypeUpdateController, HKSelectedTimeScopeController, HKUnitPreferenceController;

@interface HKOverlayRoomApplicationItems : NSObject

{
    HKHealthStore *_healthStore;
    HKSelectedTimeScopeController *_timeScopeController;
    HKDateCache *_dateCache;
    HKUnitPreferenceController *_unitController;
    HKChartDataCacheController *_chartDataCacheController;
    HKSampleTypeUpdateController *_sampleTypeUpdateController;
    HKSampleTypeDateRangeController *_sampleDateRangeController;
    HKDisplayTypeController *_displayTypeController;
    HKDisplayCategoryController *_categoryController;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSelectedTimeScopeController *timeScopeController;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) HKChartDataCacheController *chartDataCacheController;
@property (retain, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (retain, nonatomic) HKSampleTypeDateRangeController *sampleDateRangeController;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKDisplayCategoryController *categoryController;

@end
