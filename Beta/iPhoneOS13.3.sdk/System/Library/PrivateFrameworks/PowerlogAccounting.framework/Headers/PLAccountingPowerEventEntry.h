/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSNumber;

@interface PLAccountingPowerEventEntry : PLAccountingEventEntry

@property (nonatomic, readonly) NSNumber *rootNodeID;
@property (nonatomic, readonly) double power;

+ (void)load;
+ (_Bool)isValidPower:(double)arg1 forRootNodeID:(id)arg2;
+ (double)minPowerDifference;
+ (double)minPowerPercentageDifference;

- (id)subEntryKey;
- (int)instanceDirectionality;
- (_Bool)isEqualContentsWithEvent:(id)arg1;
- (_Bool)isEmptyEvent;
- (id)initWithRootNodeID:(id)arg1 withPower:(double)arg2 withRange:(id)arg3;

@end
