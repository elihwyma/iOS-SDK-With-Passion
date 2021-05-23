/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject

{
    GKTournamentPlayerStandingsInternal *_internal;
}

@property (retain) GKTournamentPlayerStandingsInternal *internal;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly) long long topScore;
@property (nonatomic, readonly) long long friendRank;
@property (nonatomic, readonly) long long friendCount;
@property (nonatomic, readonly) long long globalRank;
@property (nonatomic, readonly) long long globalPlayerCount;
@property (nonatomic, readonly) long long replayCount;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;

@end
