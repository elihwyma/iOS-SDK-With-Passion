/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal

{
    GKScoreInternal *_score;
    GKLeaderboardInternal *_leaderboard;
}

@property (copy, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned long long)type;
- (id)titleText;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;

@end
