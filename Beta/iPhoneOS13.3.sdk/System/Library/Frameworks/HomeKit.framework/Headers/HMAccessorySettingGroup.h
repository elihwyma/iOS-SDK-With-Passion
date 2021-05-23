/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSettingGroup.h>

@class HMFUnfairLock, NSArray, NSMutableSet, NSString, _HMAccessorySettingGroup;

@interface HMAccessorySettingGroup : HMSettingGroup

{
    HMFUnfairLock *_lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    _HMAccessorySettingGroup *_internal;
    HMAccessorySettingGroup *_group;
}

@property (readonly) _HMAccessorySettingGroup *internal;
@property (weak) HMAccessorySettingGroup *group;
@property (copy, readonly) NSString *keyPath;
@property (copy, readonly) NSString *localizedTitle;
@property (copy, readonly) NSArray *settings;
@property (copy, readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)logIdentifier;
- (id)initWithInternal:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (void)_settingGroup:(id)arg1 didAddSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2;
- (void)removeSetting:(id)arg1;
- (void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2;
- (void)removeGroup:(id)arg1;
- (void)_notifyClientOfAddedSetting:(id)arg1;
- (void)_notifyClientOfRemovedSetting:(id)arg1;
- (void)_notifyClientOfAddedGroup:(id)arg1;
- (void)_notifyClientOfRemovedGroup:(id)arg1;
- (void)addSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
