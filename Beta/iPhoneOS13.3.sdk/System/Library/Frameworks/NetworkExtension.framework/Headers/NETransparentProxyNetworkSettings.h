/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings

{
    NSArray *_includedNetworkRules;
    NSArray *_excludedNetworkRules;
}

@property (copy) NSArray *includedNetworkRules;
@property (copy) NSArray *excludedNetworkRules;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)validateNetworkRule:(id)arg1 collectErrors:(id)arg2;

@end
