/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NETunnelProvider.h>

@class NEPacketTunnelFlow, NSString;

@interface NEPacketTunnelProvider : NETunnelProvider

{
    NEPacketTunnelFlow *_packetFlow;
}

@property (retain) NEPacketTunnelFlow *packetFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)requestSocket:(_Bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithVirtualInterfaceType:(long long)arg1;
- (void)cancelTunnelWithError:(id)arg1;
- (id)getTunnelInterface;
- (id)createTCPConnectionThroughTunnelToEndpoint:(id)arg1 enableTLS:(_Bool)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (id)createUDPSessionThroughTunnelToEndpoint:(id)arg1 fromEndpoint:(id)arg2;

@end
