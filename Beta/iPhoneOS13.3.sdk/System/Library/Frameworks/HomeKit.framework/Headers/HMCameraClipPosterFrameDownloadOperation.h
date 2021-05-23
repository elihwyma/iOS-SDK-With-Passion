/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFOperation.h>

@class HMCameraClip, HMCameraClipManager, HMCameraClipPosterFrame, NSString, NSURL;

@protocol HMCameraClipFetchAssetContextOperationDataSource;

@interface HMCameraClipPosterFrameDownloadOperation : HMFOperation

{
    HMCameraClip *_clip;
    HMCameraClipPosterFrame *_posterFrame;
    NSURL *_destinationFileURL;
    CDUnknownBlockType _downloadPosterFrameCompletionBlock;
    HMCameraClipManager *_clipManager;
    id <HMCameraClipFetchAssetContextOperationDataSource> _dataSource;
}

@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) id <HMCameraClipFetchAssetContextOperationDataSource> dataSource;
@property (readonly) HMCameraClip *clip;
@property (readonly) HMCameraClipPosterFrame *posterFrame;
@property (copy) NSURL *destinationFileURL;
@property (copy) CDUnknownBlockType downloadPosterFrameCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (void)cancelWithError:(id)arg1;
- (id)logIdentifier;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 dataSource:(id)arg4;
- (id)fetchImageData;
- (id)writeImageData:(id)arg1;
- (void)finishWithImageData:(id)arg1;
- (id)fetchAssetContext;
- (id)downloadImageDataForAssetContext:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3;

@end
