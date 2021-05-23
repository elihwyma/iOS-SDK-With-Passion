/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NSString, NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKExplorerDialView, NTKExplorerHandsView, NTKExplorerStatusView;

@interface NTKExplorerFaceView : NTKAnalogFaceView

{
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKExplorerDialView *_dialView;
    NTKExplorerStatusView *_statusView;
    _Bool _observingConnectivity;
    long long _signalAnimationState;
    long long _dotPosition;
    unsigned long long _density;
    unsigned long long _color;
}

@property (nonatomic, readonly) NTKExplorerHandsView *timeView;
@property (nonatomic) unsigned long long density;
@property (nonatomic) unsigned long long color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (Class)_timeViewClass;

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
- (void)_applyShowsCanonicalContent;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applyFrozen;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (void)_configureTimeView:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)slotUsesCurvedText:(id)arg1;
- (struct CGPoint)_contentCenterOffset;
- (double)_contentScaleForEditMode:(long long)arg1;
- (void)_applyDensity:(unsigned long long)arg1;
- (void)_applyColor:(unsigned long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toOption:(unsigned long long)arg3;

@end
