/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface CPLProxyLibraryManager : CPLPlatformObject

{
    NSXPCConnection *_connection;
    CDUnknownBlockType _blockToCallOnDaemonDying;
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_inMemoryDownloadTasks;
    NSMutableDictionary *_uploadTasks;
    NSMutableDictionary *_forceSyncTasks;
    NSMutableDictionary *_vouchersPerTaskIdentifier;
    _Bool _diagnosticsEnabled;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    unsigned long long _disablingMinglingCount;
    unsigned long long _significantWorkCalls;
    NSMutableDictionary *_outstandingInvocations;
    unsigned long long _outstandingInvocationsCount;
    NSMutableDictionary *_syncOutstandingInvocations;
    unsigned long long _syncOutstandingInvocationsCount;
    NSMutableArray *_pendingBlocksAfterOpening;
    int _openingStatus;
    int _notifyToken;
    _Bool _killed;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)daemonProtocolInterface;
+ (id)clientProtocolInterface;

- (void)dealloc;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)reportMiscInformation:(id)arg1;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)enableMainScopeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (_Bool)diagnosticsEnabled;
- (void)barrier;
- (void)cancelTask:(id)arg1;
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startSyncSession;
- (void)resetStatus;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(_Bool)arg2;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableMingling;
- (void)enableMingling;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addInfoToLog:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideCloudResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableMainScopeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerHasStatusChanges;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)forceSyncDidFinishForTask:(id)arg1 withErrors:(id)arg2;
- (void)provideLocalResource:(id)arg1 recordClassString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)libraryManagerHasBeenReplaced;
- (id)initWithAbstractObject:(id)arg1;
- (void)_callBlockOnDaemonDying;
- (_Bool)_setStatusFromDictionary:(id)arg1;
- (void)_reallyOpenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_dispatchBlockWhenOpen:(CDUnknownBlockType)arg1;
- (void)_setCallBlockOnDaemonDying:(CDUnknownBlockType)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(_Bool)arg2 proposedTaskIdentifier:(id)arg3 withError:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2;
- (void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_dispatchFailedForceSyncTaskForScopeIdentifiers:(id)arg1 withError:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_invokeSyncOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(CDUnknownBlockType)arg2;
- (void)_dropVoucherForTaskWithIdentifier:(id)arg1;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)dispatchBlockWhenLibraryIsOpen:(CDUnknownBlockType)arg1;
- (void)cancelSyncTask:(id)arg1;

@end
