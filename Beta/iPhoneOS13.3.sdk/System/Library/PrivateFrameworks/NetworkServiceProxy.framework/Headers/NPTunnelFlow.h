/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NPFlowProperties, NPTunnel, NSDate, NSPAppRule;

@protocol OS_dispatch_data;

@interface NPTunnelFlow : NSObject

{
    _Bool _hasTunnel;
    int _tunnelError;
    long long _fallbackReason;
    _Bool _isDirectConnectionViable;
    _Bool _fallbackDisabled;
    _Bool _enableDirectRace;
    _Bool _disconnectedByApp;
    _Bool _shouldComposeIntialData;
    unsigned long long _hashKey;
    unsigned long long _identifier;
    NPTunnel *_tunnel;
    long long _state;
    NSPAppRule *_appRule;
    NPFlowProperties *_extraFlowProperties;
    NSDate *_firstTxByteTimestamp;
    NSDate *_startDate;
    void *_window;
    unsigned long long _initialBytesLeftOver;
    NSObject<OS_dispatch_data> *_savedData;
    void *_fallbackTimer;
    void *_telemetryTimer;
    double _fallbackDelay;
}

@property (retain, nonatomic) NSObject<OS_dispatch_data> *savedData;
@property (nonatomic) void *fallbackTimer;
@property (nonatomic) void *telemetryTimer;
@property (nonatomic) double fallbackDelay;
@property (nonatomic, readonly) unsigned long long hashKey;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, readonly) NPTunnel *tunnel;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSPAppRule *appRule;
@property (nonatomic, readonly) NPFlowProperties *extraFlowProperties;
@property (nonatomic) long long fallbackReason;
@property (retain, nonatomic) NSDate *firstTxByteTimestamp;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) void *window;
@property (nonatomic) unsigned long long initialBytesLeftOver;
@property (nonatomic) _Bool isDirectConnectionViable;
@property (nonatomic) _Bool fallbackDisabled;
@property (nonatomic, readonly) _Bool enableDirectRace;
@property (nonatomic, readonly) _Bool isClientFlowClosed;
@property (nonatomic, readonly) _Bool isBestEffort;
@property (nonatomic) _Bool disconnectedByApp;
@property (nonatomic) _Bool shouldComposeIntialData;

- (void)dealloc;
- (void)reportMetrics;
- (void)closeWithError:(int)arg1;
- (id)appData;
- (void)setAppData:(id)arg1;
- (void)handleAppData:(id)arg1;
- (void)sendDataToClient:(id)arg1 fromTunnel:(_Bool)arg2;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)readDataFromClient;
- (void)startDirectConnection;
- (void)stopDirectConnection;
- (_Bool)shouldSendDataToClient:(id)arg1 fromTunnel:(_Bool)arg2;
- (void)closeFromTunnel;
- (void)handleTunnelCanHandleMoreData;
- (void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3;
- (void)createTelemetryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleTunnelConnected;
- (void)cleanupLosingConnection:(_Bool)arg1;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4;
- (void)closeClientFlowWithError:(int)arg1;
- (id)copyConnectionInfo;
- (void)processConnectionInfo:(id)arg1;
- (id)createFallbackConnectionInfoWithFallbackReason:(long long)arg1;
- (id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2;
- (void)increaseWindowSize:(unsigned long long)arg1;
- (void)handleTunnelDisconnected;
- (void)handleTunnelReadyForData;

@end
