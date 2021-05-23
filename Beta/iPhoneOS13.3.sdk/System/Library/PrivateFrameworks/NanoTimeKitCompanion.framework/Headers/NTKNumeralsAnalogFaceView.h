/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKEditOptionPickerView, NTKNumeralsHourViewsManager, NTKUtilityComplicationFactory;

@interface NTKNumeralsAnalogFaceView : NTKAnalogFaceView

{
    NTKUtilityComplicationFactory *_complicationFactory;
    long long _utilitySlot;
    _Bool _areAllComplicationsOff;
    _Bool _complicationPositionNeedsUpdate;
    unsigned long long _faceColor;
    NTKEditOptionPickerView *_stylePickerView;
    NTKNumeralsHourViewsManager *_hourViewsManager;
    unsigned long long _selectedStyle;
    struct NSNumber *_clockTimerToken;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)layoutSubviews;
- (long long)_currentHour;
- (void)_displayLinkFired;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
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
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applyFrozen;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)endScrubbingAnimated:(_Bool)arg1;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (id)_faceConfiguration;
- (_Bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (double)_secondHandAlphaForEditMode:(long long)arg1;
- (void)_handleTimeChange;
- (void)_updateComplicationAndHourNodePlacementsWithToHour:(long long)arg1 duration:(double)arg2;
- (_Bool)_isInTimeTravel;
- (id)_faceCurrentDate;
- (void)_prepareForHourChangeWithSecondsUntilChange:(double)arg1;
- (long long)_complicationPlacementForCurrentHour;
- (void)_updateAreAllComplicationsOffState;
- (void)_applyFaceColor:(unsigned long long)arg1 toComplicationView:(id)arg2;
- (void)_configureForStyleEditing;
- (void)_cleanupAfterStyleEditing;
- (void)_enumerateComplicationViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyStyle:(unsigned long long)arg1;
- (long long)_styleIndexForStyle:(unsigned long long)arg1;
- (void)_loadHoursManagerIfNecessary;
- (struct CGRect)_keylineFrameForStyleEditing;
- (struct CGRect)_keylineFrameForFullScreenEditingReducedForOutsideLabel;
- (long long)_complicationPlacementForHour:(long long)arg1;
- (_Bool)_needComplicationAnimationForChangeToHour:(long long)arg1;
- (void)_updateComplicationPositionWithAnimationProgress:(double)arg1;

@end
