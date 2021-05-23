/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NSDate, NSNumber, NSString, NTKCircularAnalogDialView, NTKOlympusTimeView, NTKRoundedCornerOverlayView, NTKVictoryAnalogBackgroundView;

@interface NTKOlympusFaceView : NTKAnalogFaceView

{
    _Bool _contentLoaded;
    _Bool _trackSeconds;
    NTKOlympusTimeView *_olympusView;
    NTKVictoryAnalogBackgroundView *_analogBackgroundView;
    NTKCircularAnalogDialView *_dialView;
    NTKRoundedCornerOverlayView *_cornerView;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _second;
    NSDate *_date;
    double _circleDiameter;
    unsigned long long _currentStyle;
    unsigned long long _currentDial;
    unsigned long long _currentColor;
    struct NSNumber *_clockTimerToken;
}

@property (retain, nonatomic) NTKOlympusTimeView *olympusView;
@property (retain, nonatomic) NTKVictoryAnalogBackgroundView *analogBackgroundView;
@property (retain, nonatomic) NTKCircularAnalogDialView *dialView;
@property (retain, nonatomic) NTKRoundedCornerOverlayView *cornerView;
@property (nonatomic) _Bool contentLoaded;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long second;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) _Bool trackSeconds;
@property (nonatomic) double circleDiameter;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic) unsigned long long currentDial;
@property (nonatomic) unsigned long long currentColor;
@property (retain, nonatomic) NSNumber *clockTimerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)uiSensitivity;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)_setupViews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (_Bool)_needsForegroundContainerView;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_applyDataMode;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_cleanupAfterZoom;
- (void)_configureTimeView:(id)arg1;
- (void)_updateDialTicksForBezelText;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
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
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (_Bool)_hasWindrunnerWedge;
- (double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)openVictoryAppFromRect:(struct CGRect)arg1;
- (void)olympusView:(id)arg1 didTapAppLogoFromRect:(struct CGRect)arg2;
- (void)configureViewsForEditing;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)logoTappedFromRect:(struct CGRect)arg1;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (void)_removeViews;
- (void)applyColorOnAnalogHands;
- (void)updateCircularMask;
- (void)_setupDialViewIfNeeded;
- (_Bool)isCircularDialWithBezel;
- (void)_updateDialBezelComplicationColor:(id)arg1;
- (void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)_handleSignificantTimeChanged;
- (void)_tearDownOlympusView;
- (void)_tearDownAnalogView;
- (void)tearDownDialView;
- (void)createOlympusViewIfNeeded;
- (void)_createAnalogBackgroundIfNeeded;
- (void)setupViewsForCurrentState;
- (double)contentViewScale;
- (void)_applyContentViewTranform:(struct CGAffineTransform)arg1;
- (void)updateHourComponentsWithDate:(id)arg1;
- (void)applyWindrunnerMask;
- (_Bool)_showAnalogHands;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(_Bool)arg4;

@end
