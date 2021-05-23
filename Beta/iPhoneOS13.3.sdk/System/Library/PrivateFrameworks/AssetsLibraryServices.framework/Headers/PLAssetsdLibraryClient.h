/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@class NSMutableDictionary;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient

{
    NSMutableDictionary *_securityScopedURLs;
    _Atomic _Bool _isOpen;
}

- (void)dealloc;
- (_Bool)repairSingletonObjectsWithError:(id *)arg1;
- (_Bool)openPhotoLibraryDatabaseWithoutProgressIfNeeded:(id *)arg1;
- (void)importFileSystemAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)getCurrentModelVersion;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (_Bool)createPhotoLibraryDatabaseWithError:(id *)arg1;
- (void)launchAssetsd;
- (void)recoverFromCrashIfNeeded;
- (id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)arg1 error:(id *)arg2;
- (_Bool)shutdownPhotoLibraryDatabaseWithError:(id *)arg1;
- (_Bool)synchronouslyImportFileSystemAssetsWithError:(id *)arg1;
- (id)_assetURIStringsForPhotos:(id)arg1;
- (_Bool)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 error:(id *)arg4;
- (void)pendingEventsForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_consumeSandboxExtensions:(id)arg1;
- (void)_stopUsingSecurityScopedURLs;

@end
