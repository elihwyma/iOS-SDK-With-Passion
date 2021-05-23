/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask

{
    _Bool _deferredCancel;
    _Bool _highPriority;
    CPLScopeFilter *_scopeFilter;
}

@property (nonatomic) _Bool highPriority;
@property (retain, nonatomic) CPLScopeFilter *scopeFilter;

- (id)taskIdentifier;
- (void)cancel:(_Bool)arg1;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (_Bool)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:(id)arg1;
- (_Bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
