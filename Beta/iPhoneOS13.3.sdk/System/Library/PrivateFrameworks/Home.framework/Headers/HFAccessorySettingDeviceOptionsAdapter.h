/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingAdapter.h>

@class HFAccessorySettingDeviceOptionsAdapterUtility, NAFuture, NSString;

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter

{
    _Bool _isAccessoryActive;
    NAFuture *_inProgressSysdiagnoseCollectionFuture;
    HFAccessorySettingDeviceOptionsAdapterUtility *_adapterUtility;
}

@property (nonatomic) _Bool isAccessoryActive;
@property (retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (retain, nonatomic) HFAccessorySettingDeviceOptionsAdapterUtility *adapterUtility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_home;
- (id)handleButtonPressForEntity:(id)arg1;
- (_Bool)supportButtonPressForEntity:(id)arg1;
- (id)inProgressButtonPressFutureForEntity:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (id)identifyAccessory;
- (void)currentAccessoryReachableOverRapportUpdated:(_Bool)arg1;
- (id)restartAccessory;
- (id)restartAccessories;

@end
