/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSData, NSDictionary, NSString;

@interface GKInviteInternal : GKInternalRepresentation

{
    NSString *_inviteID;
    NSData *_sessionToken;
    GKPlayerInternal *_player;
    NSString *_message;
    NSDictionary *_localizableMessage;
    NSString *_deviceID;
    NSString *_bundleID;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSData *_peerNATIP;
    NSData *_peerBlob;
    NSString *_rid;
    unsigned long long _playerGroup;
    unsigned int _playerAttributes;
    long long _peerNATType;
    unsigned long long _matchType;
    unsigned char _version;
    NSString *_participantID;
}

@property (retain, nonatomic) NSString *inviteID;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) unsigned long long playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSData *peerPushToken;
@property (nonatomic) long long peerNATType;
@property (retain, nonatomic) NSData *peerNATIP;
@property (retain, nonatomic) NSData *peerBlob;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned char version;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic, readonly) _Bool isNearby;

+ (id)secureCodedPropertyKeys;
+ (id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;
+ (id)inviteWithBulletin:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)descriptionSubstitutionMap;

@end
