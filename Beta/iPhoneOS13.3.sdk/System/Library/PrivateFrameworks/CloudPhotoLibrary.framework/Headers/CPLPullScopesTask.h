/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScopeStorage, CPLEngineStore, NSError, NSString;

@protocol CPLEngineTransportFetchScopeListChangesTask;

@interface CPLPullScopesTask : CPLEngineSyncTask

{
    _Bool _ignoreNewChanges;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    NSString *_clientCacheIdentifier;
    id <CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;
    NSError *_badError;
    unsigned long long _deletedScopeCount;
    unsigned long long _newScopeCount;
    unsigned long long _modifiedScopeCount;
}

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (_Bool)_checkShouldHandleBatchInTransaction:(id)arg1;
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(struct NSData *)arg3;
- (void)_handleFinalScopeListSyncAnchor:(struct NSData *)arg1 error:(id)arg2;

@end
