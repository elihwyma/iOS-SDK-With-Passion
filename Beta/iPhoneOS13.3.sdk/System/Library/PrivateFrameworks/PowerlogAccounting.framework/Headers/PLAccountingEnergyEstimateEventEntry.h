/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingEnergyEventEntry.h>

@class NSDate, NSNumber;

@interface PLAccountingEnergyEstimateEventEntry : PLAccountingEnergyEventEntry

{
    _Bool _isRootNodeEnergyAggregated;
}

@property (nonatomic, readonly) NSNumber *rootNodeID;
@property (nonatomic, readonly) int parentEntryID;
@property (nonatomic, readonly) int numAncestors;
@property (nonatomic, readonly) NSNumber *distributionRuleID;
@property (nonatomic, readonly) NSNumber *qualificationRuleIDSum;
@property (nonatomic) double correctionEnergy;
@property (nonatomic) double terminationRatio;
@property (retain, nonatomic) NSDate *distributionDate;
@property (retain, nonatomic) NSDate *correctionDate;
@property (retain, nonatomic) NSDate *qualificationDate;
@property _Bool isRootNodeEnergyAggregated;

+ (void)load;
+ (id)entryKey;

- (id)initWithNodeID:(id)arg1 withRootNodeID:(id)arg2 withParentEntryID:(int)arg3 withNumAncestors:(int)arg4 withEnergy:(double)arg5 withRange:(id)arg6 withEntryDate:(id)arg7;

@end
