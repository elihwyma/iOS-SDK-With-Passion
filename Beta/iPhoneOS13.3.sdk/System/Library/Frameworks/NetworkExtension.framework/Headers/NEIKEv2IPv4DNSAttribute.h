/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2AddressAttribute.h>

@interface NEIKEv2IPv4DNSAttribute : NEIKEv2AddressAttribute

+ (id)copyTypeDescription;

- (unsigned long long)valueType;
- (unsigned long long)attributeType;
- (id)attributeName;

@end
