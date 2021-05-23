/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContext.h>

@class HKInteractiveChartOverlayPredicate, NSDictionary;

@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext

{
    long long _distributionStyle;
    long long _options;
    HKInteractiveChartOverlayPredicate *_namedPredicate;
    NSDictionary *_styleToMetricColors;
}

@property (nonatomic) long long distributionStyle;
@property (nonatomic) long long options;
@property (retain, nonatomic) HKInteractiveChartOverlayPredicate *namedPredicate;
@property (retain, nonatomic) NSDictionary *styleToMetricColors;

- (_Bool)isEqual:(id)arg1;
- (id)_representativeDisplayTypeForStyle:(long long)arg1;
- (id)representativeDisplayType;
- (id)_computeTitleFromStyleAndPredicate;
- (id)_selectedMetricColorsForDistributionStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 options:(long long)arg5 mode:(long long)arg6;
- (id)buildContextItemWithValue:(id)arg1 valueContext:(id)arg2 forTimeScope:(long long)arg3;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
