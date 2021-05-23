/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFOperation.h>

@class HMCameraClip, HMCameraClipManager, NSURL;

@protocol HMCameraClipFetchAssetContextOperationDataSource;

@interface HMCameraClipFetchVideoAssetContextOperation : HMFOperation

{
    HMCameraClipManager *_clipManager;
    HMCameraClip *_clip;
    NSURL *_clipDestinationFileURL;
    NSURL *_hlsPlaylistDestinationFileURL;
    CDUnknownBlockType _downloadProgressHandler;
    CDUnknownBlockType _fetchVideoAssetContextCompletionBlock;
    id <HMCameraClipFetchAssetContextOperationDataSource> _dataSource;
}

@property (readonly) id <HMCameraClipFetchAssetContextOperationDataSource> dataSource;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) HMCameraClip *clip;
@property (copy) NSURL *clipDestinationFileURL;
@property (copy) NSURL *hlsPlaylistDestinationFileURL;
@property (copy) CDUnknownBlockType downloadProgressHandler;
@property (copy) CDUnknownBlockType fetchVideoAssetContextCompletionBlock;

+ (id)logCategory;

- (id)description;
- (void)main;
- (void)cancelWithError:(id)arg1;
- (id)logIdentifier;
- (id)decryptData:(id)arg1;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2 dataSource:(id)arg3;
- (id)fetchVideoAssetContext;
- (id)downloadVideoAsset:(id)arg1;
- (id)writeHLSPlaylistForVideoAssetContext:(id)arg1;
- (void)finishWithVideoAssetContext:(id)arg1;
- (void)updateDownloadProgressToPercentageComplete:(unsigned long long)arg1;
- (id)downloadVideoSegment:(id)arg1 forDataTask:(id)arg2 andAppendToOutputStream:(id)arg3;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2;

@end
