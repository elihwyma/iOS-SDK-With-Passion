/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask

{
    id <CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id <CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (_Bool)checkScopeIsValidInTransaction:(id)arg1;

@end
