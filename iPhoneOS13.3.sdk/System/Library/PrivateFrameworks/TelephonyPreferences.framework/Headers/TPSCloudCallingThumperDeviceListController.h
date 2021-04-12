//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSCloudCallingDeviceListController.h>

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class TPSCloudCallingThumperController, TPSCloudCallingThumperProvisioningURLController;

@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController <TUCallCapabilitiesDelegatePrivate>
{
    TPSCloudCallingThumperProvisioningURLController *_provisioningURLController;
    TPSCloudCallingThumperController *_thumperController;
}

// - (void).cxx_destruct;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isMainSwitchOn:(id)arg1;
- (void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isDeviceSwitchOn:(id)arg1;
@property(readonly, nonatomic) TPSCloudCallingThumperController *thumperController; // @synthesize thumperController=_thumperController;
@property(readonly, nonatomic) TPSCloudCallingThumperProvisioningURLController *provisioningURLController; // @synthesize provisioningURLController=_provisioningURLController;
- (id)init;

@end

