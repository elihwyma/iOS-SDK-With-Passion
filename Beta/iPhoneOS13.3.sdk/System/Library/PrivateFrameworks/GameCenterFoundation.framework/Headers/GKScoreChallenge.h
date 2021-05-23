/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKChallenge.h>

@class GKLeaderboard, GKScore;

@interface GKScoreChallenge : GKChallenge

{
    GKScore *_score;
}

@property (nonatomic, readonly) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)titleText;
- (_Bool)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;

@end
