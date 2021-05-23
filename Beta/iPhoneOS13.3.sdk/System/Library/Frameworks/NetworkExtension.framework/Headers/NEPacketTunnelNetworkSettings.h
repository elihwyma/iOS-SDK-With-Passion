/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NEIPv4Settings, NEIPv6Settings, NSNumber;

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings

{
    NEIPv4Settings *_IPv4Settings;
    NEIPv6Settings *_IPv6Settings;
    NSNumber *_tunnelOverheadBytes;
    NSNumber *_MTU;
}

@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;
@property (copy) NSNumber *tunnelOverheadBytes;
@property (copy) NSNumber *MTU;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initFromLegacyDictionary:(id)arg1;

@end
