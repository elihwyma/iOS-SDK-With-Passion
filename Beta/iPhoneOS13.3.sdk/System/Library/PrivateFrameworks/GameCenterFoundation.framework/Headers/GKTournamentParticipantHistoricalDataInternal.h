/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSMutableArray, NSString;

@interface GKTournamentParticipantHistoricalDataInternal : GKInternalRepresentation

{
    NSString *_tournamentDefinitionID;
    GKPlayerInternal *_player;
    long long _tournamentsPlayed;
    long long _highestRank;
    long long _latestRank;
    long long _averageRank;
    long long _bestScore;
    long long _latestScore;
    long long _averageScore;
    NSMutableArray *_historicalRanks;
}

@property (retain, nonatomic) NSString *tournamentDefinitionID;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) long long tournamentsPlayed;
@property (nonatomic) long long highestRank;
@property (nonatomic) long long latestRank;
@property (nonatomic) long long averageRank;
@property (nonatomic) long long bestScore;
@property (nonatomic) long long latestScore;
@property (nonatomic) long long averageScore;
@property (retain, nonatomic) NSMutableArray *historicalRanks;

+ (id)secureCodedPropertyKeys;

@end
