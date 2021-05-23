/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class AVAssetExportSession, NSArray, NSError, NSObject, PUMergedLivePhotosVideo;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUCompositeVideoGenerator : PXObservable

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    long long _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_playbackVideo;
    AVAssetExportSession *_stateQueue_exportSession;
    NSError *_stateQueue_error;
    NSObject<OS_dispatch_group> *_videoAssetsByAssetGroup;
    _Bool _onlyAllowOverlappingAssets;
    NSArray *_assets;
    long long _outputType;
}

@property (copy, nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) long long outputType;
@property (nonatomic, readonly) _Bool onlyAllowOverlappingAssets;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PUMergedLivePhotosVideo *playbackVideo;
@property (nonatomic, readonly) AVAssetExportSession *exportSession;

+ (CDStruct_1b6d18a9)_overlapDurationBetweenAsset:(id)arg1 andAsset:(id)arg2;
+ (_Bool)canMergeAsset:(id)arg1 withConsecutiveAsset:(id)arg2;

- (void)start;
- (void)setError:(id)arg1;
- (void)setState:(long long)arg1;
- (id)mutableChangeObject;
- (void)setExportSession:(id)arg1;
- (void)_workQueue_start;
- (id)initWithAssets:(id)arg1 outputType:(long long)arg2 onlyAllowOverlappingAssets:(_Bool)arg3;
- (void)setPlaybackVideo:(id)arg1;
- (void)_workQueue_generateVideoWithSingleAssetPlayerItem:(id)arg1;
- (void)_workQueue_generateVideoWithSingleAssetExportSession:(id)arg1;
- (void)_workQueue_generateVideoWithAVAssets:(id)arg1;
- (void)_workQueue_finishWithPlaybackVideo:(id)arg1 error:(id)arg2;
- (void)_workQueue_finishWithExportSession:(id)arg1 error:(id)arg2;
- (void)_workQueue_finishWithError:(id)arg1;

@end
