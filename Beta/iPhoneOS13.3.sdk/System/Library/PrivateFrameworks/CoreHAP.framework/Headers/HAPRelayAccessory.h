/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessory.h>

@class HAPCharacteristic, HAPRelayActivationClient, HAPRelayPairingClient, NSString;

@interface HAPRelayAccessory : HAPAccessory

{
    _Bool _relayEnabled;
    HAPRelayActivationClient *_relayActivationClient;
    HAPRelayPairingClient *_relayPairingClient;
    unsigned long long _relayState;
    HAPCharacteristic *_relayControlPointCharacteristic;
    HAPCharacteristic *_relayEnabledCharacteristic;
    NSString *_relayAccessoryIdentifier;
}

@property (retain, nonatomic) HAPCharacteristic *relayControlPointCharacteristic;
@property (retain, nonatomic) HAPCharacteristic *relayEnabledCharacteristic;
@property (retain, nonatomic) NSString *relayAccessoryIdentifier;
@property (nonatomic, getter=isRelayEnabled) _Bool relayEnabled;
@property (nonatomic, readonly) unsigned long long relayState;
@property (nonatomic, readonly) HAPRelayActivationClient *relayActivationClient;
@property (nonatomic, readonly) HAPRelayPairingClient *relayPairingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredRelayServiceCharacteristics;

- (_Bool)supportsRelay;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (_Bool)_parseServices;
- (void)_setRelayEnabled:(_Bool)arg1;
- (void)_updateRelayEnabled:(_Bool)arg1;
- (unsigned long long)_relayState;
- (id)_relayActivationClient;
- (void)_stopRelayActivationWithError:(id)arg1;
- (void)_setRelayActivationClient:(id)arg1;
- (void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRelayActivationChallenge:(id)arg1;
- (void)_handleRelayActivationCertificate:(id)arg1;
- (id)_relayPairingClient;
- (void)_stopRelayPairingWithError:(id)arg1;
- (void)_setRelayPairingClient:(id)arg1;
- (void)_handleRelayPairingIdentifierRequest;
- (void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg1;
- (void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg1 accessoryIdentifier:(id)arg2;
- (_Bool)_parseRelayService:(id)arg1;
- (void)_setRelayState:(unsigned long long)arg1;
- (void)relayActivationClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveChallenge:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveRelayCertificate:(id)arg2;
- (void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
- (void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (void)addRelayPairingWithIdentifier:(id)arg1 accessToken:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeRelayPairingWithIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
