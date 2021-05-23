/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKLeaderboardInternal, GKScore, NSArray, NSString;

@protocol GKLeaderboardDelegate;

@interface GKLeaderboard : NSObject

{
    int _loadingCount;
    struct os_unfair_lock_s _lock;
    long long _timeScope;
    long long _playerScope;
    NSArray *_players;
    NSArray *_scores;
    GKScore *_localPlayerScore;
    id <GKLeaderboardDelegate> _weakDelegate;
    GKLeaderboardInternal *_internal;
    struct _NSRange _range;
}

@property (retain, nonatomic) NSArray *players;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSArray *scores;
@property (retain) GKLeaderboardInternal *internal;
@property (nonatomic) id <GKLeaderboardDelegate> delegate;
@property (retain, nonatomic) GKScore *localPlayerScore;
@property (nonatomic) int loadingCount;
@property (retain, nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) long long overallRank;
@property (nonatomic, readonly) long long overallRankCount;
@property (nonatomic, readonly) long long friendRank;
@property (nonatomic, readonly) long long friendRankCount;
@property (nonatomic) long long timeScope;
@property (nonatomic) long long playerScope;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic) struct _NSRange range;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (readonly, getter=isLoading) _Bool loading;
@property (retain, nonatomic, readonly) NSString *groupIdentifier;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadScoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlayers:(id)arg1;
- (void)incrementLoadingCountAtomically;
- (id)scoreRequestForGame:(id)arg1;
- (void)loadScoresForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)decrementLoadingCountAtomically;
- (id)initWithPlayerIDs:(id)arg1;

@end
