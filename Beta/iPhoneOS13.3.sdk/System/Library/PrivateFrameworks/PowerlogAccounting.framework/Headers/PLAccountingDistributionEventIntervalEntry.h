/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingDistributionEventEntry.h>

@interface PLAccountingDistributionEventIntervalEntry : PLAccountingDistributionEventEntry

+ (void)load;
+ (id)entryKey;
+ (int)classDirectionality;

- (id)initWithDistributionID:(id)arg1 withChildNodeIDToWeight:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (id)initWithDistributionID:(id)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;

@end
