/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENexus.h>

@class NWRemotePacketProxy;

@interface NEInternetNexus : NENexus

{
    struct nw_protocol *_utunProtocol;
    NWRemotePacketProxy *_packetProxy;
}

@property struct nw_protocol *utunProtocol;
@property (retain) NWRemotePacketProxy *packetProxy;
@property (readonly) struct NEVirtualInterface_s *virtualInterface;

- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (void)connectNewFlow:(id)arg1;
- (void)disconnectFlow:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(_Bool)arg3;
- (_Bool)setDefaultInputHandler:(struct nw_protocol *)arg1;
- (void)setRemotePacketProxy:(id)arg1;
- (_Bool)setUseFlowswitch:(_Bool)arg1;

@end
