/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVAppStorePlayerLayerView, AVBackdropView, AVButton, AVObservationController, AVPlayer, AVPlayerViewController, AVStyleSheet, NSMutableDictionary, NSString;

@protocol AVPlayerViewControllerDelegate;

@interface AVAppStorePlayerView : UIView

{
    _Bool _showsPlaybackControls;
    _Bool _updatesNowPlayingInfoCenter;
    _Bool _showsMinimalPlaybackControlsWhenEmbeddedInline;
    _Bool _canPausePlaybackWhenExitingFullScreen;
    _Bool _allowsEnteringFullScreen;
    NSString *_videoGravity;
    UIView *_contentOverlayView;
    AVPlayer *_player;
    CDUnknownBlockType _playButtonHandlerForLazyPlayerLoading;
    long long _preferredUnobscuredArea;
    id <AVPlayerViewControllerDelegate> _playerViewControllerDelegate;
    AVPlayerViewController *_playerViewController;
    AVButton *_prominentPlayButton;
    AVBackdropView *_prominentPlayButtonBackdropView;
    AVStyleSheet *_styleSheet;
    AVAppStorePlayerLayerView *_playerLayerView;
    NSMutableDictionary *_videoGravityForLayoutClassDictionary;
    AVObservationController *_observationController;
}

@property (retain, nonatomic) AVButton *prominentPlayButton;
@property (retain, nonatomic) AVBackdropView *prominentPlayButtonBackdropView;
@property (retain, nonatomic) AVStyleSheet *styleSheet;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) AVAppStorePlayerLayerView *playerLayerView;
@property (retain, nonatomic) NSMutableDictionary *videoGravityForLayoutClassDictionary;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic) _Bool showsPlaybackControls;
@property (nonatomic) _Bool updatesNowPlayingInfoCenter;
@property (nonatomic) _Bool showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) _Bool canPausePlaybackWhenExitingFullScreen;
@property (nonatomic) _Bool allowsEnteringFullScreen;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) CDUnknownBlockType playButtonHandlerForLazyPlayerLoading;
@property (nonatomic) long long preferredUnobscuredArea;
@property (weak, nonatomic) id <AVPlayerViewControllerDelegate> playerViewControllerDelegate;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2;
- (void)_makeActualVideoViewWithPlayerIfNeeded:(id)arg1;
- (void)_makePlayerLayerViewWithPlayer:(id)arg1;
- (void)_makePlayerViewControllerWithPlayer:(id)arg1;
- (void)_prominentPlayButtonTouchUpInside:(id)arg1;

@end
