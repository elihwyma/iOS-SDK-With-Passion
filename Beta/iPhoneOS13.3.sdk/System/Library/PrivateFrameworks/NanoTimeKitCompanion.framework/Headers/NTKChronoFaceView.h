/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class CLKRelativeDateTextProvider, NSDate, NSString, NSTimer, NTKChronoButton, NTKChronoHandsView, NTKChronoPalette, NTKChronoScene, NTKColoringLabel, NTKStopwatchButton, NTKUtilityComplicationFactory, UIColor, UILabel, _LapLabel;

@interface NTKChronoFaceView : NTKSpriteKitAnalogFaceView

{
    NTKStopwatchButton *_startSessionButton;
    NTKChronoButton *_pauseButton;
    NTKChronoButton *_lapResetButton;
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKChronoPalette *_palette;
    UIColor *_labelColor;
    UILabel *_totalLabel;
    NTKColoringLabel *_totalTimeLabel;
    NTKColoringLabel *_lapTimeLabel;
    _LapLabel *_lapLabel;
    NSTimer *_resetLabelTimer;
    unsigned long long _currentMode;
    CLKRelativeDateTextProvider *_totalTimeTextProvider;
    CLKRelativeDateTextProvider *_lapTimeTextProvider;
    NSDate *_stopwatchStartDate;
}

@property (nonatomic, readonly) NTKChronoScene *chronoScene;
@property (nonatomic, readonly) NTKChronoHandsView *timeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (Class)_timeViewClass;

- (void)dealloc;
- (void)reload;
- (void)stateChanged;
- (_Bool)inSession;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_verticalPaddingForStatusBar;
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
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (_Bool)_wantsStatusBarHidden;
- (_Bool)_usesCustomZoom;
- (void)_applyDataMode;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_layoutForegroundContainerView;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (_Bool)_canStartTimeScrubbing;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)slotUsesCurvedText:(long long)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)_stopStopwatchUpdates;
- (void)setUserInteractionForButtonsEnabled:(_Bool)arg1;
- (void)fadeStartSessionButtonToAlpha:(double)arg1 animated:(_Bool)arg2;
- (void)_pauseButtonPressed;
- (void)_lapResetButtonPressed;
- (double)_chronoLabelFontSize;
- (id)_timeLabelWithFontSize:(double)arg1;
- (void)_startSessionButtonPressed;
- (void)_showAppropriateModeAnimated:(_Bool)arg1;
- (void)_removeModeRelatedUIs;
- (void)_layoutStopwatchTimeViews;
- (void)_updateStopwatchTimeViewsMaxWidth;
- (void)_updateComplicationFactoryWithDateComplicationView:(id)arg1;
- (void)_configureComplicationAlphasForFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_buttonAlphaForEditMode:(long long)arg1;
- (id)_dateForegroundColorForEditMode:(long long)arg1;
- (id)_dateAccentColorForEditMode:(long long)arg1;
- (void)_applyPaletteToTimeView:(id)arg1;
- (void)updateStartSessionButtonGlyph;
- (void)_reconsiderStopwatchUpdates;
- (void)_synchronizeChronoTimeLabelsWithStopwatch;
- (void)_applyTransformToForegroundViews:(struct CGAffineTransform)arg1;
- (void)_enumerateChronoModeViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTimeModeViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (_Bool)startStop;
- (void)_showTimeModeAnimated:(_Bool)arg1;
- (void)_loadTimeModeViews;
- (void)_loadChronoModeViews;
- (void)fadeInLowerSubdialAnimated:(_Bool)arg1;
- (void)_setDateComplicationAlpha:(double)arg1 animated:(_Bool)arg2;
- (void)fadeOutLowerSubdialAnimated:(_Bool)arg1;
- (void)_startStopwatchUpdates;
- (struct CGPoint)_dateComplicationCenterOffset;
- (struct CGPoint)_dateComplicationRightAlignment;
- (void)_loadScene;
- (_Bool)_supportsUnadornedSnapshot;
- (_Bool)_isComplicationSlotInsideDial:(id)arg1;
- (_Bool)_handsAreInForegroundForEditMode:(long long)arg1;
- (void)updateStartSessionButtonGlyphWithCustomPalette:(id)arg1;
- (_Bool)_isStopwatchUIVisible;
- (void)_reloadStopwatchState;
- (void)_showChronographModeAnimated:(_Bool)arg1;
- (void)_updateStopwatchButtons;
- (void)_showLapSplitIfNecessary;
- (void)_applyFrozenLapTimeWithTimeInterval:(double)arg1;
- (void)_resetLapLabelAfterSplit;
- (_Bool)lapReset;
- (void)_synchronizeStopwatchStartDate;
- (void)_updateChronoTimeLabelsWithUnmodifiedDateForNow:(id)arg1;
- (unsigned long long)_chronoTimeUnits;
- (void)_updateLapLabelLaps;
- (void)lapAdded;

@end
