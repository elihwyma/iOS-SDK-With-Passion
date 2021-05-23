/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineLibrary, CPLPlatformObject, NSString;

@interface CPLEngineTransport : NSObject

{
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
}

@property (weak, nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) Class transportGroupClass;
@property (nonatomic, readonly) Class userIdentifierClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;

- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scopeIdentifier:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)downloadBatchTaskForSyncAnchor:(struct NSData *)arg1 transportScope:(id)arg2 scope:(id)arg3 currentLibraryInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)fetchScopeListChangesForScopeListSyncAnchor:(struct NSData *)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 libraryInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getLibraryInfoAndStateWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 transportScope:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)inMemoryDownloadTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)publishTaskForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchTaskForMomentShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)acceptTaskForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)queryUserIdentitiesTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)simpleDescriptionForSyncAnchor:(struct NSData *)arg1;
- (id)simpleDescriptionForScopeListSyncAnchor:(struct NSData *)arg1;
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;
- (id)descriptionForTransportScope:(id)arg1;
- (id)scopeNameForTransportScope:(id)arg1;
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;
- (void)getPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isResourceDynamic:(id)arg1;
- (void)findPersistedInitialSyncSession:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createGroupForInitialUpload;
- (id)createGroupForResetSync;
- (id)createGroupForInitialDownload;
- (id)createGroupForPrefetch;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForSetup;
- (id)createGroupForTransportScopeDelete;
- (id)createGroupForTransportScopeUpdate;
- (id)createGroupForFetchScopeListChanges;
- (id)createGroupForFeedback;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForChangeUpload;
- (id)createGroupForChangeDownload;
- (id)createGroupForThumbnailsDownload;
- (id)createGroupForResourcesDownload;
- (id)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForPruningCheck;
- (id)createGroupForPublishingMomentShare;
- (id)createGroupForFetchingMomentShare;
- (id)createGroupForAcceptingMomentShare;
- (id)createGroupForQueryUserIdentities;

@end
