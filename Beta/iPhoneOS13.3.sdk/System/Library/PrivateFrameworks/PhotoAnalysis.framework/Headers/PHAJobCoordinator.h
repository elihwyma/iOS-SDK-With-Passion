/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PHAActivityGovernor, PHADirtyChangeCoalescer, PHAJobCoalescer, PHAJobConstraints, PHAJobConstraintsObserver, PHAJobGenerator, PHAManager, PHAWorkerHealthMonitor, PHAWorkerJob, PHAWorkerWarmer;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, PHAJobCoordinatorDelegate;

@interface PHAJobCoordinator : NSObject <Swift>

{
    _Atomic int _pendingAsyncTasksCount;
    _Atomic unsigned long long _processingQOS;
    _Bool _graphUpdateNeeded;
    NSDictionary *_cachedWorkersByType;
    struct os_unfair_lock_s _workersByTypeLock;
    _Bool _newConstraintsPending;
    _Bool _shouldIgnoreConstraintChanges;
    PHAJobConstraints *_currentConstraints;
    PHAWorkerWarmer *_warmer;
    PHAJobCoalescer *_jobCoalescer;
    PHADirtyChangeCoalescer *_dirtyCoalescer;
    PHAJobConstraintsObserver *_constraintsObserver;
    double _maxIntervalSinceLastJobReport;
    id <PHAJobCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_maintenanceTimer;
    PHAWorkerHealthMonitor *_healthMonitor;
    PHAActivityGovernor *_activityGovernor;
    PHAJobGenerator *_jobGenerator;
    PHAManager *_manager;
    PHAWorkerJob *_currentForegroundJob;
    NSMutableArray *_waitingForegroundJobs;
    PHAWorkerJob *_currentBackgroundJob;
    NSObject<OS_os_transaction> *_runningJobTransaction;
    NSMutableSet *_workerTypesServicedForUserFG;
    NSObject<OS_os_transaction> *_foregroundTransaction;
}

@property (nonatomic, readonly) PHAJobCoalescer *jobCoalescer;
@property (nonatomic, readonly) PHADirtyChangeCoalescer *dirtyCoalescer;
@property (nonatomic, readonly) PHAJobConstraintsObserver *constraintsObserver;
@property (nonatomic) double maxIntervalSinceLastJobReport;
@property (weak, nonatomic) id <PHAJobCoordinatorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *maintenanceTimer;
@property (nonatomic) _Bool newConstraintsPending;
@property (nonatomic) _Bool shouldIgnoreConstraintChanges;
@property (nonatomic, readonly) PHAWorkerHealthMonitor *healthMonitor;
@property (nonatomic, readonly) PHAActivityGovernor *activityGovernor;
@property (nonatomic) _Bool activityGovernorOverride;
@property (nonatomic, readonly) PHAJobGenerator *jobGenerator;
@property (weak, nonatomic) PHAManager *manager;
@property (copy) PHAJobConstraints *currentConstraints;
@property (retain, nonatomic) PHAWorkerJob *currentForegroundJob;
@property (nonatomic, readonly) NSMutableArray *waitingForegroundJobs;
@property (retain, nonatomic) PHAWorkerJob *currentBackgroundJob;
@property (retain, nonatomic) NSObject<OS_os_transaction> *runningJobTransaction;
@property (retain, nonatomic) NSMutableSet *workerTypesServicedForUserFG;
@property (retain, nonatomic) NSObject<OS_os_transaction> *foregroundTransaction;
@property (nonatomic, readonly, getter=isQuiescent) _Bool quiescent;
@property (nonatomic, readonly) PHAWorkerWarmer *warmer;
@property (readonly) _Bool graphUpdateNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)shutdown;
- (id)photoLibrary;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)handleOperation:(id)arg1;
- (id)statusAsDictionary;
- (void)governorDidGrantBackgroundAccess:(id)arg1;
- (void)governorDidRevokeBackgroundAccess:(id)arg1;
- (void)governorDidGrantForegroundAccess:(id)arg1;
- (void)governorDidRevokeForegroundAccess:(id)arg1;
- (void)coalescer:(id)arg1 didCoalesce:(id)arg2;
- (void)didFinishJob:(id)arg1;
- (void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2;
- (id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3;
- (void)_dispatchTransactionAsyncWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (id)_inq_runningJobs;
- (id)_inq_nextForegroundJobCanRunAutomatic:(_Bool)arg1 canRunUserFG:(_Bool)arg2 canRunImmediate:(_Bool)arg3;
- (void)_inq_timeoutJob:(id)arg1;
- (void)_inq_enforceTimeoutForJob:(id)arg1;
- (id)_defaultWorkersByType;
- (void)addWorker:(id)arg1;
- (id)workersByType;
- (id)_workerForJob:(id)arg1;
- (void)_installMaintenanceTimer;
- (void)_cleanupStuckAnalysisState;
- (void)_inq_enqueueForegroundJob:(id)arg1;
- (id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2;
- (void)_scheduleNextJob;
- (void)_inq_launchJob:(id)arg1;
- (void)_inq_handleJobFinished:(id)arg1;
- (void)_inq_handleNoMoreJobsExpected;
- (void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1;
- (void)_inq_stopJobsAfterConstraintOrActivityChange;
- (void)graphManagerWillLoadGraph:(id)arg1;
- (void)graphManagerDidUnloadGraph:(id)arg1;
- (void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1;
- (void)processJobs;
- (void)enqueueForegroundJob:(id)arg1;
- (void)enforceTimeouts;
- (_Bool)_inq_isQuiescent;
- (id)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2;

@end
