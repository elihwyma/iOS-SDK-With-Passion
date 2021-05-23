/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVStatusBarBackgroundGradientView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentContainerView : UIView

{
    _Bool _playingOnSecondScreen;
    _Bool _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
    _Bool _observingStatusBarHidden;
    __AVPlayerLayerView *_playerLayerView;
    UIView *_contentOverlayView;
    UIView *_contentOverlayViewSubview;
    AVStatusBarBackgroundGradientView *_statusBarBackgroundGradientView;
    struct CGRect _videoContentFrame;
}

@property (nonatomic, readonly) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView;
@property (nonatomic, getter=isObservingStatusBarHidden) _Bool observingStatusBarHidden;
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (retain, nonatomic) UIView *contentOverlayViewSubview;
@property (nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) struct CGRect videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;

- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2 contentOverlayView:(id)arg3;
- (void)removeAllSublayerTransformAnimations;
- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (struct CGRect)_frameForStatusBarBackgroundGradientView;
- (struct CGRect)_resolvedContentFrame;

@end
