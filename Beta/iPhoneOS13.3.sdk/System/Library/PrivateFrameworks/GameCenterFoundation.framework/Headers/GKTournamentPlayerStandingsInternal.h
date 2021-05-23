/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@interface GKTournamentPlayerStandingsInternal : GKInternalRepresentation

{
    long long _score;
    long long _topScore;
    long long _friendRank;
    long long _friendCount;
    long long _globalRank;
    long long _globalPlayerCount;
    long long _replayCount;
    long long _participantState;
}

@property (nonatomic) long long score;
@property (nonatomic) long long topScore;
@property (nonatomic) long long friendRank;
@property (nonatomic) long long friendCount;
@property (nonatomic) long long globalRank;
@property (nonatomic) long long globalPlayerCount;
@property (nonatomic) long long replayCount;
@property (nonatomic) long long participantState;

+ (id)secureCodedPropertyKeys;

@end
