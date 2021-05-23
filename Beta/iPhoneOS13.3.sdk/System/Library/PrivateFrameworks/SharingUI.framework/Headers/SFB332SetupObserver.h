/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <Sharing/SFXPCClient.h>

@protocol SFB332UIProtocol;

@interface SFB332SetupObserver : SFXPCClient

{
    id <SFB332UIProtocol> _delegate;
}

@property (weak, nonatomic) id <SFB332UIProtocol> delegate;

- (void)invalidate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)activate;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)updateDeviceInfoWithName:(id)arg1 batteryLevel:(double)arg2 batteryLevelKnown:(_Bool)arg3 edge:(unsigned long long)arg4 orientation:(unsigned long long)arg5;
- (void)showPairingStarted;
- (void)showEnableBluetoothPill;
- (void)showPairingSuccess;
- (void)showPairingFailure;
- (void)showSubsequentPairSuccess;
- (void)showChargingStatus;
- (void)dismissChargingStatus;
- (void)showUnlockPrompt;
- (void)showPairConsentPrompt;
- (void)dismissUnlockPrompt;
- (void)dismissBTPrompt;
- (void)dismissUIAnimated:(_Bool)arg1;
- (void)acquireHUDTransaction;
- (void)releaseHUDTransaction;
- (void)enableBluetoothTapped;
- (void)pairTapped;

@end
