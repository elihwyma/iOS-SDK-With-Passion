/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKSolarFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;

- (id)_complicationSlotDescriptors;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)orderedComplicationSlots;
- (_Bool)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)_faceDescriptionForLibrary;

@end
