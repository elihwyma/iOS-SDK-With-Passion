/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingPowerEventEntry.h>

@interface PLAccountingPowerEventForwardEntry : PLAccountingPowerEventEntry

+ (void)load;
+ (id)entryKey;
+ (int)classDirectionality;

- (_Bool)canMergeWithEvent:(id)arg1;
- (id)initWithRootNodeID:(id)arg1 withPower:(double)arg2 withStartDate:(id)arg3;

@end
