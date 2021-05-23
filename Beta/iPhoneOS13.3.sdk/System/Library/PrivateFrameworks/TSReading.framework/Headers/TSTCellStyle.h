/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSStyle.h>

@interface TSTCellStyle : TSSStyle

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)initDefaultPropertyMap:(id)arg1 forTableArea:(unsigned int)arg2 presetIndex:(unsigned long long)arg3 colors:(id)arg4 alternate:(int)arg5;
+ (id)styleIDForPreset:(unsigned long long)arg1 andTableArea:(unsigned int)arg2;
+ (id)textStyleIDForPreset:(unsigned long long)arg1 andTableArea:(unsigned int)arg2;
+ (id)regionStringForTableArea:(unsigned int)arg1;
+ (void)p_initBodyRegionPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderRowRegionPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initFooterRowRegionPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)nonEmphasisCellProperties;

- (void)dealloc;
- (void)validate;
- (SEL)mapThemePropertyMapSelector;
- (void)tstMapCellStylePropertyMap:(id)arg1;

@end
