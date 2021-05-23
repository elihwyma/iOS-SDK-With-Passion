/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBasePlayerUIView.h>

@class ISLiveWallpaperPlayer, NSTimer, UIGestureRecognizer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView

{
    _Bool _touching;
    UIGestureRecognizer *_playbackGestureRecognizer;
    double _force;
    NSTimer *_updateTimer;
}

@property (nonatomic) _Bool touching;
@property (nonatomic) double force;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (retain, nonatomic) ISLiveWallpaperPlayer *player;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_updatePlayer;
- (void)_ISLiveWallpaperUIViewCommonInitialization;
- (void)_handleUpdateTimer;

@end
