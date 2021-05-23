/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthKit/HKHealthStore.h>

@interface HKHealthStore (WDExtensions)

- (void)mostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mostRecentQuantitySampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mostRecentCategorySampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)averageQuantityForType:(id)arg1 unit:(id)arg2 predicate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)calculateBMIWithCompletion:(CDUnknownBlockType)arg1;

@end
