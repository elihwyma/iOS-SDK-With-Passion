/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKActivitySummaryDataProvider, HKDisplayCategory, HKDisplayType, HKUnitPreferenceController, HKValueDataProvider, NSAttributedString, NSDate, NSDictionary, NSString, WDProfile;

@protocol WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate;

__attribute__((visibility("hidden")))
@interface WDDashboardChartItem : NSObject

{
    NSDictionary *_dataPoints;
    _Bool _isActive;
    HKUnitPreferenceController *_unitController;
    WDProfile *_profile;
    HKValueDataProvider *_currentValueDataProvider;
    HKValueDataProvider *_secondaryValueDataProvider;
    HKActivitySummaryDataProvider *_activitySummaryProvider;
    _Bool _localeDidChange;
    HKDisplayType *_displayType;
    id <WDDashboardCellPrimaryValueSourceDelegate> _primaryValueSourceDelegate;
    id <WDDashboardCellSecondaryValueSourceDelegate> _secondaryValueSourceDelegate;
    HKDisplayCategory *_displayCategory;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _timeScope;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic, readonly) HKDisplayCategory *displayCategory;
@property (nonatomic, readonly) NSString *primaryValueContextualText;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (weak, nonatomic) id <WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;
@property (nonatomic, readonly) NSAttributedString *secondaryValue;
@property (nonatomic, readonly) long long timeScope;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) HKActivitySummaryDataProvider *activitySummaryProvider;
@property (nonatomic) _Bool localeDidChange;

- (id)init;
- (void)dealloc;
- (id)initWithDisplayType:(id)arg1 useAlternateCurrentValue:(_Bool)arg2 displayCategory:(id)arg3 profile:(id)arg4 healthStore:(id)arg5;
- (void)dataProviderDidUpdateValues:(id)arg1;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;
- (_Bool)shouldHideAverageLineForTimeScope:(long long)arg1;
- (_Bool)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1;
- (void)invalidateChart;
- (struct UIEdgeInsets)_chartInsetsForTimeScope:(long long)arg1;

@end
