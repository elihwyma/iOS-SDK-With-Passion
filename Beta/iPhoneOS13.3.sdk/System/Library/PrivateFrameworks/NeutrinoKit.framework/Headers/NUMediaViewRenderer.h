/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NSObject.h>

@class AVComposition, NSArray, NSString, NUAVPlayerController, NUCoalescer, NUColorSpace, NUComposition, NULivePhotoRenderClient, NUMediaView, NUObservatory, NUPixelFormat, NUResponse, NUSurfaceRenderClient, NUVideoRenderClient, UIView;

@protocol NURenderStatistics, OS_dispatch_group, OS_dispatch_queue;

@interface NUMediaViewRenderer : NSObject

{
    NUSurfaceRenderClient *_zoomClient;
    NUSurfaceRenderClient *_backfillClient;
    NULivePhotoRenderClient *_livePhotoClient;
    NUVideoRenderClient *_videoClient;
    UIView *_livePhotoView;
    NUCoalescer *_livePhotoUpdateCoalescer;
    NUCoalescer *_videoUpdateCoalescer;
    NUObservatory *_observatory;
    _Bool _canRenderLoopingVideoLive;
    long long _playbackMode;
    _Bool _muted;
    _Bool _didReleaseAVObjects;
    _Atomic int _videoRenderInFlightCount;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NUResponse *_zoomRenderResponse;
    NUResponse *_backfillRenderResponse;
    struct CGRect _lastZoomRect;
    double _lastZoomScale;
    double _lastZoomRenderTime;
    id <NURenderStatistics> _lastZoomRenderStatistics;
    id <NURenderStatistics> _lastBackfillRenderStatictics;
    _Bool _isPanning;
    _Bool _isZooming;
    _Bool __videoEnabled;
    NUComposition *_composition;
    NUColorSpace *_colorSpace;
    NUPixelFormat *_pixelFormat;
    NUMediaView *_mediaView;
    double _backingScale;
    NSArray *_pipelineFilters;
    double _maximumZoomScale;
    NUAVPlayerController *_nuAVPlayerController;
    unsigned long long _displayType;
    unsigned long long _computedDisplayType;
    AVComposition *_previousVideo;
    NSArray *_previousPipelineFilters;
}

@property (nonatomic, getter=_isVideoEnabled, setter=_setVideoEnabled:) _Bool _videoEnabled;
@property (retain, nonatomic) AVComposition *previousVideo;
@property (copy, nonatomic, readonly) NSArray *previousPipelineFilters;
@property (copy, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) NUPixelFormat *pixelFormat;
@property (weak, nonatomic, readonly) NUMediaView *mediaView;
@property (nonatomic) double backingScale;
@property (copy, nonatomic) NSArray *pipelineFilters;
@property (nonatomic, readonly, getter=isZoomedToFit) _Bool zoomedToFit;
@property (nonatomic) double maximumZoomScale;
@property (readonly) _Bool isReady;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, readonly) NUAVPlayerController *nuAVPlayerController;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic, readonly) unsigned long long computedDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) CDStruct_198678f7 mediaDuration;
@property (nonatomic, readonly) CDStruct_198678f7 currentTime;
@property (nonatomic) double playbackRate;
@property (nonatomic) long long playbackMode;
@property (nonatomic, getter=isMuted) _Bool muted;

+ (_Bool)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 isPlaying:(_Bool)arg5;

- (id)init;
- (void)pause;
- (void)removeObserver:(id)arg1;
- (void)wait;
- (void)play;
- (struct CGSize)targetSize;
- (void)seekToTime:(CDStruct_198678f7)arg1;
- (void)stepByCount:(long long)arg1;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)endPanning;
- (void)_releaseAVObjects;
- (void)seekToTime:(CDStruct_198678f7)arg1 exact:(_Bool)arg2;
- (id)addPlaybackTimeObserver:(CDUnknownBlockType)arg1;
- (id)addPlaybackStateObserver:(CDUnknownBlockType)arg1;
- (void)livePhotoViewDidBeginScrubbing:(id)arg1;
- (void)livePhotoViewDidEndScrubbing:(id)arg1;
- (void)updateComposition:(id)arg1;
- (void)_notifyPlaybackTimeChange:(CDStruct_198678f7)arg1;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;
- (id)initWithMediaView:(id)arg1;
- (id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3;
- (void)beginPanning;
- (void)beginZooming;
- (void)endZooming;
- (void)_beginAnimating;
- (void)_endAnimating;
- (_Bool)pipelineFilersHaveChanged;
- (_Bool)canRenderVideoLive;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toImageFromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromImageToView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toImageFromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromImageToView:(id)arg2;
- (struct CGRect)_scrollBounds;
- (id)_regionPolicyForZoomTargetRect:(struct CGRect)arg1;
- (void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2;
- (void)_updateImageRenderForComposition:(id)arg1;
- (CDUnknownBlockType)_zoomRenderResponseHandler;
- (CDUnknownBlockType)_backfillRenderResponseHandler;
- (CDUnknownBlockType)_videoFrameImageRenderResponseHandler;
- (void)_updateROILayerWithLatestRenderResponse;
- (void)_updateBackfillLayerWithLatestRenderResponse;
- (void)_updateROILayerWithRenderResponse:(id)arg1;
- (void)_updateBackfillLayerWithRenderResponse:(id)arg1;
- (id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2;
- (id)renderClient;
- (void)_updateDisplayForMediaType:(long long)arg1;
- (void)_setDisplayType:(unsigned long long)arg1;
- (void)_setupAVPlayerController;
- (void)_playerStatusDidChange:(long long)arg1;
- (void)_tearDownAVPlayerController;
- (id)cacheVideoRenderFilter;
- (void)_updateVideoWithResult:(id)arg1;
- (void)_updateVideoComposition:(id)arg1;
- (void)_updateVideoViewLayoutWithGeometry:(id)arg1;
- (void)_coalesceUpdateVideoComposition:(id)arg1;
- (void)_coalesceUpdateLivePhotoComposition:(id)arg1;
- (void)_updateLivePhotoComposition:(id)arg1;
- (id)_livePhotoFromResponse:(id)arg1;
- (void)_updateLivePhotoWithResponse:(id)arg1;
- (id)_zoomRenderRequestForComposition:(id)arg1;
- (double)_targetZoomScale;
- (struct CGRect)_zoomTargetRect;
- (double)_lastRenderDuration;
- (id)_backfillRenderRequestForComposition:(id)arg1;
- (void)_addFullExtentConstraintsForView:(id)arg1;
- (long long)_playbackStateFromPlayerStatus:(long long)arg1 rate:(float)arg2;
- (void)_notifyPlaybackStateChange:(long long)arg1;

@end
