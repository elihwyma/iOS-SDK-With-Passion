/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilitarianFaceView.h>

@interface NTKUtilitarianPillsFaceView : NTKUtilitarianFaceView

+ (id)_swatchImageFaceName;

- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_utilityComplicationSlots;
- (struct CGPoint)_dateComplicationCenterOffset;
- (struct CGPoint)_dateComplicationRightAlignment;
- (void)_loadScene;
- (id)_visibleComplicationSlots;
- (void)_configureComplicationFactory:(id)arg1;
- (Class)_utilitarianSceneClass;
- (id)_keylineViewForDensityEditing;
- (struct CGRect)_keylineFrameForDensityEditing;
- (unsigned long long)_keylineLabelAlignmentForDensityEditing;
- (void)_updateComplicationOverlapHiding;
- (void)_removeComplicationOverlapHiding;

@end
