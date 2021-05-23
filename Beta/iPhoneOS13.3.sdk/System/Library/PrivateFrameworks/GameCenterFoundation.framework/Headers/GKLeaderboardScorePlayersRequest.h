/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest

{
    NSArray *_playerInternals;
}

@property (copy, nonatomic) NSArray *playerInternals;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
