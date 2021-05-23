/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

__attribute__((visibility("hidden")))
@interface WDAudioExposureEventListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)arg1;
- (id)sampleTypes;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;

@end
