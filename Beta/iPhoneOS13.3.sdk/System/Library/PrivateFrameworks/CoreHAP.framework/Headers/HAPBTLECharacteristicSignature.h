/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristicMetadata, NSNumber, NSUUID;

@interface HAPBTLECharacteristicSignature : HMFObject

{
    _Bool _authenticated;
    NSUUID *_characteristicType;
    NSNumber *_serviceInstanceID;
    NSUUID *_serviceType;
    unsigned long long _characteristicProperties;
    HAPCharacteristicMetadata *_characteristicMetadata;
}

@property (copy, nonatomic, readonly) NSUUID *characteristicType;
@property (copy, nonatomic, readonly) NSNumber *serviceInstanceID;
@property (copy, nonatomic, readonly) NSUUID *serviceType;
@property (nonatomic, readonly) unsigned long long characteristicProperties;
@property (nonatomic, readonly) HAPCharacteristicMetadata *characteristicMetadata;
@property (nonatomic, readonly, getter=isAuthenticated) _Bool authenticated;

- (id)initWithCharacteristicType:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 characteristicProperties:(unsigned long long)arg4 characteristicMetadata:(id)arg5 authenticated:(_Bool)arg6;

@end
