/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HAPBLEPeripheral : HMFObject

{
    NSString *_accessoryName;
    NSUUID *_peripheralUUID;
    NSNumber *_hkType;
    NSNumber *_advInterval;
    NSNumber *_pairingStatusFlag;
    NSString *_pairingIdentifier;
    NSNumber *_category;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_compatibleVersion;
    NSData *_setupHash;
    NSData *_encryptedPayload;
    double _lastSeen;
    NSNumber *_averageRSSI;
}

@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSUUID *peripheralUUID;
@property (retain, nonatomic) NSNumber *hkType;
@property (retain, nonatomic) NSNumber *advInterval;
@property (retain, nonatomic) NSNumber *pairingStatusFlag;
@property (retain, nonatomic) NSString *pairingIdentifier;
@property (retain, nonatomic) NSNumber *category;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *compatibleVersion;
@property (copy, nonatomic) NSData *encryptedPayload;
@property (retain, nonatomic) NSNumber *averageRSSI;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic) double lastSeen;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)updateStateNumber:(id)arg1;
- (id)initWithName:(id)arg1 peripheralUUID:(id)arg2 hkType:(id)arg3 advInterval:(id)arg4 pairingStatusFlag:(id)arg5 pairingIdentifier:(id)arg6 category:(id)arg7 stateNumber:(id)arg8 configNumber:(id)arg9 hapBLECompatibleVersion:(id)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12;
- (_Bool)updateWithPeripheral:(id)arg1;
- (void)_resetAverageRSSI;

@end
