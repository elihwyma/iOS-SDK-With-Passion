/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@class NSDate, NSMutableArray;

@protocol TRITaskQueuing;

@interface TRIFetchRollbacksTask

{
    NSMutableArray *_nextTasks;
    id <TRITaskQueuing> _taskQueue;
    NSDate *_earliestDate;
}

@property (readonly) NSDate *earliestDate;

+ (id)taskWithQueue:(id)arg1 earliestDate:(id)arg2;
+ (id)taskWithQueue:(id)arg1;

- (id)nextTasksForRunStatus:(int)arg1;
- (int)runTask;
- (id)initWithQueue:(id)arg1 earliestDate:(id)arg2;
- (id)getNextTaskForExperiment:(id)arg1;
- (void)addNextTask:(id)arg1;
- (_Bool)processRollback:(id)arg1;

@end
