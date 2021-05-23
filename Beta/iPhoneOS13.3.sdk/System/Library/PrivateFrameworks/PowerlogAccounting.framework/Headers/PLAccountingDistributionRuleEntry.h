/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingRuleEntry.h>

@class NSNumber;

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (nonatomic, readonly) NSNumber *nodeID;
@property (nonatomic, readonly) NSNumber *rootNodeID;
@property (nonatomic, readonly) NSNumber *distributionID;

+ (void)load;
+ (id)entryKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNodeID:(id)arg1 withRootNodeID:(id)arg2 withDistributionID:(id)arg3 withEntryDate:(id)arg4;

@end
