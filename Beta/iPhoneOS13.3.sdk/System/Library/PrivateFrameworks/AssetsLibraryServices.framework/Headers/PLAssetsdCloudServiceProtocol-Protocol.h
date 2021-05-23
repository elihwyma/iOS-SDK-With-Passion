/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdCloudServiceProtocol <Swift>

- (unsigned short)requestVideoPlaybackURLForCloudSharedAsset:mediaAssetType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelCPLDownloadTaskWithIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadCloudPhotoLibraryAssetWithObjectURI:taskIdentifier:resourceType:HighPriority:trackCPLDownload:downloadIsTransient:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)asynchronousStartPreheatingCPLDownloadForAssets:doneTokens:format:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)computeFingerPrintsOfAssetWithObjectURI:reply: /* Error: Ran out of types for this method. */;

@end
