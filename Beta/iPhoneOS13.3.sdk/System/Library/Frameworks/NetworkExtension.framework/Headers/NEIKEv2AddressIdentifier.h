/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Identifier.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier

{
    NWAddressEndpoint *_address;
}

@property (retain) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)stringValue;
- (unsigned long long)identifierType;
- (id)initWithAddress:(id)arg1;
- (id)identifierData;

@end
