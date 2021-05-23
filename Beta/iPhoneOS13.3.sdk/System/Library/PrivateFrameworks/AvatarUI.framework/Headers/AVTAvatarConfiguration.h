/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AVTAvatarConfiguration : NSObject

{
    NSMutableDictionary *_presetsStorage;
    NSMutableDictionary *_colorPresetsStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *presetsStorage;
@property (nonatomic, readonly) NSMutableDictionary *colorPresetsStorage;

+ (id)configurationFromAvatar:(id)arg1 coreModel:(id)arg2;
+ (id)configurationPresetWithPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2;
+ (id)configurationColorPresetWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 coreModel:(id)arg3;
+ (id)keyForSettingKind:(CDStruct_597dd055)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)requiresEncryption;
- (id)presetForCategory:(long long)arg1;
- (void)addPreset:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (unsigned long long)costForScope:(id)arg1;
- (id)presets;
- (id)colorPresets;
- (id)persistentIdentifierForScope:(id)arg1;
- (void)applyToAvatar:(id)arg1;
- (void)addConfigurationPreset:(id)arg1;
- (void)addConfigurationColorPreset:(id)arg1;
- (id)initWithPresets:(id)arg1 colorPresets:(id)arg2;
- (void)removePresetsForSettingKind:(CDStruct_597dd055)arg1 storage:(id)arg2;
- (id)presetsForStorage:(id)arg1;
- (id)presetForSettingKind:(CDStruct_597dd055)arg1 storage:(id)arg2;
- (id)presetConfigurationPresets;
- (id)colorConfigurationPresets;
- (void)addColorPreset:(id)arg1;
- (void)removePresetsForCategory:(long long)arg1;
- (void)removeColorPresetsForSettingKind:(CDStruct_597dd055)arg1;
- (id)colorPresetForSettingKind:(CDStruct_597dd055)arg1;
- (id)configurationPresets;
- (id)configurationPresetForSettingKind:(CDStruct_597dd055)arg1;

@end
