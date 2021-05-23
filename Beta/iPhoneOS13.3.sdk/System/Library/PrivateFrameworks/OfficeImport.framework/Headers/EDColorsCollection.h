/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection

{
    unsigned long long mDefaultColorsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSystemColorId:(unsigned long long)arg1;
+ (int)systemColorIdFromIndex:(unsigned long long)arg1;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;
+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;

- (void)setupDefaults;
- (id)colorWithIndex:(unsigned long long)arg1;
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (const unsigned int *)defaultPalette;
- (void)addColors:(const unsigned int *)arg1 count:(unsigned int)arg2 defaultColors:(const unsigned int *)arg3 defaultCount:(unsigned int)arg4;
- (unsigned long long)defaultColorsCount;
- (void)addDefaultPalette;
- (id)initWithDefaultSetup:(_Bool)arg1;
- (void)addPalette:(const unsigned int *)arg1 paletteSize:(unsigned int)arg2 paletteX:(const unsigned int *)arg3 paletteXSize:(unsigned int)arg4;

@end
