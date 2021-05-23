/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NSString, UIView;

@interface NTKWhistlerSubdialsFaceView : NTKFaceView

{
    UIView *_timeViewContainerView;
    unsigned long long _faceColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)uiSensitivity;
+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
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
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (id)complicationPickerViewForSlot:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_setupDialView;
- (_Bool)_shouldShowEditingPageDotsOnBottom;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (_Bool)_isAnalog;
- (void)setFaceColor:(unsigned long long)arg1;
- (void)rectangularViewDidBecomeInteractive:(id)arg1;
- (void)rectangularViewDidEndInteractive:(id)arg1;
- (double)_timeViewAlphaForEditMode:(long long)arg1;
- (void)_removeDialView;
- (id)_renderDialSwatchImageForStyle:(unsigned long long)arg1 color:(unsigned long long)arg2;
- (double)_horizontalPaddingForStatusBar;

@end
