/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBasePhotoFace.h>

@interface NTKUserPhotoFace : NTKBasePhotoFace

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;

- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (_Bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (long long)editModeForCustomEditViewController;
- (_Bool)_option:(id)arg1 migratesToValidOption:(id *)arg2 forCustomEditMode:(long long)arg3;

@end
