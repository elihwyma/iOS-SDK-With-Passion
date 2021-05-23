/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSObject;

@protocol OS_dispatch_data;

@interface NPTunnelFlowProtocol : NPTunnelFlow

{
    _Bool _disconnectedByTunnel;
    NSObject<OS_dispatch_data> *_inputBuffer;
    _Bool _discardFirstData;
    _Bool _connectedOnTunnelReadyForData;
    _Bool _connectedOnInitialData;
    _Bool _waitingForOutput;
    struct nw_protocol *_inputProtocol;
}

@property (nonatomic, readonly) struct nw_protocol *inputProtocol;
@property (nonatomic, readonly) _Bool waitingForOutput;

- (void)disconnect;
- (_Bool)connect;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(struct nw_protocol *)arg3 extraProperties:(id)arg4;
- (void)handleAppData:(id)arg1;
- (void)sendDataToClient:(id)arg1 fromTunnel:(_Bool)arg2;
- (void)readDataFromClient;
- (void)closeClientFlowWithError:(int)arg1;
- (_Bool)isClientFlowClosed;
- (void)handleTunnelReadyForData;
- (void)notifyClientConnected;
- (_Bool)addBufferToFrameArray:(struct nw_frame_array_s *)arg1 bufferSize:(unsigned long long)arg2;
- (void)dropInputProtocol;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg1 limitMinimumBytes:(unsigned int)arg2 limitMaximumBytes:(unsigned int)arg3 limitMaximumFrames:(unsigned int)arg4;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg1 limitMinimumBytes:(unsigned int)arg2 limitMaximumBytes:(unsigned int)arg3 limitMaximumFrames:(unsigned int)arg4;
- (void)handleOutputFrame:(id)arg1 send:(_Bool)arg2;

@end
