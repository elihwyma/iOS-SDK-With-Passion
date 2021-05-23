/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, PHPhotoLibrary;

@protocol OS_dispatch_queue, PHADownloadRequestManagement;

@interface PHAAssetResourceDataLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeDownloads;
    PHPhotoLibrary *_photoLibrary;
    id <PHADownloadRequestManagement> _downloadRequestManager;
}

@property (retain, nonatomic) id <PHADownloadRequestManagement> downloadRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1;

- (id)init;
- (void)cancelAllDownloads;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2;
- (void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1;
- (void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_inq_cancelAllDownloads;

@end
