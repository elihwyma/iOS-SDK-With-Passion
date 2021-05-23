/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalManagerCore.h>

@class NSObject, NSPersistentHistoryToken, PLPhotoLibrary;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLJournalManager : PLJournalManagerCore

{
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_transientPhotoLibrary;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
    NSPersistentHistoryToken *_currentHistoryToken;
}

+ (id)payloadClasses;
+ (id)entriesByPayloadClassIDFromHistoryToken:(id)arg1 currentHistoryToken:(id *)arg2 withManagedObjectContext:(id)arg3 payloadIDsToSkipInserts:(id)arg4;
+ (Class)payloadClassForAdditionalEntityName:(id)arg1;
+ (_Bool)assetJournalExists:(id)arg1;
+ (_Bool)existingJournalsCompatibleForRebuild:(id)arg1 error:(id *)arg2;

- (void)stop;
- (void)start;
- (void)_start;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned int)_registerToChangeHubNotification;
- (void)_unregisterToChangeHubNotification;
- (id)_transientPhotoLibrary;
- (void)notifyWillImportFileSystemAssets;
- (void)notifyDidImportFileSystemAssets;
- (void)_startAfterRebuild;
- (void)_handleChangeHubNotification;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)forceFullSnapshot:(id *)arg1;
- (void)_loadHistoryToken;
- (_Bool)_needSnapshot;
- (_Bool)_needFullSnapshot;
- (_Bool)_needPartialSnapshot:(id)arg1;
- (_Bool)_createSnapshotsForceFull:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2;
- (_Bool)_appendEntriesByPayloadClassID:(id)arg1 withCurrentHistoryToken:(id)arg2;
- (_Bool)_replayFromCurrentHistoryToken;
- (_Bool)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)arg1;
- (void)recreateAllObjectsInManagedObjectContext:(id)arg1;
- (void)recreateAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)_recreateAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (void)_removeLegacyPersistedMetadataIfNecessary;

@end
