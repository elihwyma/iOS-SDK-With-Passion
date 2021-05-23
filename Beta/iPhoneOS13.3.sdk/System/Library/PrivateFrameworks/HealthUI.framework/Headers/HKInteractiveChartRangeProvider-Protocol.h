/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@class HKValueRange;

@protocol HKInteractiveChartRangeProvider

@property (nonatomic, readonly) HKValueRange *actualVisibleRange;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeCadence;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeActive;

@end
