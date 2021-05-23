/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKCustomTournamentRequestInternal, GKPlayer, GKTournamentDefinition, NSDate, NSString;

@interface GKCustomTournamentRequest : NSObject

{
    GKCustomTournamentRequestInternal *_internal;
}

@property (retain) GKCustomTournamentRequestInternal *internal;
@property (nonatomic, readonly) GKTournamentDefinition *tournamentDefinition;
@property (nonatomic, readonly) GKPlayer *tournamentCreator;
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

+ (_Bool)supportsSecureCoding;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithTournamentDefinition:(id)arg1 andCreator:(id)arg2;
- (void)createTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
