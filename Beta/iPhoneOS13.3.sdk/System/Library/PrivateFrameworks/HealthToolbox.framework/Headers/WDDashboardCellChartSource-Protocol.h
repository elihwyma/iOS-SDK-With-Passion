/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class HKActivitySummaryDataProvider;

@protocol WDDashboardCellChartSource

@property (nonatomic, readonly) HKActivitySummaryDataProvider *activitySummaryProvider;
@property (nonatomic) _Bool localeDidChange;

- (unsigned short)shouldHideAverageLineForTimeScope: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldHideMinMaxOnBackgroundForTimeScope: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateChart;

@end
