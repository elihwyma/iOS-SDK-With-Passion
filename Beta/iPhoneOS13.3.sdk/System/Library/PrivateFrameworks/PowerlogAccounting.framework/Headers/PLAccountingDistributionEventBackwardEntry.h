/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingDistributionEventEntry.h>

@interface PLAccountingDistributionEventBackwardEntry : PLAccountingDistributionEventEntry

+ (void)load;
+ (id)entryKey;
+ (int)classDirectionality;

- (id)initWithDistributionID:(id)arg1 withChildNodeNameToWeight:(id)arg2 withEndDate:(id)arg3;

@end
