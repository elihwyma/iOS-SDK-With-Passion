/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UIView.h>

@class ISBasePlayerUIView, ISPlayerItem, ISWrappedAVPlayer, NSError, NSMutableSet, NSString, UIGestureRecognizer;

@protocol ISPlayerViewDelegate;

@interface ISPlayerView : UIView

{
    struct {
        _Bool playbackStateDidChange;
        _Bool interactingDidChange;
        _Bool gestureRecognizerDidChange;
    } _delegateRespondsTo;
    struct {
        _Bool playerItemLoadingTarget;
        _Bool playerPlayerItem;
        _Bool playerView;
        _Bool playerMuted;
        _Bool status;
        _Bool readyForDisplay;
        _Bool playbackState;
    } _isValid;
    _Bool _audioMuted;
    _Bool _isReadyForDisplay;
    _Bool _isInteracting;
    _Bool _readyForDisplay;
    long long _playbackState;
    long long _status;
    NSError *_error;
    id <ISPlayerViewDelegate> _delegate;
    ISBasePlayerUIView *__playerView;
    ISWrappedAVPlayer *__videoPlayer;
    ISPlayerItem *__playerItem;
    UIGestureRecognizer *__gestureRecognizer;
    NSMutableSet *__activeGestures;
    unsigned long long _playbackStyle;
    struct CGSize _dimensionsOfReservedVideoMemory;
}

@property (retain, nonatomic, setter=_setPlayerView:) ISBasePlayerUIView *_playerView;
@property (nonatomic, readonly) ISWrappedAVPlayer *_videoPlayer;
@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (retain, nonatomic, setter=_setGestureRecognizer:) UIGestureRecognizer *_gestureRecognizer;
@property (nonatomic, setter=_setStatus:) long long status;
@property (nonatomic, setter=_setPlaybackState:) long long playbackState;
@property (nonatomic, setter=_setReadyForDisplay:) _Bool readyForDisplay;
@property (nonatomic, readonly) NSMutableSet *_activeGestures;
@property (nonatomic) unsigned long long playbackStyle;
@property (nonatomic) struct CGSize dimensionsOfReservedVideoMemory;
@property (nonatomic) _Bool audioMuted;
@property (nonatomic, readonly) _Bool isReadyForDisplay;
@property (nonatomic, readonly) _Bool isInteracting;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id <ISPlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setAllowPlayerReuse:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (_Bool)_needsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)initWithVideoPlayer:(id)arg1;
- (void)prepareWithPhoto:(struct CGImage *)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)_invalidateStatus;
- (void)_invalidatePlaybackState;
- (void)_updatePlaybackStateIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (id)videoPlayerForPlayer:(id)arg1;
- (void)prepareWithPlayerItem:(id)arg1;
- (void)_handleGesture:(id)arg1;
- (void)_setInteracting:(_Bool)arg1;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerView;
- (void)_invalidatePlayerMuted;
- (void)_invalidateReadyForDisplay;
- (void)_updatePlayerViewIfNeeded;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updateReadyForDisplayIfNeeded;

@end
