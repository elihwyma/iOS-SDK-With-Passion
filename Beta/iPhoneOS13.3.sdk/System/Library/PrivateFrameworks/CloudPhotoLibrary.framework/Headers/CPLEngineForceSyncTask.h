/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLForceSyncTask.h>

@class CPLEngineLibrary, CPLEngineSyncTask, CPLMinglePulledChangesTask, CPLPullFromTransportTask, CPLPushToTransportTask, CPLScopeFilter, CPLSyncSession, NSObject, NSString;

@protocol CPLEngineForceSyncTaskDelegate, OS_dispatch_queue;

@interface CPLEngineForceSyncTask : CPLForceSyncTask

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _reallyCancelled;
    CPLEngineSyncTask *_currentTask;
    CPLPushToTransportTask *_pushTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLSyncSession *_fakeSession;
    _Bool _bypassForceSyncLimitations;
    CPLScopeFilter *_filter;
    CPLEngineLibrary *_engineLibrary;
    id <CPLEngineForceSyncTaskDelegate> _delegate;
    CDUnknownBlockType _taskDidFinishWithErrorBlock;
}

@property (retain, nonatomic) CPLScopeFilter *filter;
@property (retain, nonatomic) CPLEngineLibrary *engineLibrary;
@property (weak, nonatomic) id <CPLEngineForceSyncTaskDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType taskDidFinishWithErrorBlock;
@property (nonatomic) _Bool bypassForceSyncLimitations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)launch;
- (void)cancelTask;
- (void)_finishWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (id)initWithScopeIdentifiers:(id)arg1 engineLibrary:(id)arg2 filter:(id)arg3 delegate:(id)arg4;
- (void)_dispatchSyncTask:(id)arg1;
- (void)_dispatchPushTask;
- (void)_dispatchPullTask;
- (void)_dispatchMingleTask;
- (void)reallyCancel;

@end
