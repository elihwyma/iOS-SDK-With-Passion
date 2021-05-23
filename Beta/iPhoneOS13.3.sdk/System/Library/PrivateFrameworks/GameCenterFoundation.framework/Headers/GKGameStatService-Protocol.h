/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKGameStatService <Swift>

- (unsigned short)getPlayersForGameDescriptor:includeCompatibleMultiplayerGames:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPlayersForGameDescriptor:leaderboardIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPlayersForGameDescriptor:achievementIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAchievementsForGameDescriptor:players:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAchievementsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)submitAchievements:whileScreeningChallenges:withEligibleChallenges:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAchievementDescriptionsForGameDescriptor:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLeaderboadForRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLeaderboardsForGameDescriptor:player:setIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultLeaderboardID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDefaultLeaderboardIDWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getRecentMatchesForGameDescriptor:otherPlayer:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)submitScores:whileScreeningChallenges:withEligibleChallenges:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getRecentPlayersWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLeaderboardSetsForGameDescriptor:handler: /* Error: Ran out of types for this method. */;

@end
