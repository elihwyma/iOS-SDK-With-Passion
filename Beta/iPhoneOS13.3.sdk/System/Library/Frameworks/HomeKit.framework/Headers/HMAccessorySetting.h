/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSetting.h>

@class HMAccessorySettingGroup, NSString, _HMAccessorySetting;

@interface HMAccessorySetting : HMSetting

{
    _HMAccessorySetting *_internal;
    HMAccessorySettingGroup *_group;
}

@property (readonly) _HMAccessorySetting *internal;
@property (weak) HMAccessorySettingGroup *group;
@property (copy, readonly) NSString *keyPath;
@property (readonly) Class valueClass;
@property (readonly, getter=isReflected) _Bool reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)settingForInternal:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)value;
- (id)logIdentifier;
- (_Bool)isWritable;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithInternal:(id)arg1;
- (void)_settingWillUpdateReflected:(id)arg1;
- (void)_settingDidUpdateReflected:(id)arg1;
- (void)_settingWillUpdateValue:(id)arg1;
- (void)_settingDidUpdateValue:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;

@end
