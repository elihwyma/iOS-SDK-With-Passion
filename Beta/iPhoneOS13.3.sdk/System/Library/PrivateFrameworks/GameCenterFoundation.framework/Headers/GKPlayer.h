/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKBasePlayer.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKGame, GKPlayerInternal, NSArray, NSAttributedString, NSDate, NSNumber, NSString;

@interface GKPlayer : GKBasePlayer <Swift>

{
    GKPlayerInternal *_internal;
    NSAttributedString *_whenString;
    NSArray *_friends;
}

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;
@property (readonly) NSString *referenceKey;
@property (retain, nonatomic) NSArray *friends;
@property (nonatomic) _Bool isFriend;
@property (retain, nonatomic) NSString *playerID;
@property (retain) GKPlayerInternal *internal;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSNumber *friendLevel;
@property (nonatomic, readonly) NSNumber *friendBiDirectional;
@property (nonatomic, readonly) NSNumber *friendPlayedWith;
@property (nonatomic, readonly) NSNumber *friendPlayedNearby;
@property (nonatomic, readonly) long long avatarType;
@property (retain, nonatomic) NSArray *monogramComponents;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) GKGame *lastPlayedGame;
@property (nonatomic, readonly) _Bool hasPhoto;
@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;
@property (nonatomic, readonly) _Bool isFamiliarFriend;
@property (nonatomic) unsigned long long numberOfFriends;
@property (nonatomic, readonly) CDStruct_c6d350ec stats;
@property (nonatomic, readonly) NSString *cacheKey;
@property (retain, nonatomic) NSAttributedString *whenString;
@property (nonatomic, readonly) _Bool isLocalPlayer;
@property (nonatomic, readonly) _Bool isAnonymousPlayer;
@property (nonatomic, readonly) _Bool isUnknownPlayer;
@property (nonatomic, readonly) _Bool isAutomatchPlayer;
@property (retain, nonatomic, readonly) NSString *gamePlayerID;
@property (retain, nonatomic, readonly) NSString *teamPlayerID;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *guestIdentifier;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)automatchPlayer;
+ (id)canonicalizedPlayerForInternal:(id)arg1;
+ (void)loadPlayersForIdentifiersPrivate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)cacheKeyForPlayerID:(id)arg1;
+ (void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)anonymousPlayer;
+ (id)unknownPlayer;
+ (id)anonymousGuestPlayerWithIdentifier:(id)arg1;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)playerFromPlayerID:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)email;
- (void)_postChangeNotification;
- (id)emails;
- (id)sortName;
- (void)postChangeNotification;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)loadProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)scopedIDsArePersistent;
- (void)setFriendLevel:(id)arg1;
- (void)setFriendBiDirectional:(id)arg1;
- (void)setFriendPlayedWith:(id)arg1;
- (void)setFriendPlayedNearby:(id)arg1;
- (void)loadCommonFriends:(_Bool)arg1 asPlayersWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadGamesPlayedIncludingInstalledGames:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadFriendsAsPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)loadGamesPlayed:(CDUnknownBlockType)arg1;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)identifierForIDS;
- (_Bool)isFriendablePlayer;
- (id)minimalPlayer;

@end
