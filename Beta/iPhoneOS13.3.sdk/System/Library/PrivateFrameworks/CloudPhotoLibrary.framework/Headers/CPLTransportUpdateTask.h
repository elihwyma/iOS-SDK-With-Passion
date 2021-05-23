/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@interface CPLTransportUpdateTask : CPLEngineMultiscopeSyncTask

- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (_Bool)shouldSkipScopesWithMissingTransportScope;

@end
