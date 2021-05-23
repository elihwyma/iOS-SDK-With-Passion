/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString, RMSPairingServer;

@protocol RMSPairingSessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSLocalPairingSession : NSObject

{
    RMSPairingServer *_pairingServer;
    id <RMSPairingSessionDelegate> _delegate;
    NSString *_passcode;
    NSString *_advertisedAppName;
    NSString *_advertisedDeviceName;
    NSString *_advertisedDeviceModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <RMSPairingSessionDelegate> delegate;
@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) NSString *advertisedAppName;
@property (retain, nonatomic) NSString *advertisedDeviceName;
@property (retain, nonatomic) NSString *advertisedDeviceModel;

- (id)init;
- (void)dealloc;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceDidPublish:(id)arg1;
- (void)endPairing;
- (void)beginPairing;
- (void)unpairService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_generatePublicKey;
- (id)_expectedPasscodeHashForPasscode:(id)arg1 publicKey:(id)arg2;
- (void)_startBonjourAdvertisingWithPublicKey:(id)arg1 httpServerPort:(unsigned short)arg2;
- (id)_pairingNetServiceName;
- (void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3;
- (void)pairingServerDidFail:(id)arg1;

@end
