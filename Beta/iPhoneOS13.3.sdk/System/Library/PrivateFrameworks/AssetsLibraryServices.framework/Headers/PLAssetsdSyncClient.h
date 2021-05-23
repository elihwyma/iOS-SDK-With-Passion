/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdSyncClient : PLAssetsdBaseClient

- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(_Bool)arg3;
- (void)finalizeOTARestoreRecreatingAlbums:(_Bool)arg1;

@end
