/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationEventListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)sampleTypes;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
