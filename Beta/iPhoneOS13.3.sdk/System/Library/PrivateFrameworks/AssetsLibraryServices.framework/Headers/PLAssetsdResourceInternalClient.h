/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient

- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
