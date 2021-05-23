/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/RMSSessionProxy.h>

@class NSString, RMSIDSClient;

@protocol RMSPairingSessionDelegate;

__attribute__((visibility("hidden")))
@interface RMSPairingSessionProxy : RMSSessionProxy

{
    RMSIDSClient *_idsClient;
    _Bool _pairing;
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
- (void)endPairing;
- (void)beginPairing;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)heartbeatDidFail;
- (void)_handleDidPairWithServiceNotification:(id)arg1;
- (void)_handlePairingDidFailNotification:(id)arg1;
- (void)_notifyDelegatePairingFailed;
- (void)unpairService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
