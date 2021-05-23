/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingRuleEntry.h>

@class NSNumber;

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (nonatomic, readonly) NSNumber *rootNodeID;
@property (nonatomic, readonly) NSNumber *qualificationID;

+ (void)load;
+ (id)entryKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRootNodeID:(id)arg1 withQualificationID:(id)arg2 withEntryDate:(id)arg3;

@end
