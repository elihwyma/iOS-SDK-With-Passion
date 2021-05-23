/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKRecurrenceRule, NSString;

@interface GKTournamentDefinitionInternal : GKInternalRepresentation

{
    _Bool _customTournamentAllowIcon;
    NSString *_tournamentDefinitionID;
    NSString *_tournamentName;
    long long _tournamentNameFormat;
    NSString *_tournamentDescription;
    NSString *_tournamentIcon;
    long long _tournamentType;
    long long _creationMethod;
    long long _seedingMethod;
    long long _participationType;
    long long _scoringMethod;
    long long _maxPlayers;
    long long _minPlayers;
    long long _maxPlayerShards;
    double _typicalGameplayDuration;
    double _tournamentDuration;
    double _PreRegistrationTime;
    GKRecurrenceRule *_recurrenceRule;
    long long _maxReplays;
    long long _autoTournamentIndex;
    NSString *_customTournamentName;
    long long _customTournamentNameFormat;
    NSString *_customTournamentIcon;
    long long _customSeedingMethods;
    long long _customScoringMethods;
    long long _customMaxPlayers;
    long long _customMinPlayers;
    double _customTournamentDuration;
    long long _customMaxReplays;
}

@property (retain, nonatomic) NSString *tournamentDefinitionID;
@property (retain, nonatomic) NSString *tournamentName;
@property (nonatomic) long long tournamentNameFormat;
@property (retain, nonatomic) NSString *tournamentDescription;
@property (retain, nonatomic) NSString *tournamentIcon;
@property (nonatomic) long long tournamentType;
@property (nonatomic) long long creationMethod;
@property (nonatomic) long long seedingMethod;
@property (nonatomic) long long participationType;
@property (nonatomic) long long scoringMethod;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long minPlayers;
@property (nonatomic) long long maxPlayerShards;
@property (nonatomic) double typicalGameplayDuration;
@property (nonatomic) double tournamentDuration;
@property (nonatomic) double PreRegistrationTime;
@property (retain, nonatomic) GKRecurrenceRule *recurrenceRule;
@property (nonatomic) long long maxReplays;
@property (nonatomic) long long autoTournamentIndex;
@property (retain, nonatomic) NSString *customTournamentName;
@property (nonatomic) long long customTournamentNameFormat;
@property (retain, nonatomic) NSString *customTournamentIcon;
@property (nonatomic) _Bool customTournamentAllowIcon;
@property (nonatomic) long long customSeedingMethods;
@property (nonatomic) long long customScoringMethods;
@property (nonatomic) long long customMaxPlayers;
@property (nonatomic) long long customMinPlayers;
@property (nonatomic) double customTournamentDuration;
@property (nonatomic) long long customMaxReplays;

+ (id)secureCodedPropertyKeys;

@end
