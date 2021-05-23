/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdMigrationClient : PLAssetsdBaseClient

- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1;
- (void)moveiPhotoLibraryMediaWithReply:(CDUnknownBlockType)arg1;
- (void)dataMigrationWillFinish;

@end
