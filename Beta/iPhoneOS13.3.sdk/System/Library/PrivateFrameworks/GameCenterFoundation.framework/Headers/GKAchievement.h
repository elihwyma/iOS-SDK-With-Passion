/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSDate, NSString;

@interface GKAchievement : NSObject <Swift>

{
    _Bool _showsCompletionBanner;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

@property (copy, nonatomic) NSString *playerID;
@property (retain) GKAchievementInternal *internal;
@property (copy, nonatomic) NSDate *lastReportedDate;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (copy, nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) GKGame *game;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double percentComplete;
@property (nonatomic, readonly, getter=isCompleted) _Bool completed;
@property (nonatomic) _Bool showsCompletionBanner;
@property (retain, nonatomic, readonly) GKPlayer *player;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(_Bool)arg3 includeHidden:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(_Bool)arg3 includeHidden:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadAchievementsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)resetAchievementsWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)_achievementDescription;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (void)reportAchievementWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
