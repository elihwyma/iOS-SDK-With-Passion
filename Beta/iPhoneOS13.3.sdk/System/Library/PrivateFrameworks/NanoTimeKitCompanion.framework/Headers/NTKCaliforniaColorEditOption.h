/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceColorEditOption.h>

@interface NTKCaliforniaColorEditOption : NTKFaceColorEditOption

@property (nonatomic, readonly) unsigned long long californiaColor;

+ (id)optionWithCaliforniaColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_curatedColorValuesForDevice:(id)arg1;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
