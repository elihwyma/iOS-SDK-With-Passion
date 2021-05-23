/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKGameServicePrivate <Swift>

- (unsigned short)removeGameForBundleID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getGameMetadataForBundleIDs:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getTopGamesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadTellAFriendMessageForGameWithAdamID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getRatingForGameDescriptor:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)submitRating:forGame:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getGameStatsForPlayer:bundleIDs:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getGamesForPlayer:includeInstalled:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getGamesWithAchievementStatsForPlayer:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getStoreItemsForAdamIDs:handler: /* Error: Ran out of types for this method. */;

@end
