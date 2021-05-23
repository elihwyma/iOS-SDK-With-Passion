/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKLeaderboard, GKPlayer, GKScore, GKTournamentDefinition, GKTournamentInternal, GKTournamentParticipant, NSDate, NSString, NSURL;

@protocol GKCustomTournamentDelegate;

@interface GKTournament : NSObject

{
    GKTournamentDefinition *_tournamentDefinition;
    GKScore *_bestScore;
    GKPlayer *_winningPlayer;
    GKTournamentParticipant *_localParticipant;
    GKLeaderboard *_leaderboard;
    NSObject<GKCustomTournamentDelegate> *_customTournamentDelegate;
    GKTournamentInternal *_internal;
}

@property (retain) GKTournamentInternal *internal;
@property (nonatomic, readonly) NSString *tournamentID;
@property (nonatomic, readonly) NSString *nextTournamentID;
@property (nonatomic, readonly) NSDate *nextTournamentBeginDate;
@property (retain, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property (retain, nonatomic) GKScore *bestScore;
@property (retain, nonatomic) GKPlayer *winningPlayer;
@property (retain, nonatomic) GKTournamentParticipant *localParticipant;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSObject<GKCustomTournamentDelegate> *customTournamentDelegate;
@property (retain, nonatomic) NSURL *inviteURLForMessages;
@property (nonatomic, readonly) NSString *tournamentName;
@property (nonatomic, readonly) _Bool registrationOpen;
@property (nonatomic, readonly) long long maxReplays;
@property (nonatomic, readonly) long long minPlayers;
@property (nonatomic, readonly) long long maxPlayers;
@property (nonatomic, readonly) long long scoringMethod;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long randomSeed;
@property (nonatomic, readonly) NSDate *registrationBeginDate;
@property (nonatomic, readonly) NSDate *registrationEndDate;
@property (nonatomic, readonly) NSDate *tournamentBeginDate;
@property (nonatomic, readonly) NSDate *tournamentEndDate;
@property (nonatomic, readonly) long long tournamentState;
@property (nonatomic, readonly) long long playerCount;
@property (nonatomic, readonly) long long tournamentError;

+ (_Bool)supportsSecureCoding;
+ (void)loadTournamentWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)lookForAcceptedCustomTournament;
+ (void)notifyPlayerForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadParticipantsWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyPlayerForMatchmaking:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerPlayerInGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resignFromTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumePlayWithTryToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTotalPlayerCountForGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getFriendCountForGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalParticipantWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTournamentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadScoresWithScope:(long long)arg1 range:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
