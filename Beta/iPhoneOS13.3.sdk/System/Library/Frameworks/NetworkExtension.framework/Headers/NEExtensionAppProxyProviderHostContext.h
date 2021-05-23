/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString;

@interface NEExtensionAppProxyProviderHostContext : NEExtensionTunnelProviderHostContext <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)openFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
