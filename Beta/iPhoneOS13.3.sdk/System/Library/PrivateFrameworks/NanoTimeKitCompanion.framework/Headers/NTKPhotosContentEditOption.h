/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKPhotosContentEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long photosContent;

+ (id)optionWithPhotosContent:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;

- (id)_valueToFaceBundleStringDict;

@end
