/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKLeaderboardInternal, GKPlayerInternal, GKScoreInternal, GKTournamentDefinitionInternal, GKTournamentParticipantInternal, NSDate, NSString, NSURL;

@interface GKTournamentInternal : GKInternalRepresentation

{
    NSString *_tournamentID;
    GKTournamentDefinitionInternal *_tournamentDefinition;
    NSString *_tournamentName;
    long long _maxReplays;
    long long _minPlayers;
    long long _maxPlayers;
    long long _scoringMethod;
    double _duration;
    long long _randomSeed;
    NSDate *_registrationBeginDate;
    NSDate *_registrationEndDate;
    NSDate *_tournamentBeginDate;
    NSDate *_tournamentEndDate;
    long long _tournamentState;
    GKScoreInternal *_bestScore;
    GKPlayerInternal *_winningPlayer;
    long long _playerCount;
    GKTournamentParticipantInternal *_localParticipant;
    GKLeaderboardInternal *_leaderboard;
    long long _tournamentError;
    NSURL *_inviteURLForMessages;
    long long _tournamentNumber;
    long long _seedingMethod;
    GKPlayerInternal *_customTournamentCreator;
    NSString *_nextTournamentID;
    NSDate *_nextTournamentBeginDate;
}

@property (retain, nonatomic) NSString *tournamentID;
@property (retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition;
@property (retain, nonatomic) NSString *tournamentName;
@property (nonatomic) long long maxReplays;
@property (nonatomic) long long minPlayers;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long scoringMethod;
@property (nonatomic) double duration;
@property (nonatomic) long long randomSeed;
@property (retain, nonatomic) NSDate *registrationBeginDate;
@property (retain, nonatomic) NSDate *registrationEndDate;
@property (retain, nonatomic) NSDate *tournamentBeginDate;
@property (retain, nonatomic) NSDate *tournamentEndDate;
@property (nonatomic) long long tournamentState;
@property (retain, nonatomic) GKScoreInternal *bestScore;
@property (retain, nonatomic) GKPlayerInternal *winningPlayer;
@property (nonatomic) long long playerCount;
@property (retain, nonatomic) GKTournamentParticipantInternal *localParticipant;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;
@property (nonatomic) long long tournamentError;
@property (retain, nonatomic) NSURL *inviteURLForMessages;
@property (nonatomic) long long tournamentNumber;
@property (nonatomic) long long seedingMethod;
@property (retain, nonatomic) GKPlayerInternal *customTournamentCreator;
@property (retain, nonatomic) NSString *nextTournamentID;
@property (retain, nonatomic) NSDate *nextTournamentBeginDate;

+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (id)secureCodedPropertyKeys;

@end
