/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CUTCPServer, CUWiFiManager, NSData, NSString, NSUUID, RPConnection;

@protocol OS_dispatch_queue, OS_nw_listener, OS_nw_path_evaluator, RPMessageable;

@interface RPStreamSession : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_nw_listener> *_nwListener;
    NSObject<OS_nw_path_evaluator> *_nwPathEvaluator;
    unsigned char _ourCurveSK[32];
    CDUnion_fab80606 _peerIP;
    int _peerPort;
    _Bool _prepareOnly;
    RPConnection *_rpCnx;
    CUTCPServer *_tcpServer;
    _Bool _trafficRegistrationCalled;
    CUWiFiManager *_wifiManager;
    _Bool _serverMode;
    int _flowControlState;
    unsigned int _streamFlags;
    int _streamSocket;
    int _streamType;
    unsigned int _trafficFlags;
    unsigned long long _delegatedProcessUPID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    id <RPMessageable> _messenger;
    NSUUID *_nwClientID;
    CDUnknownBlockType _receivedEventHandler;
    CDUnknownBlockType _receivedRequestHandler;
    CDUnknownBlockType _statusChangedHandler;
    unsigned long long _statusFlags;
    NSString *_streamID;
    NSData *_streamKey;
    NSString *_trafficSessionID;
    NSString *_destinationString;
    NSData *_pskData;
    CDUnknownBlockType _streamAcceptHandler;
}

@property (copy, nonatomic) NSString *destinationString;
@property (copy, nonatomic) NSUUID *nwClientID;
@property (copy, nonatomic) NSData *pskData;
@property (nonatomic) _Bool serverMode;
@property (copy, nonatomic) CDUnknownBlockType streamAcceptHandler;
@property (copy, nonatomic) NSData *streamKey;
@property (nonatomic) int streamSocket;
@property (nonatomic) unsigned long long delegatedProcessUPID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) int flowControlState;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (retain, nonatomic) id <RPMessageable> messenger;
@property (copy, nonatomic) CDUnknownBlockType receivedEventHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangedHandler;
@property (nonatomic, readonly) unsigned long long statusFlags;
@property (nonatomic) unsigned int streamFlags;
@property (copy, nonatomic) NSString *streamID;
@property (nonatomic) int streamType;
@property (nonatomic) unsigned int trafficFlags;
@property (copy, nonatomic) NSString *trafficSessionID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_updateTrafficRegistration;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)startServerConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)acceptedByServer;
- (void)activateForServerRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_clientUDPSocketStartWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_startServerConnectionAndReturnError:(id *)arg1;
- (void)_clientRPConnectionStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)_clientRPConnectionPrepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_clientUDPNWPathStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)_serverUDPSocketStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_serverRPConnectionStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_serverUDPNWPathStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)_lowLatencySelfAddressString:(id *)arg1;
- (void)_clientUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 usb:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_clientUDPNWPathStartResponse:(id)arg1 options:(id)arg2 localEndpoint:(id)arg3 nwInterface:(id)arg4 selfIPString:(id)arg5 usb:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_updateTrafficRegistrationForIP:(const CDUnion_fab80606 *)arg1;
- (void)_serverUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 peerIP:(CDUnion_fab80606)arg4 peerMACData:(id)arg5 usb:(_Bool)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)_clientUDPSocketStartResponse:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_clientRPConnectionPrepareResponse:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_serverRPConnectionHandleConnectionAccepted:(int)arg1;
- (void)_serverRPConnectionHandleConnectionStarted:(id)arg1;
- (unsigned int)_getSockAddrInterfaceType:(const void *)arg1;

@end
