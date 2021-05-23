/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKTournamentInternal, NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation

{
    unsigned long long _matchType;
    NSArray *_recipients;
    NSArray *_recipientPlayerIDs;
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    NSData *_sessionToken;
    NSString *_rid;
    unsigned int _version;
    _Bool _preloadedMatch;
    unsigned long long _playerGroup;
    unsigned int _playerAttributes;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    unsigned char _defaultNumberOfPlayers;
    _Bool _restrictToAutomatch;
    GKTournamentInternal *_tournamentForInvitePool;
}

@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic) unsigned char defaultNumberOfPlayers;
@property (nonatomic) unsigned long long playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientPlayerIDs;
@property (copy, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSDictionary *localizableInviteMessage;
@property (nonatomic) _Bool restrictToAutomatch;
@property (retain, nonatomic) GKTournamentInternal *tournamentForInvitePool;
@property (nonatomic) unsigned long long matchType;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned int version;
@property (nonatomic, getter=isPreloadedMatch) _Bool preloadedMatch;

+ (id)secureCodedPropertyKeys;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)hasGuestPlayers;

@end
