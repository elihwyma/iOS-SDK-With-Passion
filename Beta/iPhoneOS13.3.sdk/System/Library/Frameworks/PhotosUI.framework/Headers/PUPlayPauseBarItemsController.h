/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class ISWrappedAVPlayer, NSHashTable, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUPlayPauseBarItemsControllerChange;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPlayPauseBarItemsController : NSObject

{
    _Bool __isPerformingChanges;
    _Bool __isUpdating;
    _Bool __needsUpdateVideoPlayer;
    _Bool __needsUpdatePlayPauseState;
    _Bool __needsUpdateAVPlayer;
    _Bool __needsUpdateCurrentPlaybackTimeAndDuration;
    PUPlayPauseBarItemsControllerChange *__currentChange;
    PUBrowsingViewModel *_viewModel;
    long long _playPauseState;
    NSObject<OS_dispatch_queue> *__observerQueue;
    NSHashTable *__changeObservers;
    PUBrowsingVideoPlayer *__videoPlayer;
    ISWrappedAVPlayer *__avPlayer;
    id __timeObservationToken;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_observerQueue;
@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) _Bool _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) _Bool _needsUpdateVideoPlayer;
@property (nonatomic, setter=_setNeedsUpdatePlayPauseState:) _Bool _needsUpdatePlayPauseState;
@property (nonatomic, setter=_setNeedsUpdateAVPlayer:) _Bool _needsUpdateAVPlayer;
@property (nonatomic, setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:) _Bool _needsUpdateCurrentPlaybackTimeAndDuration;
@property (retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, setter=_setPlayPauseState:) long long playPauseState;
@property (retain, nonatomic, setter=_setAVPlayer:) ISWrappedAVPlayer *_avPlayer;
@property (retain, nonatomic, setter=_setTimeObservationToken:) id _timeObservationToken;
@property (nonatomic, setter=_setCurrentPlaybackTime:) CDStruct_1b6d18a9 currentPlaybackTime;
@property (nonatomic, setter=_setPlaybackDuration:) CDStruct_1b6d18a9 playbackDuration;
@property (nonatomic, readonly) PUPlayPauseBarItemsControllerChange *_currentChange;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_needsUpdate;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_publishChanges;
- (void)_updateIfNeeded;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_invalidateVideoPlayer;
- (void)_updateVideoPlayerIfNeeded;
- (void)_startObservingAVPlayer;
- (void)_stopObservingAVPlayer;
- (void)_invalidatePlayPauseState;
- (void)_updatePlayPauseStateIfNeeded;
- (void)_invalidateAVPlayer;
- (void)_updateAVPlayerIfNeeded;
- (void)_invalidateCurrentPlaybackTimeAndDuration;
- (void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
- (void)_handleViewModel:(id)arg1 didChange:(id)arg2;

@end
