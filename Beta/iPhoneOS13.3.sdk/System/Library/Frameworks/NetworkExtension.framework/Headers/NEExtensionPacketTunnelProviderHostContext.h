/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setVirtualInterfaceSocket:(id)arg1;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestSocket:(_Bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
