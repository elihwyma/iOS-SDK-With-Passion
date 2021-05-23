/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TADisplayOnCalculator : NSObject

{
    _Bool _useBudget;
    double _budgetRemaining;
    NSDate *_startTime;
    NSDate *_evaluatedUntil;
}

@property (nonatomic, readonly) NSDate *evaluatedUntil;

- (void)completeDisplayOnWithEndDate:(id)arg1;
- (id)initWithStartTime:(id)arg1;
- (double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3;
- (id)initWithStartTime:(id)arg1 budget:(double)arg2;

@end
