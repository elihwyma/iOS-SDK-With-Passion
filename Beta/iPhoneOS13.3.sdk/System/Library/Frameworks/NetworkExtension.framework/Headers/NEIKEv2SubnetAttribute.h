/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>

@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute

{
    unsigned char _prefix;
    unsigned int _ipv4SubnetMask;
    NWAddressEndpoint *_address;
    unsigned long long _customType;
}

@property (nonatomic) unsigned long long customType;
@property (retain) NWAddressEndpoint *address;
@property unsigned char prefix;
@property unsigned int ipv4SubnetMask;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;

+ (id)copyTypeDescription;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)attributeType;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithAddress:(id)arg1 ipv4SubnetMask:(unsigned int)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 prefix:(unsigned char)arg4;
- (id)initWithAddress:(id)arg1 prefix:(unsigned char)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 ipv4SubnetMask:(unsigned int)arg4;

@end
