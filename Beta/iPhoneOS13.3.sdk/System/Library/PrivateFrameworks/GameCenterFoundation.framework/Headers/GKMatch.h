/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKConnection, GKSession, GKThreadsafeDictionary, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol GKMatchDelegate, OS_dispatch_queue;

@interface GKMatch : NSObject <Swift>

{
    unsigned char _version;
    _Bool _needHostScore;
    _Bool _hostScoreForQuery;
    _Bool _recentlyBecameActive;
    unsigned int _packetSequenceNumber;
    GKThreadsafeDictionary *_playersByIdentifier;
    NSMutableSet *_connectedPlayerIDs;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    id <GKMatchDelegate> _delegateWeak;
    GKSession *_session;
    GKConnection *_connection;
    unsigned long long _expectedPlayerCount;
    NSMutableDictionary *_guestConnections;
    NSMutableDictionary *_guestSessions;
    NSMutableDictionary *_playerEventQueues;
    NSMutableArray *_reinvitedPlayers;
    NSData *_selfBlob;
    id <GKMatchDelegate> _inviteDelegateWeak;
    NSMutableDictionary *_playerPushTokens;
    NSMutableArray *_opponentIDs;
    NSString *_rematchID;
    long long _rematchCount;
    NSDictionary *_networkStatistics;
    NSMutableDictionary *_hostScores;
    CDUnknownBlockType _chooseHostCompletion;
}

@property (retain, nonatomic) GKSession *session;
@property (retain, nonatomic) GKConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *guestConnections;
@property (retain, nonatomic) NSMutableDictionary *guestSessions;
@property (retain, nonatomic) NSMutableDictionary *playerEventQueues;
@property (retain, nonatomic) NSMutableSet *connectedPlayerIDs;
@property (retain, nonatomic) GKThreadsafeDictionary *playersByIdentifier;
@property (retain, nonatomic) NSMutableArray *reinvitedPlayers;
@property (retain, nonatomic) NSData *selfBlob;
@property (nonatomic) unsigned char version;
@property (nonatomic) id <GKMatchDelegate> inviteDelegate;
@property (nonatomic) unsigned int packetSequenceNumber;
@property (retain, nonatomic) NSMutableDictionary *playerPushTokens;
@property (retain, nonatomic) NSMutableArray *opponentIDs;
@property (retain, nonatomic) NSString *rematchID;
@property (nonatomic) long long rematchCount;
@property (retain, nonatomic) NSDictionary *networkStatistics;
@property (retain, nonatomic) NSMutableDictionary *hostScores;
@property (nonatomic) _Bool needHostScore;
@property (nonatomic) _Bool hostScoreForQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue;
@property (copy, nonatomic) CDUnknownBlockType chooseHostCompletion;
@property (nonatomic) _Bool recentlyBecameActive;
@property (nonatomic, readonly) NSArray *players;
@property (nonatomic) id <GKMatchDelegate> delegate;
@property (nonatomic, readonly) unsigned long long expectedPlayerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (_Bool)connected:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (id)dataFromBase64String:(id)arg1;
- (id)guestPlayers;
- (_Bool)sendInviteData:(id)arg1 error:(id *)arg2;
- (id)nearbyConnectionData;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)withEventQueueForPlayer:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)sendStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)sendQueuedPacketsForPlayer:(id)arg1;
- (void)relayPushNotification:(id)arg1;
- (void)localPlayerDidChange:(id)arg1;
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)withEventQueueForPlayer:(id)arg1 create:(CDUnknownBlockType)arg2 perform:(CDUnknownBlockType)arg3;
- (void)addPlayers:(id)arg1;
- (void)sendVersionData:(unsigned char)arg1;
- (id)playerFromPeer:(id)arg1;
- (void)withEventQueueForPlayer:(id)arg1 createIfNeeded:(_Bool)arg2 perform:(CDUnknownBlockType)arg3;
- (id)packet:(unsigned char)arg1 data:(id)arg2;
- (id)peerFromPlayer:(id)arg1;
- (_Bool)sendData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 error:(id *)arg4;
- (void)disconnectGuestSessions;
- (void)_delegate:(id)arg1 didReceiveData:(id)arg2 forRecipient:(id)arg3 fromPlayer:(id)arg4;
- (id)stringForGKPlayerConnectionState:(long long)arg1;
- (void)updateRematchID;
- (void)sendStateCallbackToDelegate:(id)arg1 forPlayer:(id)arg2 state:(long long)arg3;
- (void)updateStateForPlayer:(id)arg1 state:(long long)arg2;
- (void)connectToPlayers:(id)arg1 withPeerDictionaries:(id)arg2 version:(unsigned char)arg3 sessionToken:(id)arg4 cdxTicket:(id)arg5;
- (void)relayPush:(id)arg1;
- (void)reinviteeAcceptedNotification:(id)arg1;
- (void)reinviteeDeclinedNotification:(id)arg1;
- (void)chooseBestHostingPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)calculateHostScore;
- (_Bool)selectHostIfRequestedAndAllScored;
- (void)sendHostScoreAsQuery:(_Bool)arg1;
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;
- (_Bool)haveAllHostScores;
- (id)playerForSession:(id)arg1;
- (id)stringForGKPeerConnectionState:(int)arg1;
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;
- (id)allIDs;
- (void)conditionallyRelaunchPlayer:(id)arg1;
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;
- (void)deferStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2;
- (void)sendData:(id)arg1 forRecipient:(id)arg2 fromPlayer:(id)arg3;
- (void)queueData:(id)arg1 withEventQueueForPlayer:(id)arg2 forRecipient:(id)arg3;
- (_Bool)shouldStartRelay:(id)arg1;
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayConnectionForPlayer:(id)arg1;
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;
- (void)updateRelayConnectionForPlayer:(id)arg1;
- (void)initRelayResponse:(id)arg1 player:(id)arg2;
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;
- (void)requestRelayInitForPlayer:(id)arg1;
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)requestRelayUpdateForPlayer:(id)arg1;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (id)playerIDs;
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;
- (void)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)inviteeComboMatched:(long long)arg1;
- (_Bool)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(long long)arg3 error:(id *)arg4;
- (_Bool)sendDataToAllPlayers:(id)arg1 withDataMode:(long long)arg2 error:(id *)arg3;
- (id)voiceChatWithName:(id)arg1;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)chooseBestHostPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;
- (void)acceptRelayResponse:(id)arg1 player:(id)arg2;
- (void)preemptRelay:(id)arg1;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;

@end
