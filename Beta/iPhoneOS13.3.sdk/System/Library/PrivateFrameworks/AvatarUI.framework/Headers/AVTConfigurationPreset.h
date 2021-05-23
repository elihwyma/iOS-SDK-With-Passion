/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTConfigurationPreset : NSObject

{
    _Bool _defaultPreset;
    id _preset;
    CDStruct_597dd055 _settingKind;
}

@property (nonatomic, readonly) CDStruct_597dd055 settingKind;
@property (nonatomic, readonly) id preset;
@property (nonatomic, readonly, getter=isDefaultPreset) _Bool defaultPreset;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDefaultPresetForSettingKind:(CDStruct_597dd055)arg1;
- (id)initWithPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2;

@end
