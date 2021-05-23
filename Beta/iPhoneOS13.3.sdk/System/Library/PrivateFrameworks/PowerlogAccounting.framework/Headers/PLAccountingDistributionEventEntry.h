/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSDictionary, NSNumber;

@interface PLAccountingDistributionEventEntry : PLAccountingEventEntry

{
    _Bool __distributeRangeWeightedTotal;
    NSDictionary *_childNodeIDToWeight;
}

@property _Bool _distributeRangeWeightedTotal;
@property (nonatomic, readonly) NSNumber *distributionID;
@property (nonatomic, readonly) NSDictionary *childNodeIDToWeight;
@property (nonatomic, readonly) NSDictionary *childNodeNameToWeight;
@property (nonatomic, readonly) _Bool distributeRangeWeightedTotal;

+ (void)load;

- (id)subEntryKey;
- (id)initWithDistributionID:(id)arg1 withChildNodeIDToWeight:(id)arg2 withRange:(id)arg3;
- (int)instanceDirectionality;
- (id)initWithDistributionID:(id)arg1 withChildNodeNameToWeight:(id)arg2 withRange:(id)arg3;
- (_Bool)isEqualContentsWithEvent:(id)arg1;
- (_Bool)isEmptyEvent;

@end
