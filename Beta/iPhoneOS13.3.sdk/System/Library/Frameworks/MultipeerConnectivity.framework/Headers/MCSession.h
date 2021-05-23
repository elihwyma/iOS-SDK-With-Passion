/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class MCPeerID, NSArray, NSMutableDictionary, NSString;

@protocol MCSessionDelegate, MCSessionPrivateDelegate, OS_dispatch_queue;

@interface MCSession : NSObject

{
    _Bool _AWDLDisabled;
    id <MCSessionDelegate> _delegate;
    _Bool _preferNCMOverEthernet;
    id <MCSessionPrivateDelegate> _privateDelegate;
    unsigned int _gckPID;
    MCPeerID *_myPeerID;
    NSArray *_securityIdentity;
    long long _encryptionPreference;
    struct OpaqueGCKSession *_gckSession;
    struct OpaqueAGPSession *_agpSession;
    NSMutableDictionary *_peerIDMap;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_peerStates;
    NSMutableDictionary *_connectionPendingPeerEvents;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _stateHandle;
    NSString *_sessionID;
    unsigned long long _maxPeers;
}

@property (nonatomic) id <MCSessionPrivateDelegate> privateDelegate;
@property (nonatomic, getter=isAWDLDisabled) _Bool AWDLDisabled;
@property (nonatomic) _Bool preferNCMOverEthernet;
@property (nonatomic) struct OpaqueGCKSession *gckSession;
@property (nonatomic) struct OpaqueAGPSession *agpSession;
@property (nonatomic) unsigned int gckPID;
@property (retain, nonatomic) NSMutableDictionary *peerIDMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) id <MCSessionPrivateDelegate> privateDelegate;
@property (retain, nonatomic) NSMutableDictionary *peerStates;
@property (retain, nonatomic) NSMutableDictionary *connectionPendingPeerEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long maxPeers;
@property (weak, nonatomic) id <MCSessionDelegate> delegate;
@property (nonatomic, readonly) MCPeerID *myPeerID;
@property (nonatomic, readonly) NSArray *securityIdentity;
@property (nonatomic, readonly) long long encryptionPreference;
@property (nonatomic, readonly) NSArray *connectedPeers;

+ (id)stringForSessionState:(long long)arg1;
+ (id)stringForMCSessionSendDataMode:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id *)arg4;
- (id)initWithPeer:(id)arg1;
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 shouldTriggerCancelProgress:(_Bool)arg5;
- (void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(_Bool)arg4;
- (id)stringForEncryptionPreference:(long long)arg1;
- (void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 shouldTriggerCancelProgress:(_Bool)arg6;
- (unsigned long long)syncConnectedPeersCount;
- (id)syncDetailedDescription;
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg1 connectionBlob:(id)arg2;
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)syncLogConnectedPeers;
- (void)syncLogMaxConnectedPeers;
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)arg1;
- (void)startConnectionWithIndirectPID:(unsigned int)arg1;
- (void)syncHandleNetworkEvent:(CDStruct_68f9d01f *)arg1 pid:(unsigned int)arg2 freeEventWhenDone:(_Bool *)arg3;
- (void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(_Bool)arg3;
- (void)syncCloseStreamsForPeer:(id)arg1;
- (void)syncHandleXDataDataPacket:(char *)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4;
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg1 withRequestID:(unsigned int)arg2 streamID:(unsigned int)arg3;
- (void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3;
- (struct os_state_data_s *)syncStateCapture;
- (void)logSessionInfo;
- (void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isEncryptionPreferenceCompatible:(long long)arg1;
- (void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2;
- (void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3;
- (void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2;
- (void)cancelConnectPeer:(id)arg1;
- (id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id *)arg3;
- (void)peerDidDeclineInvitation:(id)arg1;
- (long long)connectedInterfacesForPeer:(id)arg1;
- (void)setHeartbeatTimeout:(unsigned long long)arg1;
- (void)setICETimeoutForced:(_Bool)arg1;
- (void)closeDirectConnectionsWithPeer:(id)arg1;

@end
