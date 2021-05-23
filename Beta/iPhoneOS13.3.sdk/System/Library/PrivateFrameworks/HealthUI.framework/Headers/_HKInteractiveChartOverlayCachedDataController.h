/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKGraphSeriesDataSource, HKInteractiveChartOverlayViewController, NSDate, NSString;

@interface _HKInteractiveChartOverlayCachedDataController : NSObject

{
    HKInteractiveChartOverlayViewController *_overlayViewController;
    HKGraphSeriesDataSource *_dataSource;
    long long _timeScope;
    NSDate *_startDate;
    NSDate *_endDate;
    CDUnknownBlockType _completion;
}

@property (weak, nonatomic) HKInteractiveChartOverlayViewController *overlayViewController;
@property (retain, nonatomic) HKGraphSeriesDataSource *dataSource;
@property (nonatomic) long long timeScope;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dataSourceDidUpdateCache:(id)arg1;
- (id)initWithOverlayViewController:(id)arg1 dataSource:(id)arg2 timeScope:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestAndWaitForData;

@end
