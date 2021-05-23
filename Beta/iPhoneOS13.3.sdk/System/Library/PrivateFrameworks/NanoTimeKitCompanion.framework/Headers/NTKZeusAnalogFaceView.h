/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class NTKZeusAnalogScene, NTKZeusColorPalette, UIView;

@interface NTKZeusAnalogFaceView : NTKSpriteKitAnalogFaceView

{
    _Bool _isEditing;
    _Bool _isHandsVisibleInColorEditing;
    _Bool _isStatusBarIconShadowNeeded;
    NTKZeusColorPalette *_palette;
    UIView *_cornerView;
    struct CGRect _upperComplicationOverrideFrame;
    struct CGRect _lowerComplicationOverrideFrame;
}

@property (nonatomic, readonly) NTKZeusAnalogScene *analogScene;

+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_supportedComplicationSlots;

- (struct CGSize)_sceneSize;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
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
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureTimeView:(id)arg1;
- (_Bool)_wantsStatusBarIconShadow;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)_loadScene;
- (struct CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(_Bool)arg2;
- (struct CGRect)_lowerComplicationFrameForStyle:(unsigned long long)arg1;
- (struct CGRect)_upperComplicationFrameForStyle:(unsigned long long)arg1;
- (void)_setStatusBarIconShadowNeeded:(_Bool)arg1;
- (double)_handAlphaForEditing:(_Bool)arg1;
- (double)_numbersAlphaForEditMode:(long long)arg1;

@end
