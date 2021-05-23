/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKBlackcombDialColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long blackcombDialColor;

+ (id)optionWithBlackcombDialColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
