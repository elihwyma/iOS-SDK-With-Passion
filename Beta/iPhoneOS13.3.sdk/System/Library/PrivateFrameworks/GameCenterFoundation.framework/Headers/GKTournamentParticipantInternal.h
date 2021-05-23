/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKTournamentParticipantInternal : GKInternalRepresentation

{
    _Bool _cheatingIndicator;
    NSString *_tournamentID;
    GKPlayerInternal *_player;
    long long _score;
    long long _playerGroup;
    long long _replayCount;
    long long _participantState;
}

@property (retain, nonatomic) NSString *tournamentID;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) long long score;
@property (nonatomic) long long playerGroup;
@property (nonatomic) long long replayCount;
@property (nonatomic) long long participantState;
@property (nonatomic) _Bool cheatingIndicator;

+ (id)secureCodedPropertyKeys;

@end
