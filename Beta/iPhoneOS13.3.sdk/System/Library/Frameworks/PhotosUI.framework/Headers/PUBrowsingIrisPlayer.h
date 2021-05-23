/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class ISLivePhotoPlayer, ISWrappedAVPlayer, NSArray, NSMutableSet, NSString, PHLivePhoto, PUMediaProvider;

@protocol PUDisplayAsset;

@interface PUBrowsingIrisPlayer : PUViewModel

{
    struct {
        _Bool livePhoto;
        _Bool playerContent;
        _Bool playerLoadingTarget;
        _Bool playerItemScrubbingPhotoTime;
        _Bool playing;
    } _isValid;
    id _videoPeriodicObserver;
    _Bool _hasPendingVitalityHint;
    _Bool _livePhotoLoadingAllowed;
    _Bool _isLivePhotoPlaybackAllowed;
    _Bool _activated;
    _Bool _playing;
    int __livePhotoRequestID;
    ISLivePhotoPlayer *_player;
    CDUnknownBlockType durationChangeHandler;
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    ISWrappedAVPlayer *_avPlayer;
    long long _loadingTarget;
    NSArray *_currentlyDisplayedTimes;
    NSMutableSet *__livePhotoLoadingDisablingReasons;
    NSMutableSet *__livePhotoPlaybackDisablingReasons;
    long long __currentUnloadRequestId;
    PHLivePhoto *__livePhoto;
    long long __livePhotoRequestState;
    CDUnknownBlockType __seekCompletionHandler;
    CDStruct_1b6d18a9 _scrubbingPhotoTime;
}

@property (retain, nonatomic, setter=_setAvPlayer:) ISWrappedAVPlayer *avPlayer;
@property (retain, nonatomic) NSMutableSet *_livePhotoLoadingDisablingReasons;
@property (retain, nonatomic) NSMutableSet *_livePhotoPlaybackDisablingReasons;
@property (nonatomic, setter=_setCurrentUnloadRequestId:) long long _currentUnloadRequestId;
@property (retain, nonatomic, setter=_setLivePhoto:) PHLivePhoto *_livePhoto;
@property (nonatomic, getter=isLivePhotoLoadingAllowed, setter=_setLivePhotoLoadingAllowed:) _Bool livePhotoLoadingAllowed;
@property (nonatomic, setter=_setLivePhotoRequestState:) long long _livePhotoRequestState;
@property (nonatomic, setter=_setLivePhotoRequestID:) int _livePhotoRequestID;
@property (copy, nonatomic, setter=_setCurrentlyDisplayedTimes:) NSArray *currentlyDisplayedTimes;
@property (nonatomic, getter=isPlaying, setter=_setPlaying:) _Bool playing;
@property (copy, nonatomic, setter=_setSeekCompletionHandler:) CDUnknownBlockType _seekCompletionHandler;
@property (retain, nonatomic) id <PUDisplayAsset> asset;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) ISLivePhotoPlayer *player;
@property (nonatomic, readonly) _Bool hasPendingVitalityHint;
@property (nonatomic) long long loadingTarget;
@property (nonatomic, readonly) _Bool isLivePhotoPlaybackAllowed;
@property (nonatomic, getter=isActivated) _Bool activated;
@property (nonatomic, readonly) CDStruct_1b6d18a9 scrubbingPhotoTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 currentPhototime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 nonScrubbingPhotoTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 currentVideoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;

- (id)init;
- (void)dealloc;
- (_Bool)_needsUpdate;
- (struct CGSize)_targetSize;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)cancelPendingSeeks;
- (id)playerItem;
- (long long)_contentMode;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)playerStatus;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)debugDetailedDescription;
- (float)playRate;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)newViewModelChange;
- (id)currentChange;
- (void)playVitalityHint;
- (void)didPlayVitalityHint;
- (void)setLivePhotoPlaybackDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setLivePhotoPlaybackAllowed:(_Bool)arg1;
- (void)setScrubbingPhotoTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLivePhotoLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (id)_playerCreateIfNeeded:(_Bool)arg1;
- (id)playerCreateIfNeeded;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_cancelAllRequests;
- (_Bool)_isContentLoadingRequestInProgress;
- (void)unloadLivePhoto;
- (void)_invalidateLivePhoto;
- (void)_updateLivePhotoIfNeeded;
- (void)_invalidatePlayerContent;
- (void)_updatePlayerContentIfNeeded;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_invalidatePlayerItemScrubbingPhotoTime;
- (void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;
- (void)_setAVPlayer:(id)arg1;
- (void)_handlePeriodicObserverWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_invalidatePlaying;
- (void)_updatePlayingIfNeeded;
- (void)_handlePlaybackStyleChanged;
- (id)avPlayerForVideoScrubberController:(id)arg1;

@end
