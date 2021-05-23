/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask

{
    CPLScopeFilter *_scopeFilter;
}

@property (retain, nonatomic) CPLScopeFilter *scopeFilter;

- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (_Bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;

@end
