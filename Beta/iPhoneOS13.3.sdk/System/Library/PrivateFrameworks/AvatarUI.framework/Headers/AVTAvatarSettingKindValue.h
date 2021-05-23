/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTAvatarSettingKindValue : NSObject

{
    CDStruct_597dd055 _settingKind;
}

@property (nonatomic, readonly) CDStruct_597dd055 settingKind;

+ (id)valueWithSettingKind:(CDStruct_597dd055)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettingKind:(CDStruct_597dd055)arg1;

@end
