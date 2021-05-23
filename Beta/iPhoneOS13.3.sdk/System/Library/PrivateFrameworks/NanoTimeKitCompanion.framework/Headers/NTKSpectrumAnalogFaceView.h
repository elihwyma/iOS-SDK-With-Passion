/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class CLKUIQuadView, NSString, NTKSpectrumAnalogDialView, NTKSpectrumConicQuad, NTKUtilityComplicationFactory, NTKWhistlerAnalogFaceViewComplicationFactory, UIView;

@interface NTKSpectrumAnalogFaceView : NTKAnalogFaceView

{
    NTKWhistlerAnalogFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKSpectrumAnalogDialView *_dialView;
    NTKSpectrumConicQuad *_conicActiveQuad;
    NTKSpectrumConicQuad *_conicInactiveQuad;
    CLKUIQuadView *_conicQuadView;
    UIView *_cornerView;
    unsigned long long _shape;
    unsigned long long _style;
    unsigned long long _color;
    unsigned int _isMasking:1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)uiSensitivity;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateStyle;
- (void)_setColor:(unsigned long long)arg1;
- (void)_setStyle:(unsigned long long)arg1;
- (void)_updateMasking;
- (void)setDataMode:(long long)arg1;
- (void)_updateColor;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_updateShape;
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
- (void)_loadLayoutRules;
- (_Bool)_supportsTimeScrubbing;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applyFrozen;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadCommonViews;
- (void)_loadActiveViews;
- (void)_unloadActiveViews;
- (void)_unloadCommonViews;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)_updateFramerate;
- (void)_configureTimeView:(id)arg1;
- (void)_configureUIOnColorChange;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1;
- (void)_updateDialTicksForBezelText;
- (_Bool)_needsBezelVisible;
- (void)_setShape:(unsigned long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromShape:(unsigned long long)arg2 toShape:(unsigned long long)arg3;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (_Bool)_hasBezelComplication;
- (void)_setupCircularMaskForDialVisibilityWithFraction:(double)arg1;
- (void)_setupCircularMaskForShapeTransitionWithFraction:(double)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)applyTransitionToCircularDialWithBezelFraction:(double)arg1;
- (double)bezelComplicationTextWidthInRadius;
- (id)utilityBezelComplicationView;
- (void)_setMasking:(_Bool)arg1;
- (double)_circularMaskRadiusForShapeTransitionWithFraction:(double)arg1 withBounds:(struct CGRect)arg2 showsDial:(_Bool)arg3;
- (double)_circularMaskRadiusForDialVisibilityWithFraction:(double)arg1;
- (id)_snapshotWithColor:(unsigned long long)arg1 style:(unsigned long long)arg2 shape:(unsigned long long)arg3 size:(struct CGSize)arg4 maskRadius:(double)arg5;
- (double)_swatchMaskRadiusForShape:(unsigned long long)arg1 withBounds:(struct CGRect)arg2;
- (void)_setupDialView;
- (void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2;
- (_Bool)_wantsStatusBarIconShadow;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)_wantsConstantSpeedZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (_Bool)_wantsDimWithDesaturationFilterDuringComplicationEditing;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (id)interpolatedComplicationColor;
- (long long)_richComplicationViewThemeFromFaceColor:(unsigned long long)arg1;
- (void)_reorderSwitcherSnapshotView;

@end
