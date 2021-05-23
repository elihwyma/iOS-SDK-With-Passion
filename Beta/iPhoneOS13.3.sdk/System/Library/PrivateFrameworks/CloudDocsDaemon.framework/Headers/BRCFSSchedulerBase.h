/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCAccountSession, BRCDeadlineSource, NSString, PQLNameInjection;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFSSchedulerBase : NSObject <Swift>

{
    BRCAccountSession *_session;
    BRCDeadlineSource *_schedulerSource;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSString *_name;
    _Bool _firstSchedulingAfterStartupDone;
    _Bool _hasActiveWork;
    _Bool _hasWork;
    _Bool _isCancelled;
    NSObject<OS_dispatch_group> *_hasWorkGroup;
    PQLNameInjection *_tableName;
}

@property (nonatomic) _Bool hasWork;
@property (nonatomic) _Bool hasActiveWork;
@property (retain) NSObject<OS_dispatch_group> *hasWorkGroup;
@property (readonly) PQLNameInjection *tableName;
@property (readonly) NSString *name;
@property (readonly) _Bool closed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)close;
- (void)cancel;
- (void)resume;
- (void)signal;
- (void)suspend;
- (void)schedule;
- (void)_close;
- (id)descriptionForJobsMatching:(id)arg1 ordering:(id)arg2 additionalColumns:(id)arg3 additionalValuesHandler:(CDUnknownBlockType)arg4 context:(id)arg5;
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;
- (void)computeStamps:(struct throttle_stamps *)arg1 forJobID:(id)arg2 throttle:(id)arg3 shouldBackoff:(_Bool)arg4;
- (void)signalWithDeadline:(long long)arg1;
- (long long)updateStamps:(struct throttle_stamps *)arg1 throttle:(id)arg2 now:(long long)arg3;
- (_Bool)setState:(int)arg1 forJobsMatching:(id)arg2;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (_Bool)canScheduleMoreJobs;
- (id)initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
- (_Bool)canRetryJobWithID:(id)arg1;
- (_Bool)haveActiveJobsMatching:(id)arg1;
- (int)jobStateFor:(id)arg1;
- (id)descriptionForJobsMatching:(id)arg1 context:(id)arg2;
- (id)aggregateDescriptionForJobsMatching:(id)arg1 context:(id)arg2;
- (unsigned long long)postponeJobID:(id)arg1 withThrottle:(id)arg2;
- (struct brc_job_update)insertOrUpdateJobID:(id)arg1 throttle:(id)arg2 withState:(int)arg3 insertedSQLColumn:(id)arg4 insertedSQLValues:(id)arg5 updatedSQLValues:(id)arg6;
- (void)rescheduleSuspendedJobsMatching:(id)arg1 inState:(int)arg2;
- (_Bool)setState:(int)arg1 forJobID:(id)arg2;
- (void)deleteJobsMatching:(id)arg1;
- (void)resetBackoffForJobWithID:(id)arg1;
- (void)deleteExpiredJobs;
- (void)scheduleWithBatchSize:(int)arg1 whereSQLClause:(struct NSObject *)arg2 columns:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;

@end
