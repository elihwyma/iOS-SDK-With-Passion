/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKTournamentDefinitionInternal, NSDate, NSString;

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation

{
    _Bool _isCreatorInTournament;
    GKTournamentDefinitionInternal *_tournamentDefinition;
    GKPlayerInternal *_tournamentCreator;
    NSString *_tournamentName;
    NSString *_icon;
    long long _seedingMethod;
    long long _scoringMethod;
    long long _maxPlayers;
    long long _minPlayers;
    double _duration;
    NSDate *_startTime;
    long long _maxReplays;
}

@property (retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition;
@property (retain, nonatomic) GKPlayerInternal *tournamentCreator;
@property (retain, nonatomic) NSString *tournamentName;
@property (retain, nonatomic) NSString *icon;
@property (nonatomic) long long seedingMethod;
@property (nonatomic) long long scoringMethod;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long minPlayers;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long maxReplays;
@property (nonatomic) _Bool isCreatorInTournament;

+ (id)secureCodedPropertyKeys;
+ (id)customTournamentRequestWithTournamentDefinition:(id)arg1 player:(id)arg2;

@end
