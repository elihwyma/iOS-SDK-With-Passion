/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnelFlowProtocol.h>

@class NSDate, NSMutableArray, NWEndpoint, NWUDPSession;

@interface NPTunnelFlowUDP : NPTunnelFlowProtocol

{
    NSMutableArray *_savedDirectData;
    unsigned long long _savedDataSize;
    NWUDPSession *_directSession;
    NSDate *_firstPacketDate;
    NWEndpoint *_remoteEndpoint;
}

@property (retain) NSMutableArray *savedDirectData;
@property unsigned long long savedDataSize;
@property (retain) NWUDPSession *directSession;
@property (retain) NSDate *firstPacketDate;
@property (readonly) NWEndpoint *remoteEndpoint;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(struct nw_protocol *)arg3 extraProperties:(id)arg4;
- (void)handleAppData:(id)arg1;
- (void)sendDataOnDirectSession:(id)arg1;
- (void)handleIncomingData:(id)arg1 andError:(id)arg2;
- (void)startHandlingIncomingData;
- (void)startDirectConnection;
- (void)stopDirectConnection;

@end
