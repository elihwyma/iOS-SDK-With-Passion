/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWHostEndpoint.h>

@class NSData, NSString;

@interface NWAddressEndpoint : NWHostEndpoint

@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSString *addressStringNoPort;
@property (nonatomic, readonly) NSData *addressData;
@property (nonatomic, readonly) const struct sockaddr *address;
@property (nonatomic, readonly) unsigned long long addressFamily;

+ (unsigned int)endpointType;
+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;
+ (id)endpointWithAddress:(const struct sockaddr *)arg1;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)ethernetAddress;

@end
