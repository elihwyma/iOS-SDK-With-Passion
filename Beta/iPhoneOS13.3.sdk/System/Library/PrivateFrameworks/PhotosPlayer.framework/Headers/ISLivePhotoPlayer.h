/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBasePlayer.h>

@class ISLivePhotoVitalityFilter, NSDate, NSMutableSet, NSSet, NSString;

@interface ISLivePhotoPlayer : ISBasePlayer

{
    NSMutableSet *_playbackFilters;
    _Atomic int _fadeInRequestID;
    struct {
        _Bool scale;
        _Bool apertureMode;
    } _isValid;
    double _lastAppliedScale;
    _Bool _playingVitality;
    _Bool _hinting;
    _Bool _isAttemptingToPlayback;
    _Bool _immediatelyShowsPhotoWhenPlaybackEnds;
    _Bool _playbackAllowed;
    _Bool __settleAutomaticallyWhenReady;
    _Bool __shouldPrepareForVitalityWhenReady;
    _Bool __shouldPlayVitalityWhenReady;
    _Bool __shouldPrepareForHintWhenReady;
    ISLivePhotoVitalityFilter *_vitalityFilter;
    long long _currentPlaybackStyle;
    long long _targetReadiness;
    long long __styleToPlayWhenReady;
    NSDate *__vitalityTimeoutDate;
    CDStruct_1b6d18a9 _seekTime;
    CDStruct_e83c9415 _trimTimeRange;
}

@property (nonatomic, setter=_setCurrentPlaybackStyle:) long long currentPlaybackStyle;
@property (nonatomic, setter=_setStyleToPlayWhenReady:) long long _styleToPlayWhenReady;
@property (nonatomic, setter=_setIsAttemptingToPlayback:) _Bool isAttemptingToPlayback;
@property (nonatomic, setter=_setSettleAutomaticallyWhenReady:) _Bool _settleAutomaticallyWhenReady;
@property (nonatomic, setter=_setShouldPrepareForVitalityWhenReady:) _Bool _shouldPrepareForVitalityWhenReady;
@property (nonatomic, setter=_setShouldPlayVitalityWhenReady:) _Bool _shouldPlayVitalityWhenReady;
@property (nonatomic, setter=_setShouldPrepareForHintWhenReady:) _Bool _shouldPrepareForHintWhenReady;
@property (nonatomic, getter=isPlayingVitality, setter=_setPlayingVitality:) _Bool playingVitality;
@property (nonatomic, getter=isHinting, setter=_setHinting:) _Bool hinting;
@property (retain, nonatomic, setter=_setVitalityTimeoutDate:) NSDate *_vitalityTimeoutDate;
@property (nonatomic, readonly) _Bool _canPlayVitality;
@property (nonatomic, readonly) NSSet *playbackFilters;
@property (retain, nonatomic) ISLivePhotoVitalityFilter *vitalityFilter;
@property (nonatomic) _Bool immediatelyShowsPhotoWhenPlaybackEnds;
@property (nonatomic, getter=isPlaybackAllowed) _Bool playbackAllowed;
@property (nonatomic) long long targetReadiness;
@property (nonatomic, readonly) CDStruct_1b6d18a9 seekTime;
@property (nonatomic) CDStruct_e83c9415 trimTimeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)statusDidChange;
- (void)stopPlayback;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)didPerformChanges;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(_Bool)arg2;
- (void)setSeekTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopPlaybackAnimated:(_Bool)arg1;
- (void)playerItemDidChange;
- (void)playHintWhenReady;
- (void)prepareForHintWhenReady;
- (void)configurePlayerItem;
- (void)activeBehaviorDidChange;
- (double)videoWillPlayToPhotoInterval;
- (double)lastAppliedScale;
- (double)_photoTransitionDuration;
- (void)livePhotoSettleBehaviorDidFinish:(id)arg1;
- (void)addPlaybackFilter:(id)arg1;
- (void)removePlaybackFilter:(id)arg1;
- (void)_updatePlayerItemLoadingTarget;
- (void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(_Bool)arg2;
- (void)prepareForVitality;
- (void)playVitality;
- (id)_createVitalityBehavior;
- (void)_playIfNeeded;
- (void)_prepareForVitalityIfNeeded;
- (void)_handleVitalityFilterDidChange:(id)arg1;
- (void)_handlePlaybackFilterDidChange;
- (void)_invalidateApertureMode;
- (void)_updateApertureModeIfNeeded;
- (void)_invalidateScale;
- (void)_updateScaleIfNeeded;
- (void)setIsAttemptingToPlayback:(_Bool)arg1;
- (void)_configurePlaybackFilters;
- (void)_resetPlaybackFilters;
- (long long)_coalescedPlaybackFilterState;
- (double)_coalescedPlaybackFilterHintProgress;
- (void)_configurePlaybackFilter:(id)arg1;
- (void)_updateHintingAndVitality;
- (void)_fadeInAudio;
- (void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1;
- (void)livePhotoPlaybackBehaviorWillTransitionToPhoto:(id)arg1;
- (void)livePhotoPlaybackBehaviorDidFinish:(id)arg1;
- (void)vitalityBehaviorDidBeginPlaying:(id)arg1;
- (void)vitalityBehaviorDidEndPlaying:(id)arg1;
- (_Bool)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1;

@end
