/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdResourceServiceProtocol <Swift>

- (unsigned short)addAssetGroupWithName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)addAssetWithURL:toAlbum:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)filePathForPersistentURL:withAdjustments:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fileDescriptorForPersistentURL:withAdjustments:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)imageDataForAssetWithObjectURI:formatID:allowPlaceholder:wantURLOnly:networkAccessAllowed:trackCPLDownload:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSandboxExtensionForAssetResourcePath:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSandboxExtensionForFileSystemBookmark:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)asynchronousVideoURLForAsset:format:intent:networkAccessAllowed:streamingAllowed:trackCPLDownload:restrictToPlayable:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)asynchronousAdjustmentDataForAsset:networkAccessAllowed:withDataBlob:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)estimatedFileLengthOfVideo:fallbackFilePath:exportPreset:exportProperties:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadCloudSharedAsset:wantedPlaceholderkind:shouldPrioritize:shouldExtendTimer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)generateOnDemandResourcesForAsset:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)consolidateAssets:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateInternalResourcePath:objectURI:sandboxExtension:reply: /* Error: Ran out of types for this method. */;

@end
