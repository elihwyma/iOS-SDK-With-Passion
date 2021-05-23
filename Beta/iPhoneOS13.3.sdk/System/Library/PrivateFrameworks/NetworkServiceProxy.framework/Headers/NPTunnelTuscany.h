/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnel.h>

@class NPTuscanyOnRamp, NSDate, NSObject;

@protocol OS_nw_connection;

@interface NPTunnelTuscany : NPTunnel

{
    unsigned long long _nextFlowID;
    NSObject<OS_nw_connection> *_UDPSession;
    void *_connectionTimer;
    _Bool _shouldReportUsage;
    void *_pingTimer;
    void *_usageReportTimer;
    NPTuscanyOnRamp *_onRamp;
    unsigned int _waldoTimestamp;
    _Bool _ignoreWaldoTimestamp;
    _Bool _isFirstTunnel;
    void *_clientRef;
    CDUnknownBlockType _pendingPingCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType pendingPingCompletionHandler;
@property (nonatomic) _Bool isFirstTunnel;
@property (nonatomic, readonly) unsigned int dayPassSessionCounter;
@property (nonatomic, readonly) unsigned long long maxFrameSize;
@property (nonatomic) void *clientRef;
@property (nonatomic, readonly) long long currentMTU;
@property (nonatomic) _Bool ignoreWaldoTimestamp;
@property (nonatomic, readonly) NSDate *dayPassCreationDate;

- (void)dealloc;
- (_Bool)start;
- (void)handleConnectionError;
- (void)destroyConnection;
- (_Bool)isTFOProbeSucceeded;
- (unsigned long long)initialWindowSize;
- (void)cancelConnection;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;
- (void)createTuscanyClient;
- (void)startConnectionTimer;
- (void)cancelConnectionTimer;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeFlow:(id)arg1;
- (id)createConnectionInfo;
- (void)handleHelloAck:(unsigned int)arg1;
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;
- (_Bool)flowIsFirstFlow:(id)arg1;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)handleFlowUsedTunnel;
- (void)handleFallbackForFlow:(id)arg1;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (void)handleConnected;
- (void)handleDisconnected;
- (_Bool)canHandleMoreData;
- (void)sendDataOnUDPSession:(id)arg1;
- (void)handleInputAvailable;
- (void)handleReadData:(struct nw_frame_array_s *)arg1;
- (void)handleEOF;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)writeInitialData;
- (unsigned long long)allocateFlowID;

@end
