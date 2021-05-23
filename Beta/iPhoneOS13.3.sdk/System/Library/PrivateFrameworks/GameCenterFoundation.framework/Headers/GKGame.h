/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKGameDescriptor, GKGameInternal, GKStoreItemInternal, NSDictionary, NSNumber, NSString;

@interface GKGame : NSObject <Swift>

{
    GKGameInternal *_internal;
    long long _environment;
}

@property (retain) GKGameInternal *internal;
@property long long environment;
@property (nonatomic, getter=isPrerendered) _Bool prerendered;
@property (nonatomic, readonly) NSDictionary *gameDescriptorDictionary;
@property (nonatomic, readonly) GKGameDescriptor *gameDescriptor;
@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) NSNumber *externalVersion;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *shortBundleVersion;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic) long long platform;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *defaultCategory;
@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (nonatomic, readonly) struct GKGameInfo gameInfo;
@property (nonatomic, readonly) _Bool supportsMultiplayer;
@property (nonatomic, readonly) _Bool supportsTurnBasedMultiplayer;
@property (nonatomic, readonly, getter=isInstalled) _Bool installedGame;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)currentGame;
+ (_Bool)isGameCenter;
+ (_Bool)isPreferences;
+ (id)currentGameIncludingGameCenter:(_Bool)arg1;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTopGamesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)updateGames:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

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
- (void)loadTellAFriendMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)isGameCenter;
- (_Bool)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)submitRating:(float)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
