/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSDate, NSMutableArray;

@interface DSCallStatisticsAggregator : NSObject

{
    CDStruct_a0eae414 _totals;
    CDStruct_a0eae414 _accumulated;
    _Bool _futureDateDetected;
    _Bool _outOfOrderDateDetected;
    _Bool _generationComplete;
    _Bool _cancelled;
    NSDate *_referenceDate;
    NSMutableArray *_callLog;
    NSCondition *_generationLock;
    long long _missingDaysRemaining;
}

@property (nonatomic) _Bool futureDateDetected;
@property (nonatomic) _Bool outOfOrderDateDetected;
@property (nonatomic, readonly) NSDate *referenceDate;
@property (retain, nonatomic) NSMutableArray *callLog;
@property (retain, nonatomic) NSCondition *generationLock;
@property (nonatomic) _Bool generationComplete;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (nonatomic) long long missingDaysRemaining;

- (id)init;
- (void)cancel;
- (id)_getAndValidateDateFromLogLine:(id)arg1;
- (long long)_getDaysBetween:(id)arg1 and:(id)arg2;
- (void)_flushAccumulatedLogDataWithDate:(id)arg1;
- (void)_fillCallLogWithMissingDays:(long long)arg1 fromDate:(id)arg2;
- (_Bool)_isDateInRange:(id)arg1;
- (void)_resetAccumulator;
- (void)beginAggregation;
- (id)getSynchronousResult;

@end
