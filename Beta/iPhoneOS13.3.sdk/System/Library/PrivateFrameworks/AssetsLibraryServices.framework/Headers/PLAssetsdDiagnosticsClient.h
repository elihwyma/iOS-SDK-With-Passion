/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient

- (void)setSharedMemoryForDeferredLogging:(id)arg1;
- (_Bool)getPhotosXPCEndpoint:(id *)arg1 error:(id *)arg2;
- (_Bool)dumpCloudPhotosStatusIncludingDaemon:(_Bool)arg1 error:(id *)arg2;
- (_Bool)dumpPhotoAnalysisStatusWithOutputFilePath:(id *)arg1 error:(id *)arg2;
- (_Bool)incompleteRestoreProcesses:(id *)arg1 error:(id *)arg2;
- (void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
