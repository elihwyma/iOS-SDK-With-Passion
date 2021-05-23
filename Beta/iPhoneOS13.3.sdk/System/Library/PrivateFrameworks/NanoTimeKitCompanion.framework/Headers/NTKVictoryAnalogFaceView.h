/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NSString, NTKRoundedCornerOverlayView, NTKUtilityComplicationFactory, NTKVictoryAnalogBackgroundView;

@interface NTKVictoryAnalogFaceView : NTKAnalogFaceView

{
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKVictoryAnalogBackgroundView *_backgroundView;
    NTKRoundedCornerOverlayView *_cornerView;
    _Bool _isFullBleed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

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
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_configureTimeView:(id)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (_Bool)_wantsStatusBarIconShadow;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (_Bool)slotUsesCurvedText:(long long)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (void)_setFullBleed:(_Bool)arg1;
- (void)_applyComplicationViewColor:(id)arg1;
- (void)_applyColor:(id)arg1 toComplicationView:(id)arg2;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (void)logoTappedFromRect:(struct CGRect)arg1;
- (struct CGPoint)_contentCenterOffset;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (double)_keylineEdgeGapForState:(long long)arg1;

@end
