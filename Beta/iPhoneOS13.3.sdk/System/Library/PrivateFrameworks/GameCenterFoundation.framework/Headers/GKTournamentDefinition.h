/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKRecurrenceRule, GKTournamentDefinitionInternal, NSString;

@interface GKTournamentDefinition : NSObject

{
    GKTournamentDefinitionInternal *_internal;
}

@property (retain) GKTournamentDefinitionInternal *internal;
@property (nonatomic, readonly) NSString *tournamentDefinitionID;
@property (nonatomic, readonly) NSString *tournamentName;
@property (nonatomic, readonly) long long tournamentNameFormat;
@property (nonatomic, readonly) NSString *tournamentDescription;
@property (nonatomic, readonly) NSString *tournamentIcon;
@property (nonatomic, readonly) NSString *customTournamentName;
@property (nonatomic, readonly) long long customTournamentNameFormat;
@property (nonatomic, readonly) NSString *customTournamentIcon;
@property (nonatomic, readonly) _Bool customTournamentAllowIcon;
@property (nonatomic, readonly) long long tournamentType;
@property (nonatomic, readonly) long long creationMethod;
@property (nonatomic, readonly) long long seedingMethod;
@property (nonatomic, readonly) long long customSeedingMethods;
@property (nonatomic, readonly) long long participationType;
@property (nonatomic, readonly) long long scoringMethod;
@property (nonatomic, readonly) long long customScoringMethods;
@property (nonatomic, readonly) long long maxPlayers;
@property (nonatomic, readonly) long long minPlayers;
@property (nonatomic, readonly) long long customMaxPlayers;
@property (nonatomic, readonly) long long customMinPlayers;
@property (nonatomic, readonly) long long maxPlayerShards;
@property (nonatomic, readonly) double typicalGameplayDuration;
@property (nonatomic, readonly) double tournamentDuration;
@property (nonatomic, readonly) double customTournamentDuration;
@property (nonatomic, readonly) double PreRegistrationTime;
@property (nonatomic, readonly) GKRecurrenceRule *recurrenceRule;
@property (nonatomic, readonly) long long maxReplays;
@property (nonatomic, readonly) long long customMaxReplays;

+ (_Bool)supportsSecureCoding;
+ (void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)scoringMethodDescription;
- (id)seedingMethodDescription;
- (id)creationMethodDescription;
- (id)tournamentTypeDescription;
- (id)participationTypeDescription;
- (id)proposedNextCustomTournamentStartDate;
- (void)loadHistoricalDataForPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
