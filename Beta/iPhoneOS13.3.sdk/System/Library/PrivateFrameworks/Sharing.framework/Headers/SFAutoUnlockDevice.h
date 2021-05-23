/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFPeerDevice.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface SFAutoUnlockDevice : SFPeerDevice

{
    _Bool _unlockEnabled;
    _Bool _keyExists;
    _Bool _bluetoothCloudPaired;
    _Bool _supportsApproveWithWatch;
    _Bool _placeholder;
    _Bool _supportsAlwaysDirect;
    _Bool _supportsApproveIcon;
    _Bool _supportsEncryption;
    _Bool _supportsAdvertisingUnlocked;
    _Bool _supportsConnectionCache;
    _Bool _supportsHEIC;
    NSString *_modelDescription;
    NSUUID *_bluetoothID;
    NSUUID *_proxyBluetoothID;
    NSString *_modelName;
    NSDictionary *_results;
    NSData *_hintToken;
    long long _majorOSVersion;
}

@property (copy, nonatomic) NSString *modelDescription;
@property (nonatomic) _Bool unlockEnabled;
@property (nonatomic) _Bool bluetoothCloudPaired;
@property (retain, nonatomic) NSUUID *bluetoothID;
@property (copy, nonatomic) NSUUID *proxyBluetoothID;
@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSDictionary *results;
@property (retain, nonatomic) NSData *hintToken;
@property (nonatomic) _Bool placeholder;
@property (nonatomic) _Bool supportsAlwaysDirect;
@property (nonatomic) _Bool supportsApproveWithWatch;
@property (nonatomic) _Bool supportsApproveIcon;
@property (nonatomic) _Bool supportsEncryption;
@property (nonatomic) _Bool supportsAdvertisingUnlocked;
@property (nonatomic) _Bool supportsConnectionCache;
@property (nonatomic) _Bool supportsHEIC;
@property (nonatomic) long long majorOSVersion;
@property (nonatomic) _Bool keyExists;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
