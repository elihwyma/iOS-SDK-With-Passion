/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@class UIColor;

@interface NTKCharacterColorEditOption : NTKValueEditOption

@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) UIColor *colorValue;
@property (nonatomic, readonly) double desaturation;

+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithOption:(id)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)numberOfOptionsForCharacter:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionAtIndex:(unsigned long long)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3;
+ (unsigned long long)indexOfOption:(id)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
