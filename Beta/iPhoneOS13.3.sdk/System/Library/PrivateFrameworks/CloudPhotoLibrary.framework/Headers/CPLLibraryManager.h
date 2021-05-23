/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLChangeSession, CPLConfiguration, CPLPlatformObject, CPLStatus, NSError, NSString, NSURL, _CPLWeakLibraryManager;

@protocol CPLLibraryManagerDelegate, CPLLibraryManagerForceSyncDelegate, CPLLibraryManagerOwner, CPLResourceProgressDelegate, OS_dispatch_queue;

@interface CPLLibraryManager : NSObject

{
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    _Bool _sizeOfResourcesToUploadIsSet;
    NSObject<OS_dispatch_queue> *_initLock;
    CPLConfiguration *_configuration;
    CPLStatus *_syncStatus;
    _CPLWeakLibraryManager *_weakSelf;
    _Bool _preventObserving;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    unsigned long long _libraryOptions;
    NSString *_libraryVersion;
    unsigned long long _estimatedInitialSizeForLocalLibrary;
    unsigned long long _estimatedInitialAssetCountForLocalLibrary;
    unsigned long long _sizeOfResourcesToUpload;
    unsigned long long _sizeOfOriginalResourcesToUpload;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfVideosToUpload;
    unsigned long long _numberOfOtherItemsToUpload;
    id <CPLLibraryManagerDelegate> _delegate;
    id <CPLResourceProgressDelegate> _resourceProgressDelegate;
    id <CPLLibraryManagerForceSyncDelegate> _forceSyncDelegate;
    id <CPLLibraryManagerOwner> _owner;
    unsigned long long _status;
    NSError *_statusError;
    unsigned long long _state;
    NSString *_userOverride;
    NSString *_effectiveClientBundleIdentifier;
}

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *userOverride;
@property (copy, nonatomic) NSString *effectiveClientBundleIdentifier;
@property (copy, nonatomic, readonly) NSURL *clientLibraryBaseURL;
@property (copy, nonatomic, readonly) NSURL *cloudLibraryStateStorageURL;
@property (copy, nonatomic, readonly) NSURL *cloudLibraryResourceStorageURL;
@property (copy, nonatomic, readonly) NSString *libraryIdentifier;
@property (nonatomic, readonly) unsigned long long libraryOptions;
@property (copy, nonatomic, readonly) NSString *libraryVersion;
@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (nonatomic, readonly) unsigned long long sizeOfResourcesToUpload;
@property (nonatomic, readonly) unsigned long long sizeOfOriginalResourcesToUpload;
@property (nonatomic, readonly) unsigned long long numberOfImagesToUpload;
@property (nonatomic, readonly) unsigned long long numberOfVideosToUpload;
@property (nonatomic, readonly) unsigned long long numberOfOtherItemsToUpload;
@property (weak, nonatomic) id <CPLLibraryManagerDelegate> delegate;
@property (weak, nonatomic) id <CPLResourceProgressDelegate> resourceProgressDelegate;
@property (weak, nonatomic) id <CPLLibraryManagerForceSyncDelegate> forceSyncDelegate;
@property (weak, nonatomic) id <CPLLibraryManagerOwner> owner;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (nonatomic, readonly) CPLStatus *syncStatus;
@property (nonatomic) _Bool diagnosticsEnabled;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSError *statusError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (void)useCloudPhotoDaemonImplementation;
+ (id)descriptionForProvideContentResult:(unsigned long long)arg1;

- (void)dealloc;
- (void)_configurationDidChange;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)currentSession;
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
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
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
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (void)enableMainScopeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)barrier;
- (id)initForManagement;
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
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (_Bool)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (void)_setLibraryVersion:(id)arg1;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)_statusDidChange;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)_closeDeactivating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discardCurrentSession;
- (void)_setCurrentSession:(id)arg1;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDownloadForResource:(id)arg1 highPriority:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)publishResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)arg1;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)addSubscriberUsingPublishingHandler:(CDUnknownBlockType)arg1;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(_Bool)arg1;
- (void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(_Bool)arg2;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportSetting:(id)arg1 hasBeenEnabled:(_Bool)arg2;

@end
