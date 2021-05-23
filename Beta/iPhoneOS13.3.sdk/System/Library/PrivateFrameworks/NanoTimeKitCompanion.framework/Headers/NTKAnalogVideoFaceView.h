/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NSString, NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKEditOptionTransitioningView, NTKFaceViewTapControl, NTKVideoPlayerView, UIColor, UIView;

@interface NTKAnalogVideoFaceView : NTKAnalogFaceView

{
    long long _previousDataMode;
    UIColor *_complicationColor;
    NTKFaceViewTapControl *_tapToLaunchButton;
    UIView *_backgroundContainerView;
    NTKEditOptionTransitioningView *_transitioningView;
    NTKVideoPlayerView *_videoPlayerView;
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    struct CGSize _videoDialSize;
}

@property (retain, nonatomic) NTKVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) NTKColorCircularUtilitarianFaceViewComplicationFactory *faceViewComplicationFactory;
@property (nonatomic) struct CGSize videoDialSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setDataMode:(long long)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_detachedComplicationDisplays;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applyFrozen;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_applySlow;
- (void)_prepareForOrb;
- (void)_cleanupAfterOrb:(_Bool)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_configureTimeView:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (_Bool)slotUsesCurvedText:(id)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (struct CGPoint)_contentCenterOffset;
- (void)handleScreenBlanked;
- (_Bool)_supportsUnadornedSnapshot;
- (_Bool)shouldFadeIncomingView;
- (id)imageForEditOption:(id)arg1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (id)_complicationsForegroundColor;
- (id)_complicationsPlatterColor;
- (void)_faceLibraryDismissed;
- (void)setupVideoPlayerView;
- (void)faceViewWasTapped:(id)arg1;
- (id)_tapHighlightImage;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (void)_tearDownTransitioningView:(_Bool)arg1;
- (_Bool)_shouldAnimateComplicationsOnTap;
- (id)_complicationsTapColor;
- (void)_faceViewWasTapped;
- (id)_complicationsCompanionForegroundColor;
- (void)_setupTransitioningViewIfNeeded:(_Bool)arg1;
- (struct UIEdgeInsets)_insetsForDialSize:(struct CGSize)arg1;
- (void)videoDidFinishPlayingToEnd;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)customizeFaceViewForListing:(id)arg1 changeEvent:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_setVideoPlayerDataSource:(id)arg1;
- (id)_complicationsEditingColor;
- (void)_transformVideoPlayerView:(unsigned long long)arg1;

@end
