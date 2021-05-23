/*
 Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
 */

#import <Foundation/NSObject.h>

@class HKQuantity, HKQuantityType, NSArray, NSDate;

@interface FITrailingQuantityTimeSlice : NSObject

{
    NSArray *_uncommittedSamples;
    NSArray *_committedSamples;
    NSDate *_lastCommitDate;
    _Bool _finalized;
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_committedTotal;
}

@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *committedSamples;
@property (nonatomic, readonly) _Bool finalized;
@property (nonatomic, readonly) HKQuantity *committedTotal;
@property (nonatomic, readonly) double committedDuration;
@property (nonatomic, readonly) HKQuantity *committedAndAddedTotal;

- (id)description;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 committedSamples:(id)arg4 uncommittedSamples:(id)arg5 lastCommitDate:(id)arg6 committedTotal:(id)arg7 finalized:(_Bool)arg8;
- (id)autoCommitDateForSamples:(id)arg1;
- (id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 toPreviousCommittedSamples:(id)arg3 untilDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6;
- (id)committingUntilDate:(id)arg1;
- (id)settingStartDate:(id)arg1;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2;
- (double)activeDurationUntilDate:(id)arg1;
- (id)addingSample:(id)arg1 error:(id *)arg2;
- (id)addingSamples:(id)arg1 error:(id *)arg2;
- (id)settingEndDate:(id)arg1;
- (id)settingTotalQuantityLimit:(id)arg1;
- (id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end
