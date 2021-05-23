/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, NSMutableDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface _IDSSession : NSObject

{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    unsigned long long _initialLinkType;
    int _socket;
    _Bool _isAudioEnabled;
    _Bool _isMuted;
    _Bool _isLegacy;
    long long _inviteTimeout;
    unsigned long long _connectionCountHint;
    _Bool _needsToWaitForPreConnectionData;
    _Bool _disallowCellularInterface;
    _Bool _disallowWifiInterface;
    unsigned long long _preferredAddressFamily;
    _Bool _preferCellularForCallSetup;
    NSString *_clientUUID;
    _Bool _disableEncryption;
    _Bool _shouldUseSocketForTransport;
    _Bool _enableSingleChannelDirectMode;
    _Bool _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
}

@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) unsigned long long initialLinkType;
@property (nonatomic) long long inviteTimeout;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (retain, nonatomic) id boostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)endSession;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)setPreferences:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)sessionStarted:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveReport:(id)arg2;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)daemonDisconnected;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;
- (void)session:(id)arg1 audioEnabled:(_Bool)arg2;
- (void)session:(id)arg1 muted:(_Bool)arg2;
- (void)allocationDone:(id)arg1 sessionInfo:(id)arg2;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;
- (id)getPreferences;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)acceptInvitationWithData:(id)arg1;
- (void)declineInvitationWithData:(id)arg1;
- (void)declineInvitation;
- (void)endSessionWithData:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;
- (void)sendAllocationRequest:(id)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (_Bool)getAudioEnabled;
- (_Bool)getMuted;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
- (void)reconnectSession;
- (_Bool)shouldUseSocketForTransport;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)_cleanupSocketPairConnections;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (id)daemonListener;
- (id)daemonController;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (void)_setupSocketPairToDaemon;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 connectionCountHint:(unsigned long long)arg4 needsToWaitForPreConnectionData:(_Bool)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7;
- (void)_setupUnreliableSocketPairConnection;

@end
