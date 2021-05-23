/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany

{
    void *_window;
    NPTunnelFlow *_flow;
}

@property void *window;
@property (retain) NPTunnelFlow *flow;

- (void)dealloc;
- (void)write:(id)arg1;
- (unsigned long long)initialWindowSize;
- (void)cancelConnection;
- (void)removeFlow:(unsigned long long)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;
- (_Bool)addNewFlow:(id)arg1;
- (unsigned long long)maxFrameSize;
- (void)createTuscanyClient;
- (unsigned int)dayPassSessionCounter;
- (long long)currentMTU;
- (_Bool)selectBestEdge;
- (void)startConnectionTimer;
- (void)cancelConnectionTimer;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
