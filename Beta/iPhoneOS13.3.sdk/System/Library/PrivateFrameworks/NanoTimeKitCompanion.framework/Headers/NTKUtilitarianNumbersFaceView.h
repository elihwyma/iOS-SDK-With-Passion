/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilitarianFaceView.h>

@interface NTKUtilitarianNumbersFaceView : NTKUtilitarianFaceView

+ (id)_swatchImageFaceName;

- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_utilityComplicationSlots;
- (struct CGPoint)_dateComplicationCenterOffset;
- (struct CGPoint)_dateComplicationRightAlignment;
- (void)_configureComplicationFactory:(id)arg1;
- (Class)_utilitarianSceneClass;
- (id)_keylineViewForDensityEditing;
- (struct CGRect)_keylineFrameForDensityEditing;
- (unsigned long long)_keylineLabelAlignmentForDensityEditing;

@end
