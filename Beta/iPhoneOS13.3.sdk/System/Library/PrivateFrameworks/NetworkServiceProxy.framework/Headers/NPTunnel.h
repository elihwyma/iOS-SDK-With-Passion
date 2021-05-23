/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSPAppRule, NSUUID;

@protocol NPTunnelDelegate, OS_dispatch_data, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters, OS_nw_path;

@interface NPTunnel : NSObject

{
    struct nw_protocol _protocol;
    NSObject<OS_dispatch_data> *_savedData;
    void *_idleTimer;
    _Bool _isTFOProbeSucceeded;
    _Bool _isCancelled;
    _Bool _isReadyForData;
    _Bool _eof;
    _Bool _handledDisconnected;
    _Bool _disableIdleTimeout;
    int _error;
    NSUUID *_identifier;
    NSObject<OS_nw_parameters> *_parameters;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_path> *_path;
    id <NPTunnelDelegate> _delegate;
    NSMutableDictionary *_flows;
    NSPAppRule *_appRule;
    NSDate *_connectionStartDate;
    double _timeToFirstRequest;
    double _timeToFirstByte;
    long long _connectionState;
    long long _fallbackReason;
    unsigned long long *_timestamps;
}

@property (nonatomic) _Bool eof;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (retain, nonatomic) NSObject<OS_nw_path> *path;
@property (nonatomic) _Bool handledDisconnected;
@property (nonatomic) _Bool disableIdleTimeout;
@property (nonatomic) long long connectionState;
@property (retain, nonatomic) NSDate *connectionStartDate;
@property (nonatomic) int error;
@property (nonatomic) long long fallbackReason;
@property (nonatomic) double timeToFirstRequest;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) _Bool isCancelled;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) struct nw_protocol *protocol;
@property (nonatomic, readonly) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic, readonly) NSObject<OS_nw_interface> *outputInterface;
@property (weak, nonatomic, readonly) id <NPTunnelDelegate> delegate;
@property (nonatomic, readonly) NSMutableDictionary *flows;
@property (nonatomic, readonly) NSPAppRule *appRule;
@property (nonatomic, readonly) _Bool canHandleMoreData;
@property (nonatomic, readonly) unsigned long long initialWindowSize;
@property (nonatomic, readonly) _Bool isConnectionAlive;
@property (nonatomic, readonly) unsigned long long *timestamps;
@property (nonatomic, readonly) _Bool isTFOProbeSucceeded;
@property (nonatomic, readonly) _Bool isReadyForData;

+ (void)initializeProtocol;

- (void)dealloc;
- (_Bool)start;
- (void)write:(id)arg1;
- (void)destroyConnection;
- (void)cancelConnection;
- (void)removeFlow:(unsigned long long)arg1;
- (_Bool)addNewFlow:(id)arg1;
- (_Bool)hasFlow:(unsigned long long)arg1;
- (void)closeFlow:(id)arg1;
- (id)createConnectionInfo;
- (id)handleFlowClosed:(unsigned long long)arg1 withFallbackReason:(long long)arg2;
- (void)sendData:(id)arg1 toClientFlow:(unsigned long long)arg2;
- (void)increaseWindowSizeForFlow:(unsigned long long)arg1 byBytes:(unsigned long long)arg2;
- (_Bool)flowIsFirstFlow:(id)arg1;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)handleFlowUsedTunnel;
- (void)handleFallbackForFlow:(id)arg1;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (void)handleConnected;
- (void)handleDisconnected;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (void)handleCanHandleMoreData;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 delegate:(id)arg5;
- (void)handleReady;
- (void)handleInputAvailable;
- (void)handleReadData:(struct nw_frame_array_s *)arg1;
- (void)handleEOF;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)writeInitialData;
- (unsigned long long)allocateFlowID;
- (void)startIdleTimer;
- (void)teardownOutputHandler;
- (void)handleConnectionIsDisconnected;
- (void)handleOutputAvailable;

@end
