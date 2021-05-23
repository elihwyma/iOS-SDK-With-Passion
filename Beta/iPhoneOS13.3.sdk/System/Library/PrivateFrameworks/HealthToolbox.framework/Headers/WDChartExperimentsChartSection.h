/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDTableViewSection.h>

@class HKHealthChartFactory, HKHeartbeatSequenceChartViewController, HKInteractiveChartOverlayViewController, NSMutableArray, WDActivityQueryTestController;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsChartSection : WDTableViewSection

{
    NSMutableArray *_viewControllers;
    HKHeartbeatSequenceChartViewController *_heartbeatSequenceForUpdate;
    HKInteractiveChartOverlayViewController *_heartRateController;
    WDActivityQueryTestController *_activityQueryTestController;
    HKHealthChartFactory *_healthChartFactory;
}

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (retain, nonatomic) HKHeartbeatSequenceChartViewController *heartbeatSequenceForUpdate;
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *heartRateController;
@property (retain, nonatomic) WDActivityQueryTestController *activityQueryTestController;
@property (retain, nonatomic) HKHealthChartFactory *healthChartFactory;

- (id)_dateFormatter;
- (unsigned long long)numberOfRows;
- (id)titleForHeader;
- (void)setUpWithTableViewController:(id)arg1;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (id)_buildHeartSequenceDataFromString:(id)arg1;
- (id)_localDateFromString:(id)arg1;
- (void)updateTachogram:(id)arg1;
- (id)_audiogramSampleForDate:(id)arg1 sensitivityData:(id)arg2;
- (void)activityQueryTest:(id)arg1;

@end
