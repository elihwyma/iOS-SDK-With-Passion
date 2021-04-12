//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
    NSUInteger _playerGroup;
    unsigned int _playerAttributes;
    long long _peerNATType;
    NSUInteger _matchType;
    unsigned char _version;
    NSString *_participantID;
}

+ (id)secureCodedPropertyKeys;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;
+ (id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5;
+ (id)inviteWithBulletin:(id)arg1;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(nonatomic) unsigned int playerAttributes; // @synthesize playerAttributes=_playerAttributes;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property(retain, nonatomic) NSData *peerNATIP; // @synthesize peerNATIP=_peerNATIP;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) NSUInteger matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) NSString *inviteID; // @synthesize inviteID=_inviteID;
@property(retain, nonatomic) NSData *peerBlob; // @synthesize peerBlob=_peerBlob;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(nonatomic) NSUInteger playerGroup; // @synthesize playerGroup=_playerGroup;
@property(nonatomic) long long peerNATType; // @synthesize peerNATType=_peerNATType;
- (id)descriptionSubstitutionMap;
@property(readonly, nonatomic) BOOL isNearby; // @dynamic isNearby;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)init;

@end

