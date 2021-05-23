/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMSetting, MCProfile, NSUUID;

@interface HUAccessorySettingsProfileItem : HFItem

{
    MCProfile *_profile;
    HMSetting *_setting;
}

@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) MCProfile *profile;
@property (nonatomic, readonly) HMSetting *setting;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithProfile:(id)arg1 setting:(id)arg2;

@end
