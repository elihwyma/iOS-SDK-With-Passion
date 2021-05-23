/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString, PLAssetsdConnectionAuthorization, PLAssetsdService, PLPhotoLibraryBundleController, PLProgressFollower, PLXPCPhotoLibraryStoreContainer;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService

{
    PLXPCPhotoLibraryStoreContainer *_xpcPhotoLibraryStoreContainer;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLProgressFollower *_preRunningProgressFollower;
    PLProgressFollower *_postRunningProgressFollower;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLAssetsdService *_assetsdService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)requiredLibraryServicesState;

- (id)libraryBundle;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)launchAssetsd;
- (void)getCurrentModelVersionWithReply:(CDUnknownBlockType)arg1;
- (void)createPhotoLibraryDatabaseWithReply:(CDUnknownBlockType)arg1;
- (void)openPhotoLibraryDatabaseWithReply:(CDUnknownBlockType)arg1;
- (id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (id)postOpenProgressWithReply:(CDUnknownBlockType)arg1;
- (void)shutdownPhotoLibraryDatabaseWithReply:(CDUnknownBlockType)arg1;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(CDUnknownBlockType)arg1;
- (void)importFileSystemAssetsWithReason:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)recoverFromCrashIfNeeded;
- (void)repairSingletonObjectsWithReply:(CDUnknownBlockType)arg1;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pendingEventsForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 bundleController:(id)arg2 connectionAuthorization:(id)arg3 assetsdService:(id)arg4;
- (id)newLibraryOpener;
- (void)_sendClientReply:(CDUnknownBlockType)arg1 sandboxExtensionsByPath:(id)arg2 error:(id)arg3;

@end
