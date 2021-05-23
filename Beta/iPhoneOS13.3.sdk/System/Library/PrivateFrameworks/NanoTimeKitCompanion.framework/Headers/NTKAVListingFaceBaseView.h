/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAVFaceBaseView.h>

@class NSTimer, NTKDelayedBlock, NTKTaskScheduler, UIView;

@protocol NTKAVListing;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView

{
    _Bool _updateWhenUnpausing;
    NTKTaskScheduler *_taskScheduler;
    _Bool _preLoadingVideoOnSleep;
    _Bool _preLoadedVideoOnSleep;
    _Bool _shouldPlayOnWake;
    _Bool _isPauseLockedout;
    _Bool _isPaused;
    _Bool _shouldPause;
    NSTimer *_playOnWakeTimeout;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_pauseLockoutBlock;
    UIView *_blackView;
    long long _previousDataMode;
    _Bool _shouldChangeVariantForScreenWake;
    _Bool _contentUnloadedForFaceSwiping;
    id <NTKAVListing> _currentListing;
}

@property (retain, nonatomic) id <NTKAVListing> currentListing;
@property (nonatomic) _Bool shouldChangeVariantForScreenWake;
@property (nonatomic) _Bool contentUnloadedForFaceSwiping;
@property (nonatomic, readonly) _Bool paused;
@property (nonatomic, readonly) _Bool shouldPause;

- (void)dealloc;
- (void)_reset;
- (void)_playVideo;
- (void)_cancelAllTasks;
- (id)_curtainView;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_prepareForEditing;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_applyFrozen;
- (void)_unpauseFromSwitcher;
- (void)_updatePaused;
- (void)_applySlow;
- (void)_prepareForOrb;
- (void)_cleanupAfterOrb:(_Bool)arg1;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_hideCurtainView;
- (void)_handleScreenWake;
- (_Bool)_timeLabelUsesLegibility;
- (_Bool)_curtainViewVisible;
- (void)_showCurtainView;
- (void)_updateImageToBlur;
- (id)_nextListing;
- (void)_loadVideoForListing;
- (void)_resetVideoForListing;
- (_Bool)_changeCurrentListing;
- (void)_performPreloadVideoTask;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_cancelDelayedPlayback;
- (void)_cancelPauseLockout;
- (void)faultInFaceContentSkippedDuringSwiping;
- (void)_queuePreloadVideoTask;
- (id)_onDeckPosterImageView;
- (void)_selectDefaultListing;
- (void)_pauseImmediately;
- (void)_playQueuedUpVideo;
- (void)_playNextVideo;
- (void)_activatePauseLockout;
- (void)_transitionToPosterView:(id)arg1;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_needsVignette;
- (id)_complicationFlickerWorkgroundAnimationWithDuration:(double)arg1 applier:(CDUnknownBlockType)arg2;
- (void)_playNextVideoAfterDelay:(double)arg1;
- (void)_handleFaceStyleDidChange;

@end
