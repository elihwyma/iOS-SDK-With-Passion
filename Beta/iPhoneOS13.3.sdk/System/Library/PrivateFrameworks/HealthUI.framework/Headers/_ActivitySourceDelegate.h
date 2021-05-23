/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKActivitySummaryDataProvider, HKDisplayTypeController, HKUnitPreferenceController, NSCalendar, NSString;

@protocol HKDateRangeDataUpdateDelegate;

@interface _ActivitySourceDelegate : NSObject

{
    HKActivitySummaryDataProvider *_dataProvider;
    long long _activityValue;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitPreferenceController;
    id <HKDateRangeDataUpdateDelegate> _updateDelegate;
    NSCalendar *_currentCalendar;
}

@property (nonatomic, readonly) HKActivitySummaryDataProvider *dataProvider;
@property (nonatomic, readonly) long long activityValue;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) id <HKDateRangeDataUpdateDelegate> updateDelegate;
@property (nonatomic, readonly) NSCalendar *currentCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)initWithDataProvider:(id)arg1 activityValue:(long long)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4;
- (id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3;
- (id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2;
- (double)_centerOffsetForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3;
- (id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(_Bool)arg8;

@end
