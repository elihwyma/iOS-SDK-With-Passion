/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NSString, NTKCaliforniaColorPalette, NTKCaliforniaContentView, NTKCircularAnalogDialView, NTKRoundedCornerOverlayView, UIImageView, UIView;

@interface NTKCaliforniaFaceView : NTKAnalogFaceView

{
    UIView *_backgroundView;
    NTKCaliforniaContentView *_californiaContentView;
    NTKRoundedCornerOverlayView *_cornerView;
    unsigned long long _style;
    unsigned long long _color;
    unsigned long long _dial;
    NTKCaliforniaColorPalette *_colorPalette;
    UIImageView *_editingNotchBackgroundView;
    NTKCircularAnalogDialView *_dialView;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NTKCaliforniaContentView *californiaContentView;
@property (retain, nonatomic) NTKRoundedCornerOverlayView *cornerView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned long long dial;
@property (retain, nonatomic) NTKCaliforniaColorPalette *colorPalette;
@property (retain, nonatomic) UIImageView *editingNotchBackgroundView;
@property (retain, nonatomic) NTKCircularAnalogDialView *dialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)uiSensitivity;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)layoutSubviews;
- (void)_setupViews;
- (double)circleDiameter;
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
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (_Bool)_needsForegroundContainerView;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_updateDialTicksForBezelText;
- (void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)applyTransitionToCircularDialWithBezelFraction:(double)arg1;
- (double)bezelComplicationTextWidthInRadius;
- (id)utilityBezelComplicationView;
- (void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2;
- (_Bool)_wantsStatusBarIconShadow;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (void)_removeViews;
- (void)applyColorOnAnalogHands;
- (void)updateCircularMask;
- (void)_setupDialViewIfNeeded;
- (_Bool)isCircularDialWithBezel;
- (id)backgroundColorForDial:(unsigned long long)arg1 palette:(id)arg2;
- (double)californiaContentViewScale;
- (void)_updateSubDialRichComplicationsColor:(id)arg1 alternateColor:(id)arg2;
- (void)_updateRichCornerComplicationsInnerColor:(id)arg1 outerColor:(id)arg2;
- (id)_simpleTextComplicationColorForEditMode:(long long)arg1;
- (void)_updateSimpleTextLabelColor:(id)arg1;
- (void)_updateDialBezelComplicationColor:(id)arg1;
- (void)updateWorldClockComplicationColors:(id)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 fraction:(double)arg4;
- (_Bool)shouldFlipColorsForSubDialRichComplicationView:(id)arg1;
- (void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)_applyComplicationColorTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (double)alphaForFullscreenEditingNotchWithEditMode:(long long)arg1;
- (void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;

@end
