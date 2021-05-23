/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long dialShape;

+ (id)optionWithShape:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;

- (unsigned long long)_value;
- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
