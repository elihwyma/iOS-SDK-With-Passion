/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@class NSString;

@interface NTKTimelapseThemeEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long timelapseTheme;
@property (nonatomic, readonly) NSString *resourceBaseName;
@property (nonatomic, readonly) NSString *resourceName;

+ (id)optionsDescription;
+ (id)optionWithTimelapseTheme:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_resourceBaseNameForTheme:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_resourceNameForTheme:(unsigned long long)arg1 videoIndex:(long long)arg2 forDevice:(id)arg3;

- (long long)swatchStyle;
- (id)resourceNameWithVideoIndex:(long long)arg1;
- (id)_valueToFaceBundleStringDict;

@end
