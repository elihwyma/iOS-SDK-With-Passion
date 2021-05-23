/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEAgentTunnelExtension.h>

@interface NEAgentPacketTunnelExtension : NEAgentTunnelExtension

- (int)requiredEntitlement;
- (void)handleExtensionStartedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldAllowUnentitledExtension:(id)arg1;

@end
