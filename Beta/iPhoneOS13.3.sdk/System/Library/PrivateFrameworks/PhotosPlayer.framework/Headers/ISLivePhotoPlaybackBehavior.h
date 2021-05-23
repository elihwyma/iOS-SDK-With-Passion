/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoPlaybackBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoPlaybackBehavior : ISBehavior

{
    struct {
        _Bool respondsToDidFinish;
        _Bool respondsToDidBeginPlaying;
    } _delegateFlags;
    _Bool _immediatelyShowsPhotoWhenPlaybackEnds;
    _Bool _hasBlurryTransition;
    _Bool _isTransitioningToPhoto;
    _Bool __videoReadyToPlay;
    _Bool __preparing;
    double _photoTransitionDuration;
    long long __currentPlaybackID;
    long long __readyToPlayPlaybackID;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_e83c9415 _playbackTimeRange;
}

@property (nonatomic, setter=_setCurrentPlaybackID:) long long _currentPlaybackID;
@property (nonatomic, setter=_setReadyToPlayPlaybackID:) long long _readyToPlayPlaybackID;
@property (nonatomic, getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:) _Bool _videoReadyToPlay;
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool _preparing;
@property (nonatomic, readonly) CDStruct_1b6d18a9 keyTime;
@property (nonatomic, readonly) CDStruct_e83c9415 playbackTimeRange;
@property (nonatomic, readonly) double photoTransitionDuration;
@property (nonatomic, readonly) _Bool immediatelyShowsPhotoWhenPlaybackEnds;
@property (nonatomic, readonly) _Bool hasBlurryTransition;
@property (nonatomic, readonly) _Bool isTransitioningToPhoto;
@property (weak, nonatomic) id <ISLivePhotoPlaybackBehaviorDelegate> delegate;

- (long long)behaviorType;
- (void)startPlayback;
- (void)activeDidChange;
- (void)videoDidPlayToEnd;
- (void)videoWillPlayToEnd;
- (void)_handleDidSeekToBeginning;
- (void)_didFinishPreparing;
- (id)initWithInitialLayoutInfo:(id)arg1 keyTime:(CDStruct_1b6d18a9)arg2 playbackTimeRange:(CDStruct_e83c9415)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(_Bool)arg5 hasBlurryTransition:(_Bool)arg6;
- (void)_handleDidFinish;
- (void)_prepareVideoForPlaybackIfNeeded;
- (void)_prerollWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleDidFinishPreroll;
- (void)_startPlaybackWithPlaybackID:(long long)arg1;
- (void)_transitionToVideoWithPlaybackID:(long long)arg1;
- (void)_showVideoWithPlaybackID:(long long)arg1;

@end
