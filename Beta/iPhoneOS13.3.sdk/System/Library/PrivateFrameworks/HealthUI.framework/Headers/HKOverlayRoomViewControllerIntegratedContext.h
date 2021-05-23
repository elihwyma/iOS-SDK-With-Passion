/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController, HKOverlayRoomApplicationItems, HKSampleType, NSMutableDictionary, NSString;

@interface HKOverlayRoomViewControllerIntegratedContext : NSObject

{
    long long _overlayMode;
    HKInteractiveChartOverlayViewController *_overlayChartController;
    HKOverlayRoomApplicationItems *_applicationItems;
    HKSampleType *_monitoringSampleType;
    NSMutableDictionary *_displayTypesForTimeScopes;
    HKDisplayTypeContextItem *_lastUpdatedContextItem;
}

@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (retain, nonatomic) HKSampleType *monitoringSampleType;
@property (retain, nonatomic) NSMutableDictionary *displayTypesForTimeScopes;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (nonatomic) long long overlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)distributionContextWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 options:(long long)arg5 mode:(long long)arg6;
+ (id)quantityContextWithIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6;

- (id)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)representativeDisplayType;
- (id)buildContextItemWithValue:(id)arg1 valueContext:(id)arg2 forTimeScope:(long long)arg3;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)_minMaxValueFromChartPoints:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3;
- (id)_buildMonitoringSampleType;
- (_Bool)_obsoleteDateRange:(id)arg1;

@end
