/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKVictoryAnalogStyleEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long style;

+ (id)optionWithStyle:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_stylesInGrace;
+ (id)_stylesInGlory;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
