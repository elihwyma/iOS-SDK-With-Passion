/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long color;

+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedBeginningValuesRestrictedByDevice:(id)arg1;
+ (id)_orderedEndingValuesRestrictedByDevice:(id)arg1;

- (long long)swatchStyle;
- (_Bool)optionExistsInDevice:(id)arg1;
- (id)_valueToFaceBundleStringDict;

@end
