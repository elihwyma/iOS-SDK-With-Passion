/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>

@class NSString;

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionPoint;
- (void)setSystemDNSSettings:(id)arg1;

@end
