/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKDaemonProxy, GKPlayerInternal, GKThreadsafeDictionary, NSDictionary;

@protocol GKAccountService, GKAccountServicePrivate, GKAnalyticsService, GKAnalyticsServicePrivate, GKBulletinService, GKBulletinServicePrivate, GKChallengeService, GKChallengeServicePrivate, GKFriendService, GKFriendServicePrivate, GKGameService, GKGameServicePrivate, GKGameSessionService, GKGameSessionServicePrivate, GKGameStatService, GKGameStatServicePrivate, GKMultiplayerService, GKMultiplayerServicePrivate, GKProfileService, GKProfileServicePrivate, GKTournamentService, GKTournamentServicePrivate, GKTurnBasedService, GKTurnBasedServicePrivate, GKUtilityService, GKUtilityServicePrivate;

@interface GKServiceProxy : NSObject

{
    NSDictionary *_serviceLookup;
    GKThreadsafeDictionary *_pendingRequests;
    unsigned int _serviceGeneration;
    GKDaemonProxy *_baseProxy;
    GKPlayerInternal *_localPlayer;
}

@property (retain) GKThreadsafeDictionary *pendingRequests;
@property (retain) NSDictionary *serviceLookup;
@property unsigned int serviceGeneration;
@property (retain) GKDaemonProxy *baseProxy;
@property (retain) GKPlayerInternal *localPlayer;
@property (readonly) id <GKAccountService> accountService;
@property (readonly) id <GKAccountServicePrivate> accountServicePrivate;
@property (readonly) id <GKProfileService> profileService;
@property (readonly) id <GKProfileServicePrivate> profileServicePrivate;
@property (readonly) id <GKFriendService> friendService;
@property (readonly) id <GKFriendServicePrivate> friendServicePrivate;
@property (readonly) id <GKGameService> gameService;
@property (readonly) id <GKGameServicePrivate> gameServicePrivate;
@property (readonly) id <GKGameStatService> gameStatService;
@property (readonly) id <GKGameStatServicePrivate> gameStatServicePrivate;
@property (readonly) id <GKChallengeService> challengeService;
@property (readonly) id <GKChallengeServicePrivate> challengeServicePrivate;
@property (readonly) id <GKMultiplayerService> multiplayerService;
@property (readonly) id <GKMultiplayerServicePrivate> multiplayerServicePrivate;
@property (readonly) id <GKTurnBasedService> turnBasedService;
@property (readonly) id <GKTurnBasedServicePrivate> turnBasedServicePrivate;
@property (readonly) id <GKUtilityService> utilityService;
@property (readonly) id <GKUtilityServicePrivate> utilityServicePrivate;
@property (readonly) id <GKBulletinService> bulletinService;
@property (readonly) id <GKBulletinServicePrivate> bulletinServicePrivate;
@property (readonly) id <GKAnalyticsService> analyticsService;
@property (readonly) id <GKAnalyticsServicePrivate> analyticsServicePrivate;
@property (readonly) id <GKGameSessionService> gameSessionService;
@property (readonly) id <GKGameSessionServicePrivate> gameSessionServicePrivate;
@property (readonly) id <GKTournamentService> tournamentService;
@property (readonly) id <GKTournamentServicePrivate> tournamentServicePrivate;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3;
- (id)requestIdentifierForInvocation:(id)arg1;
- (void)buildServiceLookupIfNeccessary;
- (void)buildServiceLookup;
- (void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;

@end
