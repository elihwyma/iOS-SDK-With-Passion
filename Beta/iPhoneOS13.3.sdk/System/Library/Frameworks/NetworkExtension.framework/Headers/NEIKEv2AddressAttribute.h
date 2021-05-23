/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute

{
    NWAddressEndpoint *_address;
    unsigned long long _customType;
}

@property (nonatomic) unsigned long long customType;
@property (retain) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)attributeType;
- (id)initWithAddress:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3;

@end
