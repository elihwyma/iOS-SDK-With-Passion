/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, UIImage;

@interface AVTColorPreset : NSObject

{
    NSString *_name;
    long long _category;
    NSDictionary *_derivedColors;
    NSArray *_colors;
    struct UIColor *_previewColorMin;
    struct UIColor *_previewColorMid;
    struct UIColor *_previewColorMax;
    struct UIColor *_previewAccentColorMin;
    struct UIColor *_previewAccentColorMid;
    struct UIColor *_previewAccentColorMax;
    unsigned long long _previewAccentType;
    float _variation;
    NSArray *_materials;
}

@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;
@property (readonly) UIImage *thumbnail;
@property (readonly) long long category;
@property (readonly) float variation;
@property (readonly) _Bool isNatural;

+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2 colorIndex:(unsigned long long)arg3 variation:(float)arg4;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3;
+ (id)secondaryColorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didMutate;
- (void)renderColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2;
- (id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2 withSkinColor:(id)arg3;
- (id)colorPresetWithVariation:(float)arg1;
- (id)derivedColorNameForPresetCategory:(long long)arg1;
- (struct UIColor *)previewColor;
- (id)materialAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialCount;
- (void)updateMaterialsIfNeeded;
- (void)renderNaturalSkinColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2;
- (_Bool)shouldBlendWithSkinColor;
- (struct UIColor *)previewAccentColor;
- (id)gradientLayerForNaturalColorWithSkinColor:(id)arg1;
- (id)initWithCategory:(long long)arg1 description:(id)arg2;
- (id)derivedColor;
- (void)setDerivedColors:(id)arg1;
- (id)derivedCategoriesNames;
- (void)renderColorIntoCALayer:(id)arg1;
- (id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2;

@end
