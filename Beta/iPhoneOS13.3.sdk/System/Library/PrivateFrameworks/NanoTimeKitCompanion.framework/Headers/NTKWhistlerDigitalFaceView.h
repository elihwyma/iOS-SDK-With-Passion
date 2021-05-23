/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

@class NSString;

@interface NTKWhistlerDigitalFaceView : NTKDigitalFaceView

{
    _Bool _is24HourMode;
    unsigned long long _faceColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (_Bool)_supportsTimeScrubbing;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_timeLabelOptions;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (id)complicationPickerViewForSlot:(id)arg1;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (long long)complicationFamilyForSlot:(id)arg1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (void)_updateLocale;
- (id)_defaultDateTextColor;
- (id)_defaultDateAccentColor;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3;
- (void)setFaceColor:(unsigned long long)arg1;
- (void)rectangularViewDidBecomeInteractive:(id)arg1;
- (void)rectangularViewDidEndInteractive:(id)arg1;

@end
