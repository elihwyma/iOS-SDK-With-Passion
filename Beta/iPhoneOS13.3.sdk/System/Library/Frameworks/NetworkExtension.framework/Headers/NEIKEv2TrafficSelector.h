/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject

{
    unsigned char _ipProtocol;
    unsigned short _startPort;
    unsigned short _endPort;
    NWAddressEndpoint *_startAddress;
    NWAddressEndpoint *_endAddress;
}

@property (readonly) unsigned long long type;
@property (retain) NWAddressEndpoint *startAddress;
@property (retain) NWAddressEndpoint *endAddress;
@property unsigned short startPort;
@property unsigned short endPort;
@property unsigned char ipProtocol;

+ (id)copyConstrainedTrafficSelectorsForRequest:(id)arg1 reply:(id)arg2;
+ (id)copyAllIPv6;
+ (id)copyAllIPv4;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
