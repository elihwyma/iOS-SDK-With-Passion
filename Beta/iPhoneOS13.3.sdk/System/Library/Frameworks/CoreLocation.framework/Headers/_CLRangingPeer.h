/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _CLRangingPeer : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) unsigned long long macAddress;
@property (copy, nonatomic, readonly) NSData *secureRangingKeyID;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)uintMacAddressFromString:(id)arg1;
+ (id)hexStringMacAddressFromUInt:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;
- (id)initWithMacAddressAsString:(id)arg1 secureRangingKeyID:(id)arg2;
- (id)getMacAddressAsString;
- (_Bool)isEqualToPeer:(id)arg1;
- (id)initWithMacAddressAsData:(id)arg1 secureRangingKeyID:(id)arg2;

@end
