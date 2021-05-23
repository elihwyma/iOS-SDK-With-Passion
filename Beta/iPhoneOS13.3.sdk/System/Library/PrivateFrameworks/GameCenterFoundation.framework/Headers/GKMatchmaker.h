/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKDiscovery, GKDispatchGroup, GKMatch, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;

@protocol OS_dispatch_queue;

@interface GKMatchmaker : NSObject

{
    _Bool _nearbyAdvertising;
    _Bool _wasNearbyBrowsing;
    _Bool _nearbyBrowsing;
    _Bool _generatingCompatiblityHashes;
    int _matching;
    CDUnknownBlockType _inviteHandler;
    GKMatch *_match;
    CDUnknownBlockType _inviteeResponseHandler;
    CDUnknownBlockType _recipientResponseHandler;
    NSSet *_invitees;
    NSDictionary *_inviteesByUserID;
    CDUnknownBlockType _nearbyPlayerHandler;
    CDUnknownBlockType _nearbyPlayerIDHandler;
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    NSMutableDictionary *_nearbyPlayers;
    NSDate *_nearbyQueryLastCheckDate;
    GKDiscovery *_nearbyDiscovery;
    double _nearbyQueryAllowance;
    NSSet *_nearbyCompatibleVersionHashes;
    NSSet *_nearbyCompatibleShortVersionHashes;
    GKDispatchGroup *_compatibilityHashGroup;
    NSMutableDictionary *_nearbyInvites;
    NSMutableArray *_shareInvitees;
    NSMutableArray *_acceptedInviteesTokens;
}

@property int matching;
@property (retain) NSDictionary *inviteesByUserID;
@property (retain, nonatomic) NSSet *invitees;
@property (copy, nonatomic) CDUnknownBlockType inviteeResponseHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookForInviteQueue;
@property (copy, nonatomic) CDUnknownBlockType inviteHandler;
@property (nonatomic, readonly) _Bool allInviteesDidRespond;
@property (nonatomic) _Bool nearbyBrowsing;
@property (nonatomic) _Bool nearbyAdvertising;
@property (nonatomic) _Bool wasNearbyBrowsing;
@property (nonatomic, readonly) _Bool hasInviteListener;
@property (retain) NSMutableDictionary *nearbyPlayers;
@property (retain, nonatomic) NSMutableDictionary *nearbyInvites;
@property (retain, nonatomic) GKDiscovery *nearbyDiscovery;
@property (retain, nonatomic) NSDate *nearbyQueryLastCheckDate;
@property (retain, nonatomic) NSSet *nearbyCompatibleVersionHashes;
@property (retain, nonatomic) NSSet *nearbyCompatibleShortVersionHashes;
@property (nonatomic) _Bool generatingCompatiblityHashes;
@property (retain, nonatomic) GKDispatchGroup *compatibilityHashGroup;
@property (nonatomic) double nearbyQueryAllowance;
@property (copy, nonatomic) CDUnknownBlockType nearbyPlayerHandler;
@property (copy, nonatomic) CDUnknownBlockType nearbyPlayerIDHandler;
@property (retain, nonatomic) GKMatch *match;
@property (retain, nonatomic) NSMutableArray *shareInvitees;
@property (retain, nonatomic) NSMutableArray *acceptedInviteesTokens;
@property (copy, nonatomic) CDUnknownBlockType recipientResponseHandler;

+ (id)syncQueue;
+ (id)sharedMatchmaker;
+ (id)descriptionForNearbyDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (long long)currentEnvironment;
- (void)performSync:(CDUnknownBlockType)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)stopBrowsingForNearbyPlayers;
- (void)matchForInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadURLForMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setShareInvitees:(id)arg1 propogateToDaemon:(_Bool)arg2;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)startBrowsingForNearbyPlayersWithHandler:(CDUnknownBlockType)arg1;
- (void)finishedAuthenticating;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(CDUnknownBlockType)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)lookForInvite;
- (void)registeredListentersChanged;
- (void)findRematchForMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadConnectivitySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)localPlayerAcceptedGameInviteNotification:(id)arg1;
- (void)setConnectivitySettings:(id)arg1;
- (void)updateNearbyAdvertising;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeInvitee:(id)arg1;
- (void)reportResponse:(long long)arg1 forInvitees:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)doneMatchmaking;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(_Bool)arg2 onlineConnectionData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(_Bool)arg4 playerCount:(long long)arg5 connectionData:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(long long)arg3 serverHosted:(_Bool)arg4 rematchID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(_Bool)arg1;
- (void)startNearbyBrowsing;
- (void)stopNearbyBrowsing;
- (void)localPlayerAcceptedGameInvite;
- (long long)responseForDeclineReason:(long long)arg1;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)queryActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (void)stopNearbyAdvertising;
- (void)cancelSentNearbyInvites;
- (void)declineReceivedNearbyInvites;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (void)setNearbyDevice:(id)arg1 reachable:(_Bool)arg2;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)lostNearbyDeviceID:(id)arg1;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (void)establishNearbyFriendRelationships:(id)arg1 fromDevice:(id)arg2;
- (_Bool)shouldRespondToNearbyQuery;
- (id)hashForBundleID:(id)arg1 version:(id)arg2 platform:(long long)arg3;
- (id)compatibilityHashQueue;
- (void)generateHashedCompatibiltySetWithHandler:(CDUnknownBlockType)arg1;
- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)getHashedCompatibilitySetsWithHandler:(CDUnknownBlockType)arg1;
- (void)setupNearbyDiscovery;
- (id)hashForCurrentGameUsingBundleVersion;
- (id)hashForCurrentGameUsingShortBundleVersionAndPlatform;
- (void)startNearbyAdvertising;
- (id)unreleasedHash;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (void)reduceRecipientsForMatchRequest:(id)arg1 toPlayersWithPlayerIDs:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3;
- (void)sendProfileResponseToDevice:(id)arg1;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadPhotoDataDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(long long)arg2;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (id)declineReasonString:(long long)arg1;
- (id)nearbyInviteFromPlayer:(id)arg1;

@end
