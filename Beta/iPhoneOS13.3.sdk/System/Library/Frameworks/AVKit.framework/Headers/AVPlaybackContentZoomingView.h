/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIScrollView.h>

@class AVPlaybackContentContainerView, NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentZoomingView : UIScrollView

{
    _Bool _playingOnSecondScreen;
    _Bool _zoomingEnabled;
    _Bool _fullScreen;
    AVPlaybackContentContainerView *_activeContentView;
    UIWindow *_lastKnownWindow;
    struct CGSize _contentAspectRatio;
    struct CGRect _videoContentFrame;
    struct CGRect _previousBounds;
}

@property (nonatomic) struct CGRect previousBounds;
@property (weak, nonatomic) UIWindow *lastKnownWindow;
@property (nonatomic, getter=isZoomingEnabled) _Bool zoomingEnabled;
@property (nonatomic) struct CGSize contentAspectRatio;
@property (nonatomic, getter=isFullScreen) _Bool fullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGRect videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;

- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (struct UIEdgeInsets)_contentInsets;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;
- (void)zoomToPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(_Bool)arg2;
- (struct CGSize)_contentSizeForScale:(double)arg1;
- (struct CGRect)_contentRectForScale:(double)arg1;
- (void)_updateMinMaxZoomScales;
- (void)_updateMinMaxZoomScales:(_Bool)arg1;

@end
