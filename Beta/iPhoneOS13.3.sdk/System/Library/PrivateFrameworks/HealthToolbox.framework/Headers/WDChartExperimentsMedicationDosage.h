/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsMedicationDosage : HKInteractiveChartViewController

{
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;

- (id)_parseDoseSpecifications:(id)arg1;
- (id)initMedicationName:(id)arg1 dosages:(id)arg2 profile:(id)arg3 color:(id)arg4;
- (id)initMedicationName:(id)arg1 specifications:(id)arg2 profile:(id)arg3 color:(id)arg4;

@end
