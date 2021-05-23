/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

@class NSString, NTKEditOption, UIImageView, UIView;

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView

{
    NTKEditOption *_editOptionFrom;
    UIView *_transitionViewFrom;
    NTKEditOption *_editOptionTo;
    UIView *_transitionViewTo;
    UIView *_zoomingContainerView;
    UIView *_transitionDimmingView;
    _Bool _shouldAdjustLayoutForTimeTravel;
    UIView *_timeTravelDimmingOverlayView;
    UIView *_selectedContentView;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    UIView *_backgroundContainerView;
    UIView *_zoomMaskView;
    UIImageView *_zoomVignette;
    UIView *_borrowedCircleView;
    UIView *_borrowedTimeView;
    struct CGPoint _timeViewZoomEndingCenter;
    struct CGRect _vignetteZoomStartingBounds;
    struct CGRect _maskZoomStartingBounds;
}

@property (retain, nonatomic) UIView *zoomMaskView;
@property (retain, nonatomic) UIImageView *zoomVignette;
@property (nonatomic) struct CGPoint timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect vignetteZoomStartingBounds;
@property (nonatomic) struct CGRect maskZoomStartingBounds;
@property (retain, nonatomic) UIView *borrowedCircleView;
@property (retain, nonatomic) UIView *borrowedTimeView;
@property (nonatomic, readonly) UIView *backgroundContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setViewMode:(long long)arg1;
- (id)_animationImageView;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect)arg2;
- (_Bool)_needsForegroundContainerView;
- (_Bool)_supportsTimeScrubbing;
- (_Bool)_usesCustomZoom;
- (void)_applyShowContentForUnadornedSnapshot;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)_timeTravelYAdjustment;
- (_Bool)_shouldAdjustLayoutForTimeTravel;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (_Bool)_timeLabelUsesLegibility;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (id)_selectedContentView;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_wantsTimeTravelStatusModule;
- (_Bool)_needsVignette;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (id)_viewForEditOption:(id)arg1;
- (void)_applyForegroundZoomAlpha:(double)arg1;
- (void)_beginTransitionToOption;
- (_Bool)_shouldFadeToTransitionView;
- (void)_applyScaleTransform:(id)arg1;
- (id)_updateFontInStyle:(id)arg1 monospace:(_Bool)arg2;
- (double)_parallaxScaleFactor;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_didTransitionToOptionView:(id)arg1;
- (void)_removeAllSubviewsFrom:(id)arg1;

@end
