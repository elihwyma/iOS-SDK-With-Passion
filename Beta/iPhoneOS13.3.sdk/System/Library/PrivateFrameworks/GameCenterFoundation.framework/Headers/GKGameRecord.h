/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKGame.h>

@class GKGameRecordInternal, GKPlayer, NSDate, NSString;

@interface GKGameRecord : GKGame

{
    GKPlayer *_player;
}

@property (retain, readonly) GKGameRecordInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic, readonly) _Bool played;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) NSDate *purchaseDate;
@property (nonatomic, readonly) _Bool supportsAchievements;
@property (nonatomic, readonly) unsigned long long achievements;
@property (nonatomic, readonly) unsigned long long maxAchievements;
@property (nonatomic, readonly) unsigned long long achievementPoints;
@property (nonatomic, readonly) unsigned long long maxAchievementPoints;
@property (nonatomic, readonly) _Bool supportsLeaderboards;
@property (nonatomic, readonly) unsigned long long numberOfLeaderboards;
@property (nonatomic, readonly) unsigned long long numberOfCategories;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly) unsigned long long maxRank;
@property (nonatomic, readonly) unsigned long long friendRank;
@property (nonatomic, readonly) unsigned long long maxFriendRank;
@property (nonatomic, readonly) _Bool supportsLeaderboardSets;
@property (nonatomic, readonly) unsigned long long numberOfLeaderboardSets;
@property (nonatomic, readonly) NSString *defaultLeaderboardIdentifier;

+ (_Bool)supportsSecureCoding;
+ (void)invalidateCaches;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)internalRepresentationCache;
+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadGameRecordsForPlayer:(id)arg1 bundleIDs:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)partitionGameRecords:(id)arg1 returniOS:(id *)arg2 returnMac:(id *)arg3;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2;

@end
