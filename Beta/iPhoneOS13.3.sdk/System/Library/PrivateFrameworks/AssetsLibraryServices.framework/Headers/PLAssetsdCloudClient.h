/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudClient : PLAssetsdBaseClient

- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(unsigned long long)arg2 doneTokens:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3 trackCPLDownload:(_Bool)arg4 downloadIsTransient:(_Bool)arg5 proposedTaskIdentifier:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end
