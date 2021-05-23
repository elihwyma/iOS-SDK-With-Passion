/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Network/NWEndpoint.h>

@class NSArray, NSData;

@interface NPTunnelTuscanyEndpoint : NWEndpoint

{
    NSArray *_hosts;
    NSData *_hostsData;
}

@property (readonly) NSData *hostsData;
@property (readonly) NSArray *hosts;

+ (_Bool)supportsSecureCoding;
+ (unsigned int)endpointType;
+ (_Bool)supportsResolverCallback;
+ (id)encodeHosts:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodedData;
- (void)resolveEndpointWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)initWithHosts:(id)arg1;
- (id)copyHostsWithPort:(id)arg1;

@end
