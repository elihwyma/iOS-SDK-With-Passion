/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetExportRequest.h>

@class NSObject, NSProgress, PHResourceDownloadRequest;

@protocol OS_dispatch_queue;

@interface PHInternalAssetExportRequest : PHAssetExportRequest

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHResourceDownloadRequest *_downloadRequest;
    NSProgress *_downloadRequestProgressParent;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;
+ (id)_variantsForAsset:(id)arg1 error:(id *)arg2;

- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(_Bool *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 downloadRequestProgressParent:(id)arg4;

@end
