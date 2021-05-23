/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@protocol NEVPNPluginManager

- (unsigned short)handleIPCDetached;
- (unsigned short)setPersistentData:ofType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createVirtualInterfaceOfType:maxPendingPackets:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setStatus:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setTunnelNetworkSettings:completionHandler: /* Error: Ran out of types for this method. */;

@end
