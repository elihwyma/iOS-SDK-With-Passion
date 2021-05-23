/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKHorizontalSingleLineSeries;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController

{
    HKHorizontalSingleLineSeries *_appointmentSeries;
}

@property (nonatomic, readonly) HKHorizontalSingleLineSeries *appointmentSeries;

- (void)setColor:(id)arg1;
- (id)_parseSpecifications:(id)arg1;
- (id)initWithAppointments:(id)arg1 profile:(id)arg2 color:(id)arg3;
- (id)initWithSpecifications:(id)arg1 profile:(id)arg2 color:(id)arg3;

@end
