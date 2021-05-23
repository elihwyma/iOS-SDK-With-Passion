/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRDevicePropertyDiff, NRPBDevicePropertyDiffType;

@interface NRDevicePropertyDiffType : NSObject <Swift>

{
    NRDevicePropertyDiff *_diff;
    unsigned long long _changeType;
}

@property (nonatomic, readonly) NRDevicePropertyDiff *diff;
@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, readonly) NRPBDevicePropertyDiffType *protobuf;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2;

@end
