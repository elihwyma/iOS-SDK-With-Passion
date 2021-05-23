/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristicMetadata, NSNumber, NSUUID;

@interface HAPBLECharacteristicCache : HMFObject

{
    NSUUID *_characteristicUUID;
    NSNumber *_characteristicInstanceId;
    unsigned long long _characteristicProperties;
    HAPCharacteristicMetadata *_characteristicMetadata;
}

@property (nonatomic) unsigned long long characteristicProperties;
@property (retain, nonatomic) HAPCharacteristicMetadata *characteristicMetadata;
@property (nonatomic, readonly) NSUUID *characteristicUUID;
@property (nonatomic, readonly) NSNumber *characteristicInstanceId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(unsigned long long)arg3 characteristicMetadata:(id)arg4;
- (void)updateWithCharacteristic:(id)arg1;

@end
