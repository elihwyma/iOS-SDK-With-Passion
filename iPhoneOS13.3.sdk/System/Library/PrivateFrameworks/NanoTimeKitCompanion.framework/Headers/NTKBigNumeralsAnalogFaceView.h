//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKBigNumeralsTimeComponentLabel, UIView;

@interface NTKBigNumeralsAnalogFaceView : NTKAnalogFaceView
{
    UIView *_hourLabelContainerView;
    NTKBigNumeralsTimeComponentLabel *_hourLabel;
    NSNumber *_timerToken;
    BOOL _showingStatusBar;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (Class)_timeViewClass;
+ (long long)uiSensitivity;
// - (void).cxx_destruct;
- (id)_renderTimeViewSwatchImageForStyle:(NSUInteger)arg1 typeface:(NSUInteger)arg2 color:(NSUInteger)arg3;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_updateHourLabelColorForColor:(NSUInteger)arg1;
- (void)_updateHourLabelColor;
- (void)_updateHourLabelText;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)_cleanupAfterZoom;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyDataMode;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_removeHourLabel;
- (void)_createHourLabel;
- (void)_reorderSwitcherSnapshotView;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end
