/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString, PLAssetsdCPLResourceDownloader;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService

{
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(_Bool)arg4 trackCPLDownload:(_Bool)arg5 downloadIsTransient:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2;

@end
