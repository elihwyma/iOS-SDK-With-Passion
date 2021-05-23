/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKCharacterEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long character;

+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithCharacter:(unsigned long long)arg1 forDevice:(id)arg2;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
