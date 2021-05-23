/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, _DKPredictionTimeline;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, _DASBudgetPersisting;

@interface _DASBudgetModulator : NSObject

{
    id <_DASBudgetPersisting> _persistence;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastModulationDate;
    NSDate *_lastUsageTimelineUpdate;
    NSArray *_budgets;
    NSObject<OS_dispatch_source> *_timer;
    _DKPredictionTimeline *_usage;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) id <_DASBudgetPersisting> persistence;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastModulationDate;
@property (retain, nonatomic) NSDate *lastUsageTimelineUpdate;
@property (retain, nonatomic) NSArray *budgets;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) _DKPredictionTimeline *usage;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)modulatorWithBudgets:(id)arg1 persistence:(id)arg2;

- (void)_queue_modulateBudgets;
- (id)initWithBudgets:(id)arg1 persistence:(id)arg2;
- (int)numberOfModulationFromDate:(id)arg1 toDate:(id)arg2;
- (id)usageTimeline;
- (double)relativeUsageAtDate:(id)arg1 withTimeline:(id)arg2;
- (void)updateCapacity:(double)arg1 forBudgetWithName:(id)arg2;

@end
