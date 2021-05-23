/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NAFuture, NSMutableArray, RPCompanionLinkClient;

@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFHomeKitSettingsVendor;

@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject

{
    _Bool _isAccessoryActive;
    _Bool _isAccessoryGrouped;
    id <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> _delegate;
    NAFuture *_inProgressSysdiagnoseCollectionFuture;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    unsigned long long _mode;
    NAFuture *_linkIsActivatedFuture;
    NAFuture *_accessoryCompanionLinkDeviceFuture;
    NAFuture *_accessoryCompanionDevicesIDFuture;
    RPCompanionLinkClient *_client;
    NSMutableArray *_deviceIDArray;
}

@property (retain, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool isAccessoryActive;
@property (nonatomic, readonly) NAFuture *linkIsActivatedFuture;
@property (nonatomic, readonly) NAFuture *accessoryCompanionLinkDeviceFuture;
@property (nonatomic, readonly) NAFuture *accessoryCompanionDevicesIDFuture;
@property (nonatomic, readonly) RPCompanionLinkClient *client;
@property (retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (nonatomic) _Bool isAccessoryGrouped;
@property (retain, nonatomic) NSMutableArray *deviceIDArray;
@property (weak, nonatomic) id <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> delegate;

- (id)_home;
- (id)mediaProfileContainer;
- (id)identifyAccessory;
- (void)_resetRapportClientWithInvalidation:(_Bool)arg1;
- (id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3;
- (id)_sendRapportMessageToGroupedAccessoryWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3;
- (id)_homeKitAccessoryUniqueIdentifier;
- (id)_mediaSessionAccessoryUniqueIdentifier;
- (void)_updateDeviceForGroupedAccessory;
- (void)_updateDevice;
- (void)_setupRapportClient;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 groupedAccessory:(_Bool)arg3 delegate:(id)arg4;
- (id)requestSysdiagnoseWithRequest:(id)arg1 options:(id)arg2;
- (id)restartAccessory;
- (id)restartAccessories;

@end
