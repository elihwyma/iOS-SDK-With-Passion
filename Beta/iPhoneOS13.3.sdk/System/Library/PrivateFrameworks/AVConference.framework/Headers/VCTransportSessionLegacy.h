/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCTransportSession.h>

@class GKInterfaceListener, LoopbackSocketTunnel, NSCondition, NSData, NSDictionary, NSMutableDictionary, NSObject, NSString, TCPTunnelClient, VCTransport;

@protocol OS_dispatch_source, VCConnectionProtocol, VCTransportSessionLegacyDelegate, VideoConferenceRealTimeChannel;

__attribute__((visibility("hidden")))
@interface VCTransportSessionLegacy : VCTransportSession

{
    unsigned char _localU8Version;
    long long relayState;
    int pendingRelayCount;
    float callerPreEmptiveTimeoutInSecs;
    unsigned int _connectionSetupRTTEstimate;
    _Bool allowsRelay;
    _Bool initialSecondaryRelaySetupDone;
    _Bool requestedTimeoutRelay;
    _Bool _isCaller;
    _Bool _didReceivePiggybackBlob;
    _Bool _useLoopback;
    _Bool _isRemoteOSPreLion;
    _Bool _isStarted;
    NSObject<OS_dispatch_source> *relaySetupTimer;
    VCTransport *transport;
    unsigned int _callID;
    unsigned int _remoteCallID;
    int _NATType;
    NSMutableDictionary *_localRelayRequestResponse;
    NSDictionary *_localRelayUpdate;
    NSMutableDictionary *_remoteRelayRequestResponse;
    NSDictionary *_remoteRelayUpdate;
    NSData *_localConnectionData;
    NSData *_localRelayConnectionData;
    NSData *_remoteConnectionData;
    NSData *_remoteRelayConnectionData;
    NSString *_localParticipantID;
    NSString *_remoteParticipantID;
    NSString *_sessionID;
    struct __SecIdentity *_identity;
    TCPTunnelClient *_tcpTunnelClient;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    LoopbackSocketTunnel *_tunnel;
    id <VCConnectionProtocol> _loopbackConnection;
    NSCondition *_connectionDataTimeoutCondVar;
    GKInterfaceListener *_interfaceListener;
    int _operatingMode;
    id _delegate;
}

@property (nonatomic) int pendingRelayCount;
@property (nonatomic) _Bool initialSecondaryRelaySetupDone;
@property (retain, nonatomic) NSDictionary *localRelayUpdate;
@property (retain, nonatomic) NSDictionary *remoteRelayUpdate;
@property (retain, nonatomic) NSMutableDictionary *remoteRelayRequestResponse;
@property (retain, nonatomic) NSData *remoteRelayConnectionData;
@property (retain) NSMutableDictionary *localRelayRequestResponse;
@property (retain) NSData *localConnectionData;
@property (retain) NSData *localRelayConnectionData;
@property _Bool allowsRelay;
@property _Bool isCaller;
@property unsigned int remoteCallID;
@property id <VCTransportSessionLegacyDelegate> delegate;
@property (copy) NSString *localParticipantID;
@property (copy) NSString *remoteParticipantID;
@property (copy) NSString *sessionID;
@property (retain) NSData *remoteConnectionData;
@property int NATType;
@property int operatingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)setIdentity:(struct __SecIdentity *)arg1;
- (void)triggerInterfaceChange;
- (void)networkStateDidChange;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;
- (_Bool)isHandoverSupported;
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (int)getSignalStrengthBars:(int *)arg1 displayBars:(int *)arg2 maxDisplayBars:(int *)arg3;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(_Bool)arg2;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (void)deregisterBasebandNotifications;
- (int)detailedErrorCode;
- (void)reportNetworkConditionsDegraded;
- (void)processRemoteIPChange:(id)arg1;
- (void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)processRelayUpdate:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (_Bool)isRemoteOSPreLion;
- (void)handleConnectionSetupDataChangeMessageDelivered;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (void)setForceRelay;
- (void)setupTransport;
- (void)initiateRelayRequest;
- (_Bool)startConnectionWithBlob:(id)arg1 useRelay:(_Bool)arg2 isInitialRelay:(_Bool)arg3 error:(id *)arg4;
- (double)iceTimeoutInSeconds:(_Bool)arg1;
- (void)stopLoopback;
- (void)deleteTCPTunnel;
- (_Bool)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(_Bool)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;
- (void)resetICETimeoutToLongTimeout;
- (id)createRelayUpdateDictionary:(id)arg1;
- (void)getConnectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)destroySecondaryRelayDispatchTimer;
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(_Bool)arg2;
- (void)notifyDelegateToCancelRelay;
- (_Bool)isConnectedAndAllowAdditionalConnection;
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT *)arg2;
- (id)createInitiateRelayDictionary;
- (unsigned char)transportCallType;
- (struct tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(_Bool)arg1;
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(_Bool)arg3;
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3;
- (_Bool)handleExchangedKey:(id)arg1 result:(int)arg2;
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT *)arg1;
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1;
- (void)resetLoopback;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setupLoopbackWithConnectionType:(unsigned int)arg1;
- (void)stopLoopbackProc:(id)arg1;
- (id)connectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4;
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;
- (id)connectionData:(char *)arg1 connectionDataSizeInBytes:(int)arg2 shouldUseRelay:(_Bool)arg3;
- (void)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(_Bool)arg2 didUseRelay:(_Bool)arg3 secretKey:(id)arg4 skeResult:(int)arg5;
- (void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2;
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(_Bool)arg1 callID:(unsigned int)arg2 connectionId:(int)arg3;
- (unsigned int)connectionSetupRTTEstimate;

@end
