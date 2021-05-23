/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSStyle.h>

@interface TSTTableStyle : TSSStyle

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)initDefaultPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)styleIDForPreset:(unsigned long long)arg1;
+ (id)nonEmphasisTableProperties;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3;
+ (void)p_populateParagraphStyle:(id)arg1;

- (void)dealloc;
- (void)validate;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;
- (SEL)mapThemePropertyMapSelector;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;

@end
