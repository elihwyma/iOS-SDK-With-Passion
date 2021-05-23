/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLConfiguration, CPLEngineFeedbackManager, CPLEngineScheduler, CPLEngineStore, CPLEngineSyncManager, CPLEngineSystemMonitor, CPLEngineTransport, CPLPlatformObject, CPLStatus, NSArray, NSDate, NSError, NSHashTable, NSString, NSURL;

@protocol CPLEngineLibraryOwner, OS_dispatch_queue;

@interface CPLEngineLibrary : NSObject

{
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_closingQueue;
    NSHashTable *_attachedObjects;
    NSError *_openingError;
    CPLStatus *_status;
    _Bool _closed;
    _Bool _totalAssetCountHasBeenCalculated;
    NSDate *_cachedLastQuarantineCountReportDate;
    unsigned long long _totalAssetCount;
    _Bool _libraryIsCorrupted;
    CPLPlatformObject *_platformObject;
    NSString *_currentClosingComponentName;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    unsigned long long _libraryOptions;
    id <CPLEngineLibraryOwner> _owner;
    CPLEngineStore *_store;
    CPLEngineScheduler *_scheduler;
    CPLEngineSyncManager *_syncManager;
    CPLEngineTransport *_transport;
    CPLEngineSystemMonitor *_systemMonitor;
    CPLEngineFeedbackManager *_feedback;
    CPLConfiguration *_configuration;
}

@property (nonatomic, readonly) _Bool libraryIsCorrupted;
@property (readonly) NSString *currentClosingComponentName;
@property (copy, nonatomic, readonly) NSURL *clientLibraryBaseURL;
@property (copy, nonatomic, readonly) NSURL *cloudLibraryStateStorageURL;
@property (copy, nonatomic, readonly) NSURL *cloudLibraryResourceStorageURL;
@property (copy, nonatomic, readonly) NSString *libraryIdentifier;
@property (nonatomic, readonly) unsigned long long libraryOptions;
@property (weak, nonatomic) id <CPLEngineLibraryOwner> owner;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (nonatomic, readonly) CPLEngineScheduler *scheduler;
@property (nonatomic, readonly) CPLEngineSyncManager *syncManager;
@property (nonatomic, readonly) CPLEngineTransport *transport;
@property (nonatomic, readonly) CPLEngineSystemMonitor *systemMonitor;
@property (nonatomic, readonly) CPLEngineFeedbackManager *feedback;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (nonatomic) _Bool hasChangesToProcess;
@property (nonatomic) _Bool iCloudLibraryClientVersionTooOld;
@property (nonatomic, readonly) NSDate *initialSyncDate;
@property (nonatomic) _Bool isExceedingQuota;
@property (nonatomic) _Bool iCloudLibraryHasBeenWiped;
@property (nonatomic) _Bool iCloudLibraryExists;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;

- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)statusDidChange:(id)arg1;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (void)startSyncSession;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideCloudResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)corruptionInfo;
- (void)setHasCellularBudget:(_Bool)arg1 hasBatteryBudget:(_Bool)arg2 isConstrainedNetwork:(_Bool)arg3 isBudgetValid:(_Bool)arg4;
- (void)setConnectedToNetwork:(_Bool)arg1;
- (void)setLowDiskSpace:(_Bool)arg1;
- (void)reportLibraryCorrupted;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1;
- (void)reportQuarantineCountIfNecessary;
- (void)reportRadar:(unsigned long long)arg1;
- (void)_openNextComponent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_closeNextComponent:(id)arg1 deactivate:(_Bool)arg2 lastError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setCurrentClosingComponentName:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;
- (void)updateInitialSyncDate:(id)arg1;
- (void)reportUnsuccessfulSync;
- (void)updateDisabledFeatures:(id)arg1;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
- (void)updateAssetCountsFromServer:(id)arg1;
- (unsigned long long)totalAssetCountOnServer;
- (_Bool)hasAssetCountOnServer;
- (void)updateAccountFlagsData:(id)arg1;
- (_Bool)hasAccountFlagsData;
- (void)forceFetchAccountFlags;
- (void)attachObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)detachObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_performBlockWithLibrary:(_Bool)arg1 enumerateAttachedObjects:(CDUnknownBlockType)arg2;
- (void)_performBlockOnLibrary:(CDUnknownBlockType)arg1;
- (void)requestAttachedLibrary;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsHasStatusChanges;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)_fillStatus:(id)arg1 forComponents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fillStatusArray:(id)arg1 forComponents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
