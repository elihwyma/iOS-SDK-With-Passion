/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSMutableDictionary, NSString, TSSStylesheet;

@interface TSSTheme : TSPObject <Swift>

{
    NSString *mThemeIdentifier;
    TSSStylesheet *mStylesheet;
    NSMutableDictionary *mPresetsByKind;
}

@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (nonatomic) _Bool isLocked;
@property (retain, nonatomic) NSString *themeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)registerPresetSourceClass:(Class)arg1;
+ (id)presetSources;
+ (id)presetBootstrapOrder;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2;
+ (void)registerPresetSourceClasses;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)colors;
- (id)childEnumerator;
- (id)modelPathComponentForChild:(id)arg1;
- (void)bootstrapThemeAlternate:(int)arg1;
- (void)disablePresetValidation;
- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)presetsOfKind:(id)arg1;
- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;
- (void)setPresets:(id)arg1 ofKind:(id)arg2;
- (unsigned long long)indexOfPreset:(id)arg1;
- (id)p_identifierForBootstrapTheme:(int)arg1;
- (_Bool)hasPresetsOfKind:(id)arg1;
- (void)enablePresetValidation;
- (void)addPreset:(id)arg1 ofKind:(id)arg2;
- (void)removePreset:(id)arg1;
- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)containsCGColor:(struct CGColor *)arg1;
- (void)checkThemeStylesheetConsistency;

@end
