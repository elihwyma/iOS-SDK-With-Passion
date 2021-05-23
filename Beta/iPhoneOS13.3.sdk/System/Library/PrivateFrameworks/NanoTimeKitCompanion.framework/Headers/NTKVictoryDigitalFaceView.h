/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NSString, NTKComplicationDisplayWrapperView, NTKUtilityComplicationFactory, UIColor;

@interface NTKVictoryDigitalFaceView : NTKFaceView

{
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    UIColor *_complicationForegroundColor;
    UIColor *_complicationPlatterColor;
    NTKComplicationDisplayWrapperView *_logoWrapperView;
    struct CGPoint _logoPlatterCenter;
    double _currentLogoPlatterXOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)layoutSubviews;
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
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (_Bool)_supportsTimeScrubbing;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_updateImageToBlur;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (double)_keylineEdgeGapForState:(long long)arg1;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (void)_setupLogoViews;
- (void)_logoTapped;
- (struct CGRect)_timeViewFrame;
- (void)_positionLogoPlatterView;
- (void)_applyColor:(id)arg1 platterColor:(id)arg2 toComplicationView:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 fromPlatterColor:(id)arg4 toPlatterColor:(id)arg5 fromBackgroundColor:(id)arg6 toBackgroundColor:(id)arg7 slot:(id)arg8;
- (double)_bottomComplicationAlphaForEditMode:(long long)arg1;
- (double)_logoPlatterAlphaForEditMode:(long long)arg1;
- (double)_logoPlatterXOffsetForEditMode:(long long)arg1;
- (void)victoryDigitalTimeViewDidChangeTime:(id)arg1;

@end
