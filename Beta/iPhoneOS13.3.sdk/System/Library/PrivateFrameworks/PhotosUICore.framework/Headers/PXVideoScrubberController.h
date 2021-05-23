/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class AVPlayerItem, PXScrubberSeekRequest;

@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;

@interface PXVideoScrubberController : PXObservable

{
    id _playerObserver;
    _Bool _needsUpdate;
    _Bool _avPlayerCurrentTimeNeedsUpdate;
    _Bool _avPlayerDurationNeedsUpdate;
    struct {
        _Bool respondsToDidUpdate;
        _Bool respondsToLengthForDuration;
        _Bool respondsToDesiredSeekTime;
    } _videoScrubberDelegateFlags;
    struct {
        _Bool respondsToWillBeginSeeking;
        _Bool respondsToDidEndSeeking;
    } _targetFlags;
    id <PXVideoScrubberControllerDelegate> _delegate;
    id <PXVideoScrubberControllerTarget> _target;
    double _estimatedDuration;
    double __playheadTime;
    PXScrubberSeekRequest *__pendingSeekRequest;
    PXScrubberSeekRequest *__activeSeekRequest;
    CDStruct_1b6d18a9 __avPlayerCurrentTime;
    CDStruct_1b6d18a9 __avPlayerDuration;
}

@property (nonatomic, setter=_setPlayheadTime:) double _playheadTime;
@property (retain, nonatomic, setter=_setPendingSeekRequest:) PXScrubberSeekRequest *_pendingSeekRequest;
@property (retain, nonatomic, setter=_setActiveSeekRequest:) PXScrubberSeekRequest *_activeSeekRequest;
@property (nonatomic, setter=_setAvPlayerCurrentTime:) CDStruct_1b6d18a9 _avPlayerCurrentTime;
@property (nonatomic, setter=_setAvPlayerDuration:) CDStruct_1b6d18a9 _avPlayerDuration;
@property (weak, nonatomic) id <PXVideoScrubberControllerDelegate> delegate;
@property (nonatomic, readonly) id <PXVideoScrubberControllerTarget> target;
@property (nonatomic, readonly) double estimatedDuration;
@property (nonatomic, readonly) double length;
@property (nonatomic) double playheadProgress;
@property (nonatomic, readonly) AVPlayerItem *currentPlayerItem;
@property (nonatomic, readonly) float playRate;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (double)_duration;
- (void)endSeeking;
- (void)_addObservers;
- (id)mutableChangeObject;
- (void)_updateIfNeeded;
- (void)_removeObservers;
- (void)_seekToTime:(double)arg1;
- (id)initWithTarget:(id)arg1 estimatedDuration:(double)arg2;
- (void)_setPlayheadProgress:(double)arg1 andSeekVideoPlayer:(_Bool)arg2;
- (void)beginSeeking;
- (void)_updateSeeking;
- (void)_seekRequest:(id)arg1 didFinish:(_Bool)arg2;
- (void)_handleTimeoutCallbackForSeekRequest:(id)arg1;
- (void)_playerDidChange:(id)arg1;
- (void)_playerItemDurationDidChange;
- (void)_playerItemDidChange;
- (void)_playerStatusDidChange;
- (double)_timeForProgress:(double)arg1;
- (double)_progressForTime:(double)arg1;
- (double)_lengthForDuration:(double)arg1;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_invalidateAvPlayerDuration;
- (void)_updateAvPlayerDurationIfNeeded;

@end
