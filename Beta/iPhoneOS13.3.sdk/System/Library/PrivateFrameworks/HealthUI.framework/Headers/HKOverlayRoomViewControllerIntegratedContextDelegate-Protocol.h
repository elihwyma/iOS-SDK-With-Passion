/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/Swift-Protocol.h>

@class HKInteractiveChartOverlayNamedDataSource, HKLineSeries;

@protocol HKOverlayRoomViewControllerIntegratedContextDelegate <Swift>

@property (nonatomic, readonly) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (nonatomic, readonly) HKLineSeries *alternateLineSeries;

@end
