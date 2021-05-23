/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

__attribute__((visibility("hidden")))
@interface WDHeartbeatSequenceListDataProvider : WDSampleListDataProvider

- (id)sampleTypes;
- (id)textForObject:(id)arg1;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)secondaryTextForObject:(id)arg1;
- (id)predicateForType:(id)arg1;

@end
