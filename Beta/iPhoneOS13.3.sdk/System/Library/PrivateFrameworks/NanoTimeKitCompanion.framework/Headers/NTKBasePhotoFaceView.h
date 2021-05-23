/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>

@class NPTOImageView, NSString, NSTimer, NTKAlbumEmptyView, NTKTaskScheduler, NTKUtilityComplicationFactory, UIColor, UILongPressGestureRecognizer, UIView;

@interface NTKBasePhotoFaceView : NTKBackgroundImageFaceView

{
    NPTOImageView *_posterImageView;
    UILongPressGestureRecognizer *_longPressGesture;
    _Bool _lastLongPressGestureWasCancelled;
    _Bool _paused;
    _Bool _updateWhenUnpausing;
    UIView *_blackView;
    _Bool _shouldPlayIntro;
    _Bool _shouldPlayOnWake;
    NSTimer *_playOnWakeTimeout;
    NTKTaskScheduler *_taskScheduler;
    _Bool _preLoadingPhotoOnSleep;
    _Bool _preloadedPhotoOnSleep;
    long long _previousDataMode;
    unsigned long long _dateAlignment;
    NTKAlbumEmptyView *_noPhotosView;
    UIView *_cornerView;
    UIColor *_foregroundColor;
    UIColor *_shadowColor;
    UIView *_currentGradientView;
    unsigned int _isContentLoaded:1;
    unsigned int _isInteractive:1;
    unsigned int _isUsingLegibility:1;
    NTKUtilityComplicationFactory *_complicationFactory;
    _Bool _noPhotosViewVisible;
}

@property (nonatomic, readonly) unsigned long long dateAlignment;
@property (nonatomic, readonly) UIView *cornerView;
@property (nonatomic, readonly) _Bool isInteractive;
@property (nonatomic, readonly) NPTOImageView *posterImageView;
@property (nonatomic, getter=isNoPhotosViewVisible) _Bool noPhotosViewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_temporaryDirectory;
+ (id)_analyzeSidecarPhoto:(id)arg1 dateAlignment:(unsigned long long)arg2;
+ (id)_analysisForPhoto:(id)arg1 dateAlignment:(unsigned long long)arg2;
+ (id)_saveSidecarPhotoAnalysis:(id)arg1;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)_handleLongPress:(id)arg1;
- (_Bool)_screenOn;
- (void)_animateIn;
- (void)_playVideo;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect)arg2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (_Bool)_usesCustomZoom;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_setDateAttributes:(id)arg1 animated:(_Bool)arg2;
- (void)_invalidatePreloadedPhoto;
- (_Bool)_preloadNextPhoto;
- (void)_applyFrozen;
- (void)_configureComplicationFactory;
- (void)_unpauseFromSwitcher;
- (double)_timeTravelYAdjustment;
- (void)_layoutForegroundContainerView;
- (void)_applyAlignment;
- (void)_setComplicationsHidden:(_Bool)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_updatePaused;
- (void)_applySlow;
- (void)_prepareForOrb;
- (void)_cleanupAfterOrb:(_Bool)arg1;
- (void)_playPhoto;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_playStill;
- (void)_hideCurtainView;
- (void)_scheduleSleepPreloadTask;
- (void)_handleScreenWake;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (_Bool)_timeLabelUsesLegibility;
- (id)_newGradientViewWithColor:(id)arg1;
- (void)_applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1;
- (_Bool)_curtainViewVisible;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (void)imageViewDidBeginPlaying:(id)arg1;
- (void)imageViewDidEndPlaying:(id)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (id)_selectedContentView;
- (void)_showCurtainView;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;

@end
