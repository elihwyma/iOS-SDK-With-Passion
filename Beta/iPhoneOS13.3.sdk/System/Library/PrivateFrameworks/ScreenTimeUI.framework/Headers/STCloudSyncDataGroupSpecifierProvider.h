/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STCloudSyncDataGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_toggleCloudSyncDataSpecifier;
}

@property (nonatomic, readonly) PSSpecifier *toggleCloudSyncDataSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setCloudSyncData:(id)arg1 specifier:(id)arg2;
- (id)cloudSyncData:(id)arg1;
- (void)_updateEnabledValue;
- (void)changeCloudSyncData:(_Bool)arg1;
- (void)setScreenTimeSyncing:(_Bool)arg1;
- (void)performHSA2RepairIfNeeded:(CDUnknownBlockType)arg1;
- (void)presentHSA2RepairUI:(CDUnknownBlockType)arg1;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;

@end
