/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long faceColor;

+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (_Bool)value:(long long)arg1 existsInDevice:(id)arg2;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)__allOrderedColors;

- (_Bool)isEqual:(id)arg1;
- (long long)swatchStyle;
- (_Bool)optionExistsInDevice:(id)arg1;
- (id)_valueToFaceBundleStringDict;

@end
