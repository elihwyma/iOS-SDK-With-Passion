/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogCore/PLEntry.h>

@class NSNumber, PLAccountingRange;

@interface PLAccountingEnergyEventEntry : PLEntry

{
    PLAccountingRange *_range;
}

@property (nonatomic, readonly) NSNumber *nodeID;
@property (nonatomic, readonly) double energy;
@property (nonatomic, readonly) PLAccountingRange *range;

+ (void)load;
+ (id)entryKey;

- (id)initWithNodeID:(id)arg1 withEnergy:(double)arg2 withRange:(id)arg3 withEntryDate:(id)arg4;

@end
