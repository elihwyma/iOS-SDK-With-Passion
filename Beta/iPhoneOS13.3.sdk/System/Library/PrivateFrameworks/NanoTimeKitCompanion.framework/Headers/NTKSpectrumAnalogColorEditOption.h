/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceColorEditOption.h>

@interface NTKSpectrumAnalogColorEditOption : NTKFaceColorEditOption

@property (nonatomic, readonly) unsigned long long color;

+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)__orderedValuesForDevice:(id)arg1;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
