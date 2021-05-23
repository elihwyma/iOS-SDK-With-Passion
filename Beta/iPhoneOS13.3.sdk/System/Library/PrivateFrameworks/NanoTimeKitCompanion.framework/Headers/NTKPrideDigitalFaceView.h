/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

@class CLKUIQuadView, NTKComplicationDisplayWrapperView, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFaceViewComplicationFactory, NTKPrideLinearQuad, NTKRoundedCornerOverlayView;

@interface NTKPrideDigitalFaceView : NTKDigitalFaceView

{
    NTKComplicationDisplayWrapperView *_touchWrapper;
    NTKDigitalTimeLabel *_timeLabel;
    NTKDigitalTimeLabelStyle *_timeLabelDefaultStyle;
    NTKFaceViewComplicationFactory *_layoutContentProvider;
    NTKPrideLinearQuad *_bandsQuad;
    CLKUIQuadView *_bandsView;
    NTKRoundedCornerOverlayView *_cornerOverlay;
    _Bool _wasSlow;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_updatePausedState;
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
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applySlow;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)screenDidTurnOff;
- (void)screenWillTurnOn;
- (_Bool)_supportsUnadornedSnapshot;
- (void)_loadBackgroundViews;
- (void)_unloadBackgroundViews;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_complicationsAlphaForEditMode:(long long)arg1;

@end
