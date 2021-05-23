/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayer, GKTournamentParticipantHistoricalDataInternal, NSMutableArray;

@interface GKTournamentParticipantHistoricalData : NSObject

{
    GKTournamentParticipantHistoricalDataInternal *_internal;
}

@property (retain) GKTournamentParticipantHistoricalDataInternal *internal;
@property (nonatomic, readonly) GKPlayer *player;
@property (nonatomic, readonly) long long tournamentsPlayed;
@property (nonatomic, readonly) long long highestRank;
@property (nonatomic, readonly) long long latestRank;
@property (nonatomic, readonly) long long averageRank;
@property (nonatomic, readonly) long long bestScore;
@property (nonatomic, readonly) long long latestScore;
@property (nonatomic, readonly) long long averageScore;
@property (nonatomic, readonly) NSMutableArray *historicalRanks;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;

@end
