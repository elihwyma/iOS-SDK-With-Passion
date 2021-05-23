/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryServer.h>

@class CBPeripheral, HAPAccessoryServerBrowserBTLE, NSNumber;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer

{
    unsigned char _connectReason;
    _Bool _stateChanged;
    _Bool _notifyingCharacteristicUpdated;
    unsigned char _connectionIdleTime;
    NSNumber *_stateNumber;
    CBPeripheral *_peripheral;
    unsigned long long _hapBLEProtocolVersion;
    unsigned long long _resumeSessionID;
    HAPAccessoryServerBrowserBTLE *_browser;
}

@property (weak, nonatomic, readonly) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic) unsigned char connectionIdleTime;
@property (copy, nonatomic) NSNumber *stateNumber;
@property (nonatomic) _Bool stateChanged;
@property (nonatomic) unsigned char connectReason;
@property (nonatomic) _Bool notifyingCharacteristicUpdated;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) unsigned long long hapBLEProtocolVersion;
@property (nonatomic, readonly) unsigned long long resumeSessionID;

+ (id)hapUUIDFromBTLEUUID:(id)arg1;

- (long long)linkType;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13;
- (void)updatePeripheral:(id)arg1;
- (_Bool)updatePeripheralIdentifier:(id *)arg1;
- (_Bool)updateResumeSessionID:(unsigned long long)arg1;
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
