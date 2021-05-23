/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDHealthDataCategoryViewController.h>

@class HKHeartRateQueryUtility, NSArray, NSDate, NSDateInterval, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface WDHeartRoomViewController : WDHealthDataCategoryViewController

{
    long long _preferredSelectedContext;
    NSArray *_heartRateContextResults;
    NSArray *_heartRateContextItems;
    HKHeartRateQueryUtility *_heartRateQueryUtility;
    NSUUID *_heartRateQueryUUID;
    long long _currentHeartChartTimeScope;
    NSDateInterval *_currentHeartChartDateInterval;
    long long _currentSelectedContextIndex;
    NSDate *_displayDate;
}

@property (retain, nonatomic) NSArray *heartRateContextResults;
@property (nonatomic, readonly) NSArray *defaultHeartRateContextResults;
@property (retain, nonatomic) NSArray *heartRateContextItems;
@property (retain, nonatomic) HKHeartRateQueryUtility *heartRateQueryUtility;
@property (copy, nonatomic) NSUUID *heartRateQueryUUID;
@property (nonatomic) long long currentHeartChartTimeScope;
@property (copy, nonatomic) NSDateInterval *currentHeartChartDateInterval;
@property (nonatomic) long long currentSelectedContextIndex;
@property (copy, nonatomic) NSDate *displayDate;
@property (nonatomic) long long preferredSelectedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithProfile:(id)arg1 displayDate:(id)arg2;
- (_Bool)_shouldShowChartSection;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(struct NSDictionary *)arg2;
- (void)_showChartRowIfNecessary;
- (id)contextItemsFromDisplayTypeContextResults:(id)arg1;
- (void)setupHeartChartViewController;
- (void)applyPreferredDisplayType;
- (void)updateChartForCurrentlySelectedOverlay;
- (id)_chartedHeartRateTypes;
- (id)quantityTypeIdentifierForHeartRateContext:(long long)arg1;
- (long long)distributionStyleForHeartRateContext:(long long)arg1;
- (_Bool)infoButtonHiddenForTimeScope:(long long)arg1 contextResult:(id)arg2;
- (id)titleForDisplayTypeContextResult:(id)arg1;
- (id)valueForDisplayTypeContextResult:(id)arg1;
- (id)dateStringForContextResult:(id)arg1;
- (id)_displayTypeForContext:(long long)arg1;
- (void)pushControllerForSessionType:(long long)arg1 title:(id)arg2;
- (void)selectContextItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_allContextSampleTypes;
- (void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;
- (void)dataForHeartRateContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(CDUnknownBlockType)arg4;

@end
