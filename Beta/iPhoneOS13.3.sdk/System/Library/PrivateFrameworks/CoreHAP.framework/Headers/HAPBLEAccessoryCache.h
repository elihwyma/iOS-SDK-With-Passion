/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPBLEPeripheralInfo, NSMutableArray, NSString;

@interface HAPBLEAccessoryCache : HMFObject

{
    NSString *_pairingIdentifier;
    HAPBLEPeripheralInfo *_peripheralInfo;
    NSMutableArray *_cachedServices;
}

@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo;
@property (nonatomic, readonly) NSString *pairingIdentifier;
@property (nonatomic, readonly) NSMutableArray *cachedServices;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithService:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1;
- (void)updateWithPeripheralInfo:(id)arg1;
- (id)getCachedServiceWithUUID:(id)arg1;

@end
