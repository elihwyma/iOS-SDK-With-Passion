/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIAccountRecoveryController

- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (void)_setupDevicePickerController:(CDUnknownBlockType)arg1;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2;
- (_Bool)performingAccountRecovery;
- (id)_accountRecoveryEscapeOfferForDevice:(id)arg1;
- (id)_accountRecoveryDevicePickerEscapeOffer;

@end
