/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSObject, NSString, PLFileSystemAssetImporter, PLXPCTransaction;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_updateGroup;
    PLXPCTransaction *_libraryTransaction;
    PLFileSystemAssetImporter *_importer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLibraryServicesManager:(id)arg1;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(_Bool)arg3;
- (void)finalizeOTARestoreRecreatingAlbums:(_Bool)arg1;
- (void)_finalizeOTARestoreEndedAndRecreateAlbums:(_Bool)arg1;
- (void)_updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(_Bool)arg3;
- (void)_updatePendingCountForMissingAsset:(id)arg1;
- (void)_linkPathsAside:(id)arg1;
- (void)_recoverAsideFiles:(id)arg1;
- (void)_cleanupAlbumMetadataAsideFilesAfterRestore;
- (id)_fileRestoreExclusionPaths;
- (id)_readRestoreAlbumMetadataForAlbum:(id)arg1;
- (void)_addAsset:(id)arg1 toAlbumsForUUID:(id)arg2;

@end
