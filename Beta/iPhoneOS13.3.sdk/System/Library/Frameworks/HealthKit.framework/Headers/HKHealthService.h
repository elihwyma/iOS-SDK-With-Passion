/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class CBPeripheral, NSData, NSString, NSUUID;

@interface HKHealthService : NSObject <Swift>

{
    long long _type;
    NSUUID *_identifier;
    NSString *_name;
    double _lastConnection;
    NSString *_serviceId;
    NSData *_advertisementData;
    CBPeripheral *_peripheral;
}

@property (nonatomic) double lastConnection;
@property (copy, nonatomic) NSString *serviceId;
@property (retain, nonatomic) NSData *advertisementData;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4;
- (id)_localizedHealthServiceType;
- (id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3;

@end
