/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, NSString, PLMoviePlayerView, PLTVOutWindow;

@protocol PLMoviePlayerControllerDelegate;

@interface PLMoviePlayerController : NSObject

{
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    PLMoviePlayerView *_view;
    PLTVOutWindow *_tvOutWindow;
    _Bool _hasPendingTime;
    double _pendingTime;
    unsigned long long _pendingTimeSnapOption;
    _Bool _forceUpdateCurrentTime;
    _Bool _isExternalPlayback;
    _Bool _exited;
    double _lastSetCurrentTimeTime;
    _Bool _isSeeking;
    unsigned long long _backgroundTaskId;
    _Bool _audioSessionActive;
    NSString *_originalAudioCategory;
    _Bool _TVOutEnabled;
    _Bool _forceDisableTVOut;
    _Bool _isPreparedForPlayback;
    _Bool _isActiveController;
    id <PLMoviePlayerControllerDelegate> _delegate;
    unsigned long long _bufferingState;
    unsigned long long _playbackState;
}

@property (nonatomic) _Bool TVOutEnabled;
@property (nonatomic, setter=_setForceDisableTVOut:) _Bool forceDisableTVOut;
@property (nonatomic) _Bool isActiveController;
@property (nonatomic) id <PLMoviePlayerControllerDelegate> delegate;
@property (retain, nonatomic, readonly) AVPlayer *player;
@property (retain, nonatomic, readonly) PLMoviePlayerView *view;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic, readonly) unsigned long long playbackState;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double currentTime;
@property (nonatomic, readonly) unsigned long long bufferingState;
@property (nonatomic, readonly) _Bool isPreparedForPlayback;

+ (_Bool)_isStreamableAsset:(id)arg1;
+ (id)AVAssetURLWithPath:(id)arg1;
+ (_Bool)_isNetworkSupportedPath:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_asset;
- (void)play;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (long long)externalPlaybackType;
- (_Bool)_allowsExternalPlayback;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (id)_playerKeysToObserve;
- (void)tearDownTVOutWindow;
- (void)_setupTVOutWindow;
- (void)_tearDownTVOutWindow;
- (void)_updateBackgroundViewInformation;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateTVOutEnabled;
- (void)_setupPlayer;
- (void)_tearDownPlayer;
- (void)setPlayerItem:(id)arg1 startTime:(double)arg2;
- (void)_setPlayerItem:(id)arg1;
- (void)_loadAsset:(id)arg1;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_dispatchOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)_playerRateDidChange:(id)arg1;
- (void)playFromBeginning;
- (void)playDueToEnoughData;
- (void)pauseDueToInsufficientData;
- (void)resetPlayer;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 forceUpdate:(_Bool)arg3;
- (void)_updateFromPendingTime;
- (void)_delayedUpdateFromPendingTime;
- (void)_streamBufferFull;
- (void)_streamLikelyToKeepUp;
- (void)_streamRanDry;
- (void)_streamUnlikelyToKeepUp;
- (void)_setPlaybackState:(unsigned long long)arg1;
- (void)_pausePlaybackForNotification;
- (void)_willSuspendNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (_Bool)videoOutActive;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_displayVideoView;
- (_Bool)isExternalPlayback;
- (void)requestToBecomeActiveController;
- (void)requestToResignAsActiveController;
- (void)didBecomeActiveController;
- (void)willResignAsActiveController;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_playbackFailedWithError:(id)arg1;
- (void)_exitPlayer:(int)arg1;

@end
