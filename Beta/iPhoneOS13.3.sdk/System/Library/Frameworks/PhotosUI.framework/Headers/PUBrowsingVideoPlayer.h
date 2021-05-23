/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/Swift-Protocol.h>

@class AVPlayerItem, ISWrappedAVPlayer, NSError, NSHashTable, NSMutableSet, NSString, PUBrowsingVideoPlayerChange, PUMediaProvider, PXUpdater, PXVideoSession;

@protocol PUDisplayAsset;

@interface PUBrowsingVideoPlayer : PUViewModel <Swift>

{
    PXUpdater *_updater;
    NSMutableSet *_pauseReasons;
    CDStruct_1b6d18a9 _pendingSeekTime;
    CDUnknownBlockType _pendingSeekCompletionHandler;
    _Bool _isPlayingAllowed;
    _Bool _alwaysRespectsMuteSwitch;
    _Bool _isMuted;
    _Bool _isPlayerLoadingAllowed;
    _Bool _isActivated;
    _Bool __isUpdatingAudioSession;
    _Bool _shouldLoadVideoSession;
    float _volume;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    long long _desiredPlayState;
    long long _audioStatus;
    PXVideoSession *_videoSession;
    AVPlayerItem *_playerItem;
    NSError *_error;
    NSMutableSet *__playerLoadingDisablingReasons;
    NSMutableSet *__playingDisablingReasons;
    unsigned long long _nextPlayerLoadingEnabledUpdateID;
    NSHashTable *__timeObservers;
    CDStruct_1b6d18a9 _desiredSeekTime;
}

@property (nonatomic, readonly) PUBrowsingVideoPlayerChange *currentChange;
@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic, setter=_setPlayerItem:) AVPlayerItem *playerItem;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (nonatomic, setter=_setPlayerLoadingAllowed:) _Bool isPlayerLoadingAllowed;
@property (retain, nonatomic, setter=_setPlayerLoadingDisablingReasons:) NSMutableSet *_playerLoadingDisablingReasons;
@property (nonatomic, setter=_setPlayingAllowed:) _Bool isPlayingAllowed;
@property (retain, nonatomic, setter=_setPlayingDisablingReasons:) NSMutableSet *_playingDisablingReasons;
@property (nonatomic, setter=_setUpdatingAudioSession:) _Bool _isUpdatingAudioSession;
@property (nonatomic, setter=_setAudioStatus:) long long audioStatus;
@property (nonatomic) unsigned long long nextPlayerLoadingEnabledUpdateID;
@property (nonatomic) _Bool shouldLoadVideoSession;
@property (nonatomic, readonly) NSHashTable *_timeObservers;
@property (retain, nonatomic) id <PUDisplayAsset> asset;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic, readonly) _Bool isPlaybackDesired;
@property (nonatomic, readonly) long long playState;
@property (nonatomic, readonly) _Bool isStalled;
@property (nonatomic) _Bool alwaysRespectsMuteSwitch;
@property (nonatomic, readonly) _Bool isPlayable;
@property (nonatomic) float volume;
@property (nonatomic, setter=setMuted:) _Bool isMuted;
@property (nonatomic, readonly) ISWrappedAVPlayer *avPlayer;
@property (nonatomic, readonly) _Bool isAtBeginning;
@property (nonatomic, readonly) _Bool isAtEnd;
@property (nonatomic, readonly) CDStruct_1b6d18a9 currentTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic) CDStruct_1b6d18a9 desiredSeekTime;
@property (nonatomic, setter=setActivated:) _Bool isActivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateAudioSessionCategory;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didPerformChanges;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)_updateVideoSession;
- (void)_updatePlayerVolume;
- (void)videoSessionAudioSessionOutputVolumeDidChange:(id)arg1 fromVolume:(float)arg2 toVolume:(float)arg3;
- (void)videoSessionDidPlayToEnd:(id)arg1;
- (id)newViewModelChange;
- (void)invalidateExistingPlayer;
- (void)assetContentDidChange;
- (void)setPlayerLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_updatePlayerLoadingAllowedWithUpdateID:(unsigned long long)arg1;
- (void)beginPauseForReason:(id)arg1;
- (void)endPauseForReason:(id)arg1;
- (void)setPlayingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)rewindExistingPlayer;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (void)registerTimeObserver:(id)arg1;
- (void)unregisterTimeObserver:(id)arg1;
- (void)_handleWillResignActiveNotification:(id)arg1;
- (void)_handleDidBecomeActiveNotification:(id)arg1;
- (void)_updateVideoSessionDesiredPlayState;
- (void)_performPendingSeekIfNeeded;

@end
