/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRDiffBase.h>

@class NRPBDevicePropertyDiff;

@protocol NSObject><NSCopying;

@interface NRDevicePropertyDiff : NRDiffBase

{
    id <NSObject><NSCopying> _value;
}

@property (nonatomic, readonly) id <NSObject><NSCopying> value;
@property (nonatomic, readonly) NRPBDevicePropertyDiff *protobuf;

+ (_Bool)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)unpackPropertyValue:(id)arg1;
+ (id)packPropertyValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
