/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingDistributionEventEntry.h>

@interface PLAccountingDistributionEventForwardEntry : PLAccountingDistributionEventEntry

+ (void)load;
+ (id)entryKey;
+ (int)classDirectionality;

- (id)initWithDistributionID:(id)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3;

@end
