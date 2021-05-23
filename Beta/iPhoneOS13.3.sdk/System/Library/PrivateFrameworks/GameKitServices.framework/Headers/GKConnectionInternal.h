/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GKConnection.h>

@class CDXClient, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, TimingCollection;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GKConnectionInternal : GKConnection

{
    unsigned int _gckPID;
    NSString *_pidGUID;
    struct OpaqueGCKSession *_gckSession;
    NSMutableArray *_gckEventList;
    id _eventDelegate;
    CDXClient *_cdxClient;
    NSMutableDictionary *_cdxSessions;
    NSData *_preblob;
    CDUnknownBlockType _preblobCallback;
    double _preblobCallbackCancelTime;
    struct _opaque_pthread_mutex_t _xPreblobFetch;
    struct _opaque_pthread_cond_t _cPreblobFetch;
    struct _opaque_pthread_mutex_t _xPrepareThread;
    struct _opaque_pthread_cond_t _cPrepareThread;
    int _fPrepareThread;
    double _wakeTime;
    NSMutableDictionary *_preblobToPIDMap;
    NSMutableDictionary *_pidToPreblobMap;
    NSMutableDictionary *_pidToConnectionDataMap;
    NSMutableArray *_pendingConnectionPIDList;
    _Bool _fAllowMoreRelay;
    NSMutableArray *_allowRelayPIDList;
    NSMutableDictionary *_pidToPlayerIDMap;
    NSMutableDictionary *_pidToConnectTimeoutSource;
    struct _opaque_pthread_mutex_t _xRelay;
    NSMutableDictionary *_pidToRelayInitiateInfoMap;
    NSMutableDictionary *_pidToRelayConnectionDataMap;
    NSMutableDictionary *_pidToRelayUpdateInfoMap;
    NSMutableDictionary *_initRelayQueue;
    NSMutableDictionary *_updateRelayQueue;
    int _fPreReleased;
    int _localGamingCDXSocket;
    unsigned short _localGamingCDXPort;
    NSObject<OS_dispatch_source> *_localGamingCDXListenSource;
    NSMutableDictionary *_localGamingSocketToPIDMap;
    NSMutableDictionary *_localGamingSocketToConnectionDataMap;
    NSMutableSet *_pidsPreparedForConnection;
    struct opaqueRTCReporting *_reportingAgent;
    TimingCollection *_perfTimers;
}

@property (retain, nonatomic) CDXClient *cdxClient;
@property (retain) NSMutableDictionary *cdxSessions;
@property (retain) NSMutableDictionary *pidToConnectTimeoutSource;

- (void)dealloc;
- (id)timerQueue;
- (struct opaqueRTCReporting *)reportingAgent;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (struct OpaqueGCKSession *)gckSession;
- (unsigned int)gckPID;
- (id)initWithParticipantID:(id)arg1;
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getLocalConnectionDataForLocalGaming;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (_Bool)convertPeerID:(id)arg1 toParticipantID:(id *)arg2;
- (_Bool)convertParticipantID:(id)arg1 toPeerID:(id *)arg2;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;
- (id)networkStatistics;
- (void)CDXClientSession:(id)arg1 receivedData:(id)arg2 from:(long long)arg3;
- (void)CDXClient:(id)arg1 error:(id)arg2;
- (void)CDXClient:(id)arg1 preblob:(id)arg2;
- (void)preRelease;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (void)cancelConnectParticipant:(id)arg1;
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg1;
- (id)asyncWorkQueue;
- (id)createInsecureTicketUsingSortedConnectionsFromList:(id)arg1;
- (_Bool)shouldWeInitiateRelayWithPID:(unsigned int)arg1;
- (void)localGamingReceiveDataHandler:(id)arg1 data:(id)arg2 time:(double)arg3 error:(id)arg4;
- (void)addEvent:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;
- (id)createInitiateRelayDictionaryForParticipant:(id)arg1 remotePeerID:(id)arg2;
- (void)internal_setRemoteConnectionData:(id)arg1 fromParticipantID:(id)arg2 pendingConnectionPIDList:(id)arg3;
- (void)connectPendingConnectionsFromList:(id)arg1 sessionInfo:(id)arg2;
- (id)extractBlobUsingData:(id)arg1 withSourcePID:(unsigned int)arg2 destPID:(unsigned int)arg3;
- (void)internalInitiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;
- (void)internalUpdateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;
- (id)newRelayUpdateDictionaryForParticipant:(id)arg1 didInitiate:(_Bool)arg2;
- (void)doRelayCheckForRemotePeerID:(id)arg1;
- (_Bool)localGamingCheckEstablishConnection:(id)arg1 connectionData:(id)arg2;
- (_Bool)startListeningForLocalGamingCDX;

@end
