/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NSString, NTKBlackcombBackgroundView, NTKBlackcombDialColorPalette, NTKFullscreenSubdialComplicationFactory, UIImageView, UIView;

@interface NTKBlackcombFaceView : NTKAnalogFaceView

{
    NTKFullscreenSubdialComplicationFactory *_complicationFactory;
    unsigned long long _faceColor;
    NTKBlackcombDialColorPalette *_dialColorPalette;
    UIView *_backgroundContainerView;
    NTKBlackcombBackgroundView *_backgroundView;
    UIImageView *_editingNotchBackgroundView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)uiSensitivity;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void)layoutSubviews;
- (void)_setupBackgroundView;
- (long long)_editMode;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(_Bool)arg1;
- (void)_configureForEditMode:(long long)arg1;
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
- (void)_loadLayoutRules;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureTimeView:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (id)_pickerMaskForSlot:(id)arg1;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (_Bool)_wantsStatusBarIconShadow;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (_Bool)_wantsConstantSpeedZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)_reorderSwitcherSnapshotView;
- (void)_prepareForSnapshotting;
- (_Bool)_isComplicationSlotInsideDial:(id)arg1;
- (_Bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (id)_platterTextColorForEditMode:(long long)arg1 color:(unsigned long long)arg2;
- (void)setFaceColor:(unsigned long long)arg1;
- (void)_updateHandsColors;
- (void)_forceUpdateColors;
- (void)_removeBackgroundView;
- (void)_updateTickLengths;
- (_Bool)_backgroundViewShouldUseLongSideTicks;
- (void)setBlackcombDialColor:(unsigned long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromBlackcombDialColor:(unsigned long long)arg2 toBlackcombDialColor:(unsigned long long)arg3;
- (void)_applyComplicationTransitionFraction:(double)arg1 fromBlackcombDialColor:(unsigned long long)arg2 toBlackcombDialColor:(unsigned long long)arg3;
- (id)_renderBackgroundViewSwatchImageForBlackcombDialColor:(unsigned long long)arg1;

@end
