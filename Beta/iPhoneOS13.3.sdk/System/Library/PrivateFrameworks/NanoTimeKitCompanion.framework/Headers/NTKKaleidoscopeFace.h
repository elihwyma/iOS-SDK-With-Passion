/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKKaleidoscopeFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;

- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_resourceDirectorySnapshotKey;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (id)editOptionThatHidesAllComplications;
- (Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(_Bool)arg2;

@end
