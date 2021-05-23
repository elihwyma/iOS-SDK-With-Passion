/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSettings.h>

@class HMAccessory, HMAccessorySettingGroup, HMFUnfairLock, NSString, NSUUID, _HMContext;

@protocol HMAccessorySettingsContainer, HMAccessorySettingsDelegate, HMControllable;

@interface HMAccessorySettings : HMSettings

{
    HMFUnfairLock *_lock;
    id <HMAccessorySettingsContainer> _settingsContainer;
    id <HMControllable> _settingsControl;
    id <HMAccessorySettingsDelegate> _delegate;
    HMAccessorySettingGroup *_rootGroup;
    _HMContext *_context;
}

@property (nonatomic, readonly) _HMContext *context;
@property (weak) id <HMControllable> settingsControl;
@property (weak) id <HMAccessorySettingsContainer> settingsContainer;
@property (readonly, getter=isControllable) _Bool controllable;
@property (weak) id <HMAccessorySettingsDelegate> delegate;
@property (weak, readonly) HMAccessory *accessory;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (id)localizationKeyForKeyPath:(id)arg1;

- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)__notifyDelegateSettingsDidUpdate;
- (id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(CDUnknownBlockType)arg1;
- (void)_configureWithContext:(id)arg1;

@end
