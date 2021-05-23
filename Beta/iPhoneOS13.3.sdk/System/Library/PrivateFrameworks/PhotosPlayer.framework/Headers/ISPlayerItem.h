/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISObservable.h>

@class AVAssetImageGenerator, AVPlayerItem, AVVideoComposition, ISAsset, ISPlayerContent, NSError, NSNumber, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ISPlayerItem : ISObservable

{
    void *_ivarQueueIdentifier;
    void *_workQueueIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _ivarQueue_loadingTarget;
    AVVideoComposition *_ivarQueue_videoComposition;
    long long _ivarQueue_videoPlayerItemRequestID;
    _Bool _ivarQueue_aggressivelyCacheVideoFrames;
    _Bool _ivarQueue_reversesMoreVideoFramesInMemory;
    _Bool _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    _Bool _ivarQueue_contentSupportsVitality;
    CDStruct_1b6d18a9 _ivarQueue_playerItemPhotoTime;
    CDStruct_1b6d18a9 _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    long long _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    struct {
        _Bool videoPlayerItem;
        _Bool status;
        _Bool content;
        _Bool minimumClientVersion;
        _Bool playbackStyleIdentifier;
        _Bool contentSupportsVitality;
    } _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    _Bool _workQueue_isGeneratingOffsetImage;
    _Bool __loadingCancelled;
    ISAsset *_asset;
    struct CGSize _targetSize;
}

@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) _Bool _loadingCancelled;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
@property (retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
@property (retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
@property (nonatomic) _Bool contentSupportsVitality;
@property (nonatomic) _Bool reversesMoreVideoFramesInMemory;
@property (nonatomic) _Bool aggressivelyCacheVideoFrames;
@property (nonatomic) _Bool decodesAllFramesDuringOrdinaryPlayback;
@property (nonatomic, readonly) ISAsset *asset;
@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic) long long loadingTarget;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
+ (long long)currentClientVersion;

- (id)init;
- (void)dealloc;
- (_Bool)_needsUpdate;
- (void)cancelLoading;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (_Bool)_isOnIvarQueue;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (id)_videoPlayerItem;
- (void)_invalidateStatus;
- (void)_updateStatusIfNeeded;
- (void)_cancelLoading;
- (void)_invalidatePlayerContent;
- (void)_updatePlayerContentIfNeeded;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)resetAVObjects;
- (void)discardContentBelowLoadingTarget;
- (void)_reloadAllContent;
- (void)_invalidateMinimumClientVersion;
- (_Bool)_isMinimumClientVersionValid;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_invalidatePlaybackStyleIdentifier;
- (_Bool)_isPlaybackStyleIdentifierValid;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (_Bool)_isContentSupportsVitalityValid;
- (void)_invalidateContentSupportsVitality;
- (void)_updateContentSupportsVitalityIfNeeded;
- (void)_invalidateVideoPlayerItem;
- (_Bool)_isVideoPlayerItemValid;
- (void)_updateVideoPlayerItemIfNeeded;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(_Bool)arg1 playerItem:(id)arg2 videoDuration:(CDStruct_1b6d18a9)arg3 error:(id)arg4;
- (void)_setVideoPlayerItem:(id)arg1 videoDuration:(CDStruct_1b6d18a9)arg2;
- (_Bool)_isPlayerContentValid;
- (_Bool)_isStatusVaild;
- (void)_performWork:(CDUnknownBlockType)arg1 sync:(_Bool)arg2;
- (void)_performWork:(CDUnknownBlockType)arg1;
- (_Bool)_isOnWorkQueue;
- (void)_assertOnWorkQueue;
- (void)_assertOnIvarQueue;

@end
