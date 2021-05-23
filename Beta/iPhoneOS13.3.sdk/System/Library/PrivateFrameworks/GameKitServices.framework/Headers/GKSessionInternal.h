/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKAutoPeerIDTable, GKConnection, GKList, GKSession, GKTable, GKVoiceChatSessionListener, NSString;

@protocol GKSessionDOOBReceiveHandler, GKSessionDelegate, GKSessionPrivateDelegate;

@interface GKSessionInternal : NSObject

{
    GKSession *_session;
    NSString *domain;
    NSString *serviceType;
    unsigned long long _port;
    NSString *_displayName;
    unsigned int _pid;
    unsigned long long maxPeers;
    struct OpaqueGCKSession *sessionRef;
    struct OpaqueAGPSession *agpSessionRef;
    GKConnection *_connection;
    id _delegate;
    id _privateDelegate;
    id _dataReceiveHandler;
    void *_dataReceiveHandlerContext;
    id <GKSessionDOOBReceiveHandler> _doobReceiveHandler[2];
    void *_doobReceiveHandlerContext[2];
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKAutoPeerIDTable *_peerIDTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_mutex_t _delegateLock;
    _Bool _isSearching;
    _Bool _isPublishing;
    _Bool _sessionStarted;
    unsigned int _mode;
    _Bool _isBusy;
    NSString *sessionID;
    double disconnectTimeout;
    struct _DNSServiceRef_t *_dnsServiceConnection;
    struct _DNSServiceRef_t *_dnsServiceResolveConnection;
    int _sReset;
    struct _DNSServiceRef_t *_serviceBrowser;
    struct _DNSServiceRef_t *_service;
    struct _DNSServiceRef_t *_oldService;
    _Bool _handleEventsRunning;
    _Bool _stopHandlingEvents;
    _Bool _wifiEnabled;
    _Bool _shutdown;
    GKVoiceChatSessionListener *_voiceChatListener;
}

@property (nonatomic) struct OpaqueGCKSession *sessionRef;
@property (nonatomic) struct OpaqueAGPSession *agpSessionRef;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic) unsigned long long maxPeers;
@property (nonatomic) unsigned long long port;
@property (retain, readonly) GKConnection *connection;
@property (nonatomic, readonly) id dataReceiveHandler;
@property id <GKSessionDelegate> delegate;
@property (readonly) NSString *sessionID;
@property (readonly) NSString *displayName;
@property (readonly) unsigned int sessionMode;
@property (readonly) NSString *peerID;
@property double disconnectTimeout;
@property (getter=isAvailable) _Bool available;
@property id <GKSessionPrivateDelegate> privateDelegate;
@property (getter=isBusy) _Bool busy;
@property _Bool wifiEnabled;

- (void)dealloc;
- (id)description;
- (void)lock;
- (void)unlock;
- (void)reset;
- (id)serviceName;
- (void)publish;
- (_Bool)isShuttingDown;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(unsigned int)arg4;
- (id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)displayNameForPeer:(id)arg1;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)sendDataToAllPeers:(id)arg1 withDataMode:(unsigned int)arg2 error:(id *)arg3;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void *)arg2;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (_Bool)acceptConnectionFromPeer:(id)arg1 error:(id *)arg2;
- (void)denyConnectionFromPeer:(id)arg1;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)disconnectFromAllPeers;
- (id)peersWithConnectionState:(unsigned int)arg1;
- (_Bool)isPeerBusy:(id)arg1;
- (void)sendCallbacksToDelegate:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;
- (void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)stopResolvingAllPeers;
- (id)newNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)newNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (void)printDictionaries;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (_Bool)parseServiceName:(const char *)arg1 intoDisplayName:(id *)arg2 pid:(unsigned int *)arg3 state:(id *)arg4;
- (void)didPublishWithError:(int)arg1;
- (id)stringForGCKID:(unsigned int)arg1;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 enableOOB:(_Bool)arg4 error:(id *)arg5;
- (void)browse;
- (void)setDOOBReceiveHandler:(id)arg1 withContext:(void *)arg2 inBand:(unsigned int)arg3;
- (_Bool)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)checkDNSConnection;
- (void)handleEvents;
- (_Bool)filterService:(const char *)arg1 withPID:(unsigned int)arg2;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void *)arg3;
- (void)cleanupExAvailablePeers;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char *)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void *)arg4 withError:(int)arg5 moreComing:(_Bool)arg6;
- (_Bool)tryConnectToPeer:(id)arg1;
- (_Bool)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned int)arg3 error:(id *)arg4;
- (void)timeoutConnectToPeer:(id)arg1;
- (void)stopOldService;
- (void)didFindService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(_Bool)arg4;
- (void)didRemoveService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(_Bool)arg4;
- (void)didLookupHostname:(struct _DNSServiceRef_t *)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 address:(const struct sockaddr_in *)arg4 interface:(unsigned int)arg5 withError:(int)arg6 moreComing:(_Bool)arg7;
- (void)didResolveService:(struct _DNSServiceRef_t *)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 port:(unsigned short)arg4 interface:(unsigned int)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void *)arg7 withError:(int)arg8 moreComing:(_Bool)arg9;
- (id)voiceChatSessionListener;

@end
