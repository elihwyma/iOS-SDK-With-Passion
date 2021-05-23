/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSData, NSUUID;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject

{
    NSUUID *_cbuuid;
    NSData *_BTOutOfBandKey;
    NSData *_bluetoothMACAddress;
    long long _pairingProtocolVersion;
    _Bool _supportsIPsecWithSPPLink;
}

@property (nonatomic, readonly) NSUUID *cbuuid;
@property (nonatomic, readonly) long long pairingProtocolVersion;
@property (nonatomic, readonly) NSData *BTOutOfBandKey;
@property (nonatomic) _Bool supportsIPsecWithSPPLink;
@property (retain, nonatomic) NSData *bluetoothMACAddress;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3;

@end
