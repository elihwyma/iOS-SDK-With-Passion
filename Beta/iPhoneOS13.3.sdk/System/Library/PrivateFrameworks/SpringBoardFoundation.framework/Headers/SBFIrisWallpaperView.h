/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

@class ISAVPlayer, ISPlayerView, NSString, NSURL, UIGestureRecognizer, UIImageView;

@protocol SBFIrisWallpaperViewDelegate;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView

{
    id <SBFIrisWallpaperViewDelegate> _irisDelegate;
    long long _currentMode;
    UIImageView *_imageView;
    NSURL *_videoFileURL;
    double _stillTimeInVideo;
    _Bool _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    struct CGSize _prewiredSize;
    ISPlayerView *_playerView;
    long long _playerState;
    long long _playbackState;
    _Bool _isInteracting;
    UIGestureRecognizer *_playerGestureRecognizer;
}

@property (nonatomic, readonly) long long currentIrisMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFIrisWallpaperViewDelegate> irisDelegate;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) _Bool isIrisInteracting;
@property (copy, nonatomic, readonly) NSURL *videoFileURL;
@property (nonatomic, readonly) double stillTimeInVideo;

+ (void)initialize;

- (void)dealloc;
- (void)_setImage:(id)arg1;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (_Bool)_setupContentViewForMode:(long long)arg1;
- (void)_populateContentView;
- (void)_setPlayerGestureRecognizer:(id)arg1;
- (void)_resetPrewiredAVPlayer;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewGestureRecognizerDidChange:(id)arg1;
- (id)videoPlayerForPlayerView:(id)arg1;
- (id)irisGestureRecognizer;
- (void)switchToIrisMode:(long long)arg1;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;

@end
