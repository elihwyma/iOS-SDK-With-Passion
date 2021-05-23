/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSConditionLock, NSDate, NSObject, NSString, PHAGraphManager;

@protocol OS_os_transaction;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob

{
    _Bool _finished;
    _Bool _isChangeProcessingJob;
    float _completionScore;
    long long _originalExecutionContext;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    NSString *_label;
    NSDate *_creationDate;
    NSObject<OS_os_transaction> *_transaction;
    PHAGraphManager *_graphManager;
    id _pgManager;
    NSConditionLock *_completionWaitLock;
}

@property (nonatomic) _Bool finished;
@property (nonatomic) float completionScore;
@property (copy) NSString *label;
@property (retain) NSDate *creationDate;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) PHAGraphManager *graphManager;
@property (retain) id pgManager;
@property (nonatomic) long long originalExecutionContext;
@property (retain) NSConditionLock *completionWaitLock;
@property (copy) CDUnknownBlockType updateBlock;
@property (copy) CDUnknownBlockType completionBlock;
@property _Bool isChangeProcessingJob;
@property (nonatomic, readonly) _Bool isRebuildJob;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;

- (void)waitUntilFinished;
- (long long)executionContext;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)wantsLiveGraphUpdates;
- (_Bool)wantsGraphUpdateNotifications;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4;
- (_Bool)graphIsReady;
- (void)markAsFinishedWithCompletionScore:(float)arg1;
- (void)updateCompletionScore:(float)arg1;
- (void)onGraphUpdateComplete;
- (void)_restoreGraphUpdateManagerExecutionContext;
- (void)_makeWorkerAvailable;
- (void)_transitionWorkerStateToWorking;
- (void)_resetGraphManager;
- (void)markJobFinishWorkForCancellation;
- (void)prepareProcessingForWorker:(id)arg1;
- (void)additionalWorkAfterUpdate;

@end
