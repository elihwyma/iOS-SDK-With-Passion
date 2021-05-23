/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

__attribute__((visibility("hidden")))
@interface WDDocumentListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)arg1;
- (id)sampleTypes;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;

@end
