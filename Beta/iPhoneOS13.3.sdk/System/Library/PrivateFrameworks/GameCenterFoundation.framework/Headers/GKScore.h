/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKGame, GKPlayer, GKScoreInternal, NSDate, NSString;

@interface GKScore : NSObject <Swift>

{
    _Bool _shouldSetDefaultLeaderboard;
    GKScoreInternal *_internal;
    GKGame *_game;
}

@property (copy, nonatomic) NSString *category;
@property (retain) GKScoreInternal *internal;
@property (retain, readonly) NSString *playerID;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier;
@property _Bool valueSet;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *leaderboardIdentifier;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic, readonly) NSDate *date;
@property (retain, nonatomic, readonly) GKPlayer *player;
@property (nonatomic) _Bool shouldSetDefaultLeaderboard;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)reportScores:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)reportScores:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

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
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1;
- (id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2;
- (void)reportScoreWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
