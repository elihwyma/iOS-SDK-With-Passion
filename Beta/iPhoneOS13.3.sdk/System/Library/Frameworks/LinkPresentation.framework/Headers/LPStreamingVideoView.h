/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPVideoView.h>

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingVideoView : LPVideoView

{
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    CDUnknownBlockType _readyForDisplayCallback;
    _Bool _hasCreatedVideoPlayerView;
    _Bool _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    _Bool _desiredPlayingState;
    float _desiredVolume;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)volume;
- (void)setVolume:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setPlaying:(_Bool)arg1;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (_Bool)shouldAutoPlay;
- (void)destroyPlayer;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetToPlaceholderView;
- (void)didFailToPlay;
- (void)createPlayerIfNeeded;
- (void)layoutComponentView;
- (void)fullScreenVideoDidPresent;
- (void)fullScreenVideoWillDismiss;
- (_Bool)releaseDecodingResourcesIfInactive;
- (_Bool)usesSharedAudioSession;
- (_Bool)shouldShowMuteButton;
- (id)createFullScreenVideoViewController;
- (_Bool)usesCustomFullScreenImplementation;
- (id)createVideoPlayerView;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
