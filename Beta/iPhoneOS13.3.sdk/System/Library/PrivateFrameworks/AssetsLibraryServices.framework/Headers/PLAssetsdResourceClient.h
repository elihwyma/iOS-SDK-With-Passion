/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceClient : PLAssetsdBaseClient

- (void)saveAssetWithJobDictionary:(id)arg1 imageSurface:(struct __IOSurface *)arg2 previewImageSurface:(struct __IOSurface *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 outImageData:(id *)arg7 outImageDataInfo:(id *)arg8 outCPLDownloadContext:(id *)arg9 error:(id *)arg10;
- (void)adjustmentDataForAsset:(id)arg1 withDataBlob:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3 trackCPLDownload:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)sandboxExtensionForFileSystemBookmark:(id)arg1 bookmarkURL:(id *)arg2 sandboxExtensionToken:(id *)arg3 error:(id *)arg4;
- (id)consolidateAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 error:(id *)arg3;
- (void)addGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fileURLForAssetURL:(id)arg1 withAdjustments:(_Bool)arg2 fileURL:(id *)arg3 error:(id *)arg4;
- (_Bool)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(_Bool)arg2 fileExtension:(id *)arg3 fileDescriptor:(int *)arg4 error:(id *)arg5;
- (_Bool)sandboxExtensionForAssetResourcePath:(id)arg1 sandboxExtensionToken:(id *)arg2 error:(id *)arg3;
- (void)videoURLForAsset:(id)arg1 format:(int)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(_Bool)arg4 streamingAllowed:(_Bool)arg5 restrictToPlayable:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)videoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(_Bool)arg3 streamingAllowed:(_Bool)arg4 restrictToPlayable:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 outFileLength:(long long *)arg5 error:(id *)arg6;
- (void)downloadCloudSharedAsset:(id)arg1 withCloudPlaceholderKind:(unsigned long long)arg2 shouldPrioritize:(_Bool)arg3 shouldExtendTimer:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)generateOnDemandResourcesForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
