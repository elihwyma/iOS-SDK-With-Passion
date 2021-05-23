/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKKaleidoscopeAssetOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long asset;

+ (id)optionWithAsset:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;

- (long long)swatchStyle;
- (_Bool)optionExistsInDevice:(id)arg1;
- (id)_valueToFaceBundleStringDict;

@end
