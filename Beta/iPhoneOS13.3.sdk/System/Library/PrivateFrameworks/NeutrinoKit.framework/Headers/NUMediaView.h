/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <UIView.h>

@class NSArray, NSString, NUAVPlayerController, NUAVPlayerView, NUCoalescer, NUComposition, NUMediaViewRenderer, NURenderView, NUScrollView;

@protocol NUMediaPlayer, NUMediaViewDelegate;

@interface NUMediaView : UIView

{
    NURenderView *_renderView;
    NUScrollView *_scrollView;
    NUMediaViewRenderer *_renderer;
    struct UIEdgeInsets _edgeInsets;
    NUAVPlayerController *_nuAVPlayerController;
    NUAVPlayerView *_playerView;
    UIView *_livePhotoView;
    struct {
        _Bool hasDidFinishRendering;
        _Bool hasDidUpdateLivePhoto;
        _Bool hasDidFinishRenderingWithStatistics;
        _Bool hasDidZoom;
        _Bool hasWillBeginZooming;
        _Bool hasDidEndZooming;
        _Bool hasIsReadyForVideoPlayback;
        _Bool hasDidStartPreparingVideo;
        _Bool hasDidFinishPreparingVideo;
        _Bool hasWillBeginLivePhotoPlayback;
        _Bool hasDidEndLivePhotoPlayback;
    } _delegateFlags;
    NUCoalescer *_renderCoalescer;
    _Bool _loopsVideo;
    long long _transitionCount;
    struct CGSize _transitionTargetSize;
    _Bool _centerContent;
    _Bool _videoPlayerVisible;
    _Bool _debugEnabled;
    _Bool _scrollUpdatesSuppressed;
    id <NUMediaViewDelegate> _delegate;
    double _angle;
    struct CGSize __masterSizeWithoutGeometry;
    struct CGRect _cropRect;
}

@property (nonatomic) struct CGSize _masterSizeWithoutGeometry;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) double angle;
@property (nonatomic) NSArray *pipelineFilters;
@property (nonatomic) _Bool centerContent;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic) _Bool loopsVideoPlayback;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isVideoPlayerVisible) _Bool videoPlayerVisible;
@property (nonatomic, getter=isDebugEnabled) _Bool debugEnabled;
@property (nonatomic) _Bool scrollUpdatesSuppressed;
@property (weak, nonatomic) id <NUMediaViewDelegate> delegate;
@property (readonly) id <NUMediaPlayer> player;
@property (copy, nonatomic) NUComposition *composition;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic, readonly) struct CGRect imageFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct UIEdgeInsets)_proposedInsetsForInsets:(struct UIEdgeInsets)arg1 contentSize:(struct CGSize)arg2 inFrame:(struct CGRect)arg3 centerContent:(_Bool)arg4;

- (id)initWithCoder:(id)arg1;
- (_Bool)isReady;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)didMoveToWindow;
- (id)_scrollView;
- (void)_updateContentInsets;
- (id)_geometry;
- (struct CGSize)_imageSize;
- (id)_renderer;
- (void)_setupViews;
- (id)_imageLayer;
- (id)_livePhotoView;
- (id)snapshotImage;
- (id)_renderView;
- (void)_releaseAVObjects;
- (id)_videoPlayerView;
- (id)_videoPlayerController;
- (void)_startVideoPlayback;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromSpace:(id)arg2 toView:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toSpace:(id)arg3;
- (void)_updateRenderContent;
- (void)_transitionToInsets:(struct UIEdgeInsets)arg1;
- (void)setZoomScaleToFit;
- (void)_setPipelineFilters:(id)arg1 shouldUpdateContent:(_Bool)arg2;
- (void)_stopVideoPlayback;
- (void)waitForRender;
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (void)playerViewReadyForDisplayDidChange:(id)arg1;
- (void)playerControllerIsReadyForPlayback:(id)arg1;
- (void)playerControllerDidFinishPlaying:(id)arg1 duration:(double)arg2;
- (void)playerController:(id)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg1;
- (void)_updateRenderContentCoalesced:(_Bool)arg1;
- (void)_beginTransition;
- (void)_endTransition;
- (id)_videoPlayerViewWithoutControls;
- (void)_rendererDidCreateAVPlayerController:(id)arg1;
- (void)_rendererDidFinishWithStatistics:(id)arg1;
- (void)_rendererDidUpdateLivePhoto;
- (void)_rendererDidStartPreparingVideo;
- (void)_rendererDidFinishPreparingVideo;
- (void)_livephotoPlaybackWillBegin;
- (void)_livephotoPlaybackDidEnd;
- (void)_setLayerFilters:(id)arg1;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;
- (void)_updateVideoPlayerAlpha;
- (id)_layerRecursiveDescription;
- (id)_viewRecursiveDescription;

@end
