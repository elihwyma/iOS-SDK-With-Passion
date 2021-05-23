/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDataMetadataDetailSection, HKInteractiveChartViewController, HKValueRange, NSString;

__attribute__((visibility("hidden")))
@interface WDFixedChartViewController : HKTableViewController

{
    HKValueRange *_fixedRange;
    HKInteractiveChartViewController *_chartController;
    HKDataMetadataDetailSection *_metadataSection;
}

@property (nonatomic, readonly) HKValueRange *fixedRange;
@property (nonatomic, readonly) HKInteractiveChartViewController *chartController;
@property (nonatomic, readonly) HKDataMetadataDetailSection *metadataSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)cellForChart;
- (id)initWithInteractiveChartViewController:(id)arg1 sessionSample:(id)arg2 profile:(id)arg3 title:(id)arg4;

@end
