/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnelFlowHTTP.h>

@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP

- (void)handleTunnelConnected;
- (_Bool)isBestEffort;
- (id)initWithTunnel:(id)arg1 service:(id)arg2 postURL:(id)arg3;
- (void)reportTelemetry:(id)arg1;

@end
