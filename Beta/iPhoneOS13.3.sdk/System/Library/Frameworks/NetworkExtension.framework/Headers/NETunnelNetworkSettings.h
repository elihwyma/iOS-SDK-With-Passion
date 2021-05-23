/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEDNSSettings, NEProxySettings, NSString;

@interface NETunnelNetworkSettings : NSObject

{
    NSString *_tunnelRemoteAddress;
    NEDNSSettings *_DNSSettings;
    NEProxySettings *_proxySettings;
}

@property (readonly) NSString *tunnelRemoteAddress;
@property (copy) NEDNSSettings *DNSSettings;
@property (copy) NEProxySettings *proxySettings;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithTunnelRemoteAddress:(id)arg1;

@end
