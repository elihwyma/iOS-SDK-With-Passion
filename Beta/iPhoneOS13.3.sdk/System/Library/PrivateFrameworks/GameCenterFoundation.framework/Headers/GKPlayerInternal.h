/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameInternal, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface GKPlayerInternal : GKInternalRepresentation

{
    NSString *_playerID;
    NSString *_gamePlayerID;
    NSString *_teamPlayerID;
    NSString *_alias;
    NSNumber *_avatarType;
    NSDictionary *_photos;
    NSString *_messagesID;
    NSNumber *_friendLevel;
    NSNumber *_friendBiDirectional;
    NSNumber *_friendPlayedWith;
    NSNumber *_friendPlayedNearby;
    NSString *_lastPersonalizationVersionDisplayed;
    unsigned long long _lastPrivacyNoticeVersionDisplayed;
    unsigned short _numberOfFriends;
    unsigned short _numberOfGames;
    unsigned short _numberOfFriendsInCommon;
    unsigned short _numberOfGamesInCommon;
    unsigned int _numberOfAchievements;
    unsigned int _numberOfAchievementPoints;
    union {
        struct {
            unsigned int _unused:8;
            unsigned int _purpleBuddyAccount:1;
            unsigned int _underage:1;
            unsigned int _photoPending:1;
            unsigned int _findable:1;
            unsigned int _defaultNickname:1;
            unsigned int _reserved:18;
        } ;
        unsigned int _value;
    } _flags;
    NSArray *_monogramComponents;
}

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *teamPlayerID;
@property (retain, nonatomic) NSString *gamePlayerID;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSNumber *avatarType;
@property (retain, nonatomic) NSArray *monogramComponents;
@property (retain, nonatomic) NSDictionary *photos;
@property (nonatomic, readonly) _Bool isFriend;
@property (nonatomic, readonly) _Bool isLocalPlayer;
@property (nonatomic, readonly) _Bool isAnonymousPlayer;
@property (nonatomic, readonly) _Bool isUnknownPlayer;
@property (nonatomic, readonly) _Bool isAutomatchPlayer;
@property (nonatomic, readonly) _Bool isLoaded;
@property (nonatomic, readonly) _Bool isGuestPlayer;
@property (nonatomic) unsigned short numberOfFriendsInCommon;
@property (nonatomic) unsigned short numberOfGamesInCommon;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *friendLevel;
@property (retain, nonatomic) NSNumber *friendBiDirectional;
@property (retain, nonatomic) NSNumber *friendPlayedWith;
@property (retain, nonatomic) NSNumber *friendPlayedNearby;
@property (retain, nonatomic) NSString *compositeName;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSDate *lastPlayedDate;
@property (retain, nonatomic) GKGameInternal *lastPlayedGame;
@property (retain, nonatomic) NSString *guestIdentifier;
@property (retain, nonatomic) NSString *messagesID;
@property (nonatomic) unsigned short numberOfFriends;
@property (nonatomic) unsigned short numberOfGames;
@property (nonatomic) unsigned int numberOfAchievements;
@property (nonatomic) unsigned int numberOfAchievementPoints;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSArray *friends;
@property (nonatomic, getter=isPurpleBuddyAccount) _Bool purpleBuddyAccount;
@property (nonatomic, getter=isUnderage) _Bool underage;
@property (nonatomic, getter=isFindable) _Bool findable;
@property (nonatomic, getter=isDefaultNickname) _Bool defaultNickname;
@property (nonatomic, getter=isPhotoPending) _Bool photoPending;
@property (nonatomic) unsigned short numberOfRequests;
@property (nonatomic) unsigned short numberOfTurns;
@property (nonatomic) unsigned short numberOfChallenges;
@property (retain, nonatomic) NSString *facebookUserID;
@property (retain, nonatomic) NSNumber *iCloudUserID;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;
+ (id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3;
+ (id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2;
+ (Class)classForFamiliarity:(int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)cacheKey;
- (id)conciseDescription;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (id)serverRepresentation;
- (id)minimalInternal;
- (int)defaultFamiliarity;
- (_Bool)_gkIsSameAsPlayer:(id)arg1;
- (_Bool)allowNearbyMultiplayer;
- (void)setAllowNearbyMultiplayer:(_Bool)arg1;

@end
