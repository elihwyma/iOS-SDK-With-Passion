/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray, NSNumber, NSUUID;

@interface HAPBLEServiceCache : HMFObject

{
    NSUUID *_serviceUUID;
    NSNumber *_serviceInstanceId;
    unsigned long long _serviceInstanceOrder;
    unsigned long long _serviceProperties;
    NSArray *_linkedServices;
    NSMutableArray *_cachedCharacteristics;
}

@property (nonatomic) unsigned long long serviceInstanceOrder;
@property (nonatomic) unsigned long long serviceProperties;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSMutableArray *cachedCharacteristics;
@property (nonatomic, readonly) NSUUID *serviceUUID;
@property (nonatomic, readonly) NSNumber *serviceInstanceId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithService:(id)arg1;
- (void)updateWithCharacteristic:(id)arg1;
- (id)initWithServiceUUID:(id)arg1 instanceId:(id)arg2 instanceOrder:(unsigned long long)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;

@end
