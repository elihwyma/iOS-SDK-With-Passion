/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnelFlowUDP.h>

@class NSPDNSPacket;

@interface NPTunnelFlowDNS : NPTunnelFlowUDP

{
    _Bool _telemetryReported;
    NSPDNSPacket *_query;
    long long _tunnelResult;
    NSPDNSPacket *_tunnelDNSResponse;
    long long _directResult;
    NSPDNSPacket *_directDNSResponse;
    void *_tunnelResponseTimer;
}

@property (retain) NSPDNSPacket *query;
@property long long tunnelResult;
@property (retain) NSPDNSPacket *tunnelDNSResponse;
@property long long directResult;
@property (retain) NSPDNSPacket *directDNSResponse;
@property void *tunnelResponseTimer;
@property _Bool telemetryReported;

- (void)handleAppData:(id)arg1;
- (void)sendDataToClient:(id)arg1 fromTunnel:(_Bool)arg2;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (_Bool)shouldSendDataToClient:(id)arg1 fromTunnel:(_Bool)arg2;
- (_Bool)checkAndReportTelemetry;
- (void)closeFromTunnel;
- (id)addDNSInfoToTelemetry:(id)arg1;
- (id)resultToString:(long long)arg1;
- (id)createStateDictionaryWithResult:(long long)arg1 response:(id)arg2;
- (void)handleTunnelConnected;
- (void)cleanupLosingConnection:(_Bool)arg1;

@end
