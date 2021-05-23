/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingAdapter.h>

@class MCProfileConnection, NSHashTable, NSString;

@interface HFAccessorySettingManagedConfigurationAdapter : HFAccessorySettingAdapter

{
    _Bool _isSettingUp;
    MCProfileConnection *_profileConnectionForSynchronization;
    NSHashTable *_profileObservers;
}

@property (nonatomic) _Bool isSettingUp;
@property (retain, nonatomic) NSHashTable *profileObservers;
@property (nonatomic, readonly) MCProfileConnection *profileConnectionForSynchronization;
@property (nonatomic, readonly) unsigned long long numberOfProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)profiles;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_setupDebugHandler;
- (id)_synchronizeHomeKitToManagedConfiguration;
- (void)_dispatchWasUpdated;
- (id)profilesSettingFuture;
- (id)removeProfileFromHomeKit:(id)arg1;
- (id)_profilesSettingData;
- (id)_installedProfileData;
- (id)_removeProfileFromProfileManager:(id)arg1;
- (void)_rebootForReason:(id)arg1;
- (id)_synchronizeManagedConfigurationToHomeKit;
- (id)removeProfileDataFromHomeKit:(id)arg1;
- (void)addProfileObserver:(id)arg1;
- (void)removeProfileObserver:(id)arg1;

@end
