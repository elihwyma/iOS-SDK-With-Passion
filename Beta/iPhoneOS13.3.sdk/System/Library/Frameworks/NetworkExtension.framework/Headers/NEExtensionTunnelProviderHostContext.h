/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionProviderHostContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString;

@interface NEExtensionTunnelProviderHostContext : NEExtensionProviderHostContext <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)establishIPCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didSetReasserting:(_Bool)arg1;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIPCDetached;

@end
