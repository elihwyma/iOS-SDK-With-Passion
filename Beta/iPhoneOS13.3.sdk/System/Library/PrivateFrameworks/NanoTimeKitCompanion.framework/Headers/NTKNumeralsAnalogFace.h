/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKNumeralsAnalogFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;

- (void)dealloc;
- (void)_commonInit;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (_Bool)_option:(id)arg1 migratesToValidOption:(id *)arg2 forCustomEditMode:(long long)arg3;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (void)_handleLocaleNumberSystemChange;

@end
