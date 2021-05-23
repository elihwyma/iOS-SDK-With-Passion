/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject

{
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
    id <WBSCloudKitThrottlerDataStore> _dataStore;
}

@property (weak, nonatomic) id <WBSCloudKitThrottlerDataStore> dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (_Bool)policyStringRepresentsValidPolicy:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithPolicyString:(id)arg1;
- (void)setPolicyString:(id)arg1;
- (void)_loadRecordOfPastOperations;
- (void)_pruneExpiredOrInvalidOperations;
- (id)dateOfNextPermittedOperationWithPriority:(long long)arg1;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (void)_addOperationAtDate:(id)arg1;
- (void)_saveRecordOfPastOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (_Bool)_loadDistributionConfiguration:(id)arg1;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_minimumTimeBetweenOperationsForOperations:(id)arg1;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)arg1;
- (_Bool)permitsOperationWithPriority:(long long)arg1;
- (void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2;
- (_Bool)_throttlerIsActive;
- (void)reloadRecordOfPastOperations;
- (double)_test_numberOfSecondsToMonitor;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;

@end
