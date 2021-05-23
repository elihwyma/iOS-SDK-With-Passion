/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class ARUIRingsView, NSMutableDictionary, NSString, NTKActivityDateComplicationLabel, NTKActivityDialView, NTKActivityFaceViewFactory, NTKDateComplicationController, NTKFaceViewTapControl, UILabel, UIView;

@interface NTKActivityAnalogFaceView : NTKAnalogFaceView

{
    NTKActivityFaceViewFactory *_faceViewFactory;
    ARUIRingsView *_ringsView;
    NTKDateComplicationController *_dateComplicationController;
    NTKActivityDateComplicationLabel *_dateComplicationLabel;
    UIView *_activityContainerView;
    UILabel *_moveLabel;
    UILabel *_exerciseLabel;
    UILabel *_standLabel;
    NTKActivityDialView *_dialView;
    NTKFaceViewTapControl *_tapToLaunchButton;
    NSMutableDictionary *_faceColorsToSchemes;
    _Bool _isDetailedDensity;
    double _contentScale;
    double _activityViewsAlpha;
    _Bool _wristRaiseAnimationPending;
    _Bool _snapshotContentViewsLoaded;
    double _lastMovePercentage;
    double _lastExercisePercentage;
    double _lastStandPercentage;
    double _innerDialViewScale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (void)_prewarmForDevice:(id)arg1;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setDataMode:(long long)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_verticalPaddingForStatusBar;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)slotUsesCurvedText:(id)arg1;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (struct CGPoint)_contentCenterOffset;
- (void)_loadChronoViewsIfNecessary;
- (void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(_Bool)arg3 ignoreScreenBlanked:(_Bool)arg4 animated:(_Bool)arg5;
- (void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_enumerateActivityLabels:(CDUnknownBlockType)arg1;
- (void)_loadRingsViewIfNecessary;
- (void)_loadDialIfNecessary;
- (void)_launchButtonPressed:(id)arg1;
- (id)_highlightImage;
- (void)_applyCurrentEntryModelAnimated:(_Bool)arg1;
- (void)_dateComplicationPressed:(id)arg1;
- (id)_newActivitySubviewWithTextColor:(id)arg1;
- (void)_addOrRemoveChronoViewsIfNecessary;
- (void)_enumerateChronoViews:(CDUnknownBlockType)arg1;
- (void)screenDidTurnOff;
- (void)screenWillTurnOn;
- (void)_configureAppropriateChronoDetail;
- (id)_cachedSchemeForFaceColor:(unsigned long long)arg1;
- (id)_accentColorForFaceColor:(unsigned long long)arg1;
- (void)_showChronoDetailByFraction:(double)arg1 fillRings:(_Bool)arg2;
- (double)_dialScaleForEditMode:(long long)arg1;
- (double)_ringAlphaForEditMode:(long long)arg1;
- (void)_setActivityViewsAlpha:(double)arg1 includeDateComplication:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_enumerateRingGroupControllers:(CDUnknownBlockType)arg1;
- (void)applyEntryModel:(id)arg1 animated:(_Bool)arg2;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;

@end
