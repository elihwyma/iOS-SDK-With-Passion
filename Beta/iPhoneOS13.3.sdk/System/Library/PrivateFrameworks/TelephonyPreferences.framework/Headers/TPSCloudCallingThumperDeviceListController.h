/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCloudCallingDeviceListController.h>

@class NSString, TPSCloudCallingThumperController, TPSCloudCallingThumperProvisioningURLController;

@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController

{
    TPSCloudCallingThumperProvisioningURLController *_provisioningURLController;
    TPSCloudCallingThumperController *_thumperController;
}

@property (nonatomic, readonly) TPSCloudCallingThumperProvisioningURLController *provisioningURLController;
@property (nonatomic, readonly) TPSCloudCallingThumperController *thumperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isDeviceSwitchOn:(id)arg1;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isMainSwitchOn:(id)arg1;

@end
