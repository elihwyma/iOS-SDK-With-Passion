/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDisplayAssetUIView.h>

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSNumber, NSString, PXVideoPlayerView;

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView

{
    PXVideoPlayerView *_videoView;
    long long _requestID;
    unsigned long long _loadingIntervalID;
    unsigned long long _playbackIntervalID;
    id _timeObserver;
    _Bool _canLoadVideo;
    ISWrappedAVPlayer *_videoPlayer;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_queuePosition;
    ISWrappedAVAudioSession *_audioSession;
    double _videoLoadingProgress;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (nonatomic) _Bool canLoadVideo;
@property (retain, nonatomic) NSNumber *queuePosition;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;
@property (nonatomic) double videoLoadingProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long activityCoordinatorQueuePosition;

- (void)dealloc;
- (id)contentView;
- (void)didMoveToWindow;
- (id)currentImage;
- (void)updateContent;
- (long long)playbackStyle;
- (double)loadingProgress;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (_Bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (struct CGRect)currentContentsRect;
- (void)animatedContentEnabledDidChange;
- (void)contentModeDidChange;
- (void)_unloadVideo;
- (void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg1;
- (void)_loadVideo;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_updateVideoPlayerPlayerItem;
- (void)_updateVideoViewContentMode;
- (void)_handleVideoPlayerTimeObserverWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateVideoViewPlaceholderFilters;
- (void)_endPlaybackInterval;
- (void)_endLoadingInterval:(_Bool)arg1;

@end
