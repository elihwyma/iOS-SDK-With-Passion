/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKBasePhotosFace : NTKFace

+ (_Bool)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;

- (_Bool)_allowsEditing;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_resourceDirectorySnapshotKey;

@end
