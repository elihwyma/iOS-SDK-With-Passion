/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScopeStorage, CPLEngineScopedTask, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_currentTaskQueue;
    CPLEngineScopedTask *_currentTask;
    NSMutableArray *_coveredScopes;
    NSMutableArray *_excludedScopes;
    NSMutableDictionary *_transportScopes;
    NSString *_clientCacheIdentifier;
    CPLEngineScopeStorage *_scopes;
}

@property (nonatomic, readonly) CPLEngineScopeStorage *scopes;
@property (nonatomic, readonly) _Bool shouldSkipScopesWithMissingTransportScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)launch;
- (void)setForceSync:(_Bool)arg1;
- (id)_currentTask;
- (void)setForeground:(_Bool)arg1;
- (id)phaseDescription;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (_Bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)_setCurrentTask:(id)arg1;
- (id)_currentScope;
- (void)dispatchAsyncWithCurrentSubtask:(CDUnknownBlockType)arg1;
- (_Bool)shouldStartTaskInTransaction:(id)arg1;
- (_Bool)shouldContinueAfterError:(id)arg1 fromTask:(id)arg2;
- (void)_launchTaskForNextScope;

@end
