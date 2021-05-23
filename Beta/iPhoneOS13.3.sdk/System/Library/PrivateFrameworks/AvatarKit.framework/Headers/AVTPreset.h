/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, UIImage;

@interface AVTPreset : NSObject

{
    long long _category;
    NSString *_identifier;
    NSArray *_assets;
    NSString *_variant;
    float _intensity;
    _Bool _mirrored;
    NSArray *_dependencies;
    NSDictionary *_tags;
    NSDictionary *_specializationSettings;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *displayableName;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly) _Bool hasComponent;
@property (nonatomic, readonly) NSDictionary *tags;
@property (readonly) NSDictionary *specializationSettings;

+ (id)presetWithCategory:(long long)arg1 identifier:(id)arg2;
+ (id)availablePresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2;
+ (void)registerVariantNamed:(id)arg1 forComponentType:(long long)arg2;
+ (void)loadPresets;
+ (id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2;
+ (id)colorPresetsForCategory:(long long)arg1;
+ (void)enumerateVariantDependenciesForComponentType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)secondaryColorPresetsForCategory:(long long)arg1;

- (id)init;
- (id)description;
- (float)intensity;
- (struct UIImage *)maskImage;
- (id)cache;
- (id)assets;
- (id)colorPresets;
- (void)rebuildSpecializationSettings;
- (_Bool)hasDependency;
- (void)enumeratePresetDependencies:(CDUnknownBlockType)arg1;
- (void)enumerateVariantDependencies:(CDUnknownBlockType)arg1;
- (void)applyPresetOnAvatar:(id)arg1;

@end
