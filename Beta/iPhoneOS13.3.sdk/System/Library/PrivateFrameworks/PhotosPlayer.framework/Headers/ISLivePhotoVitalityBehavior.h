/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoVitalityBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityBehavior : ISBehavior

{
    id _easeOutObserver;
    id _transitionToPhotoObserver;
    _Bool _pauseDuringTransition;
    _Bool _prepared;
    _Bool _playing;
    _Bool _playingBeyondPhoto;
    _Bool _preparing;
    _Bool __shouldPlayAfterPreparation;
    float _playRate;
    double _photoTransitionDuration;
    unsigned long long _assetOptions;
    CDStruct_1b6d18a9 _playbackEndTime;
    CDStruct_1b6d18a9 _playDuration;
}

@property (nonatomic, getter=isPrepared, setter=_setPrepared:) _Bool prepared;
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool preparing;
@property (nonatomic, getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:) _Bool playingBeyondPhoto;
@property (nonatomic, setter=_setShouldPlayAfterPreparation:) _Bool _shouldPlayAfterPreparation;
@property (nonatomic, readonly) CDStruct_1b6d18a9 playbackEndTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 playDuration;
@property (nonatomic, readonly) double photoTransitionDuration;
@property (nonatomic, readonly) _Bool pauseDuringTransition;
@property (nonatomic, readonly) unsigned long long assetOptions;
@property (nonatomic, readonly) float playRate;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (weak, nonatomic) id <ISLivePhotoVitalityBehaviorDelegate> delegate;

- (void)dealloc;
- (long long)behaviorType;
- (void)_startVideoPlayback;
- (void)activeDidChange;
- (void)_handleDidFinishPreroll;
- (void)prepareForVitality;
- (void)playVitality;
- (id)initWithInitialLayoutInfo:(id)arg1 playbackEndTime:(CDStruct_1b6d18a9)arg2 playDuration:(CDStruct_1b6d18a9)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(_Bool)arg6 assetOptions:(unsigned long long)arg7;
- (void)_startObservingVideo;
- (void)_stopObservingVideo;
- (void)_handleDidSeekToStartTime;
- (void)_didReachTransitionTime;
- (void)_didReachTransitionToPhotoTime;
- (void)cancelSettleToPhoto;

@end
