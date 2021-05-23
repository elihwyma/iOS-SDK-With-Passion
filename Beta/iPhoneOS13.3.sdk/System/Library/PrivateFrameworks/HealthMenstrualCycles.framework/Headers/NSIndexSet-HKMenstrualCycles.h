/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (HKMenstrualCycles)

+ (id)hkmc_indexSetWithDayIndexRange:(CDStruct_912cb5d2)arg1;
+ (id)hkmc_indexSetWithArray:(id)arg1;

- (id)hkmc_indexSetSubtractingIndexes:(id)arg1;
- (void)hkmc_enumerateDayIndexRangesUsingBlock:(CDUnknownBlockType)arg1;

@end
