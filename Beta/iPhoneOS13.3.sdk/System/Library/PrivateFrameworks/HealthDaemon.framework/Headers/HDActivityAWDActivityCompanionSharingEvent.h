/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDActivityAWDActivityCompanionSharingEvent : PBCodable <Swift>

{
    long long _numberOfFriends;
    long long _numberOfFriendsAwaitingResponse;
    long long _numberOfFriendsHiddenFromMe;
    long long _numberOfFriendsMuted;
    long long _numberOfFriendsMyDataHidden;
    long long _numberOfFriendsPendingMyResponse;
    unsigned long long _timestamp;
    int _maxFriendDuration;
    int _medianFriendDuration;
    int _minFriendDuration;
    struct {
        unsigned int numberOfFriends:1;
        unsigned int numberOfFriendsAwaitingResponse:1;
        unsigned int numberOfFriendsHiddenFromMe:1;
        unsigned int numberOfFriendsMuted:1;
        unsigned int numberOfFriendsMyDataHidden:1;
        unsigned int numberOfFriendsPendingMyResponse:1;
        unsigned int timestamp:1;
        unsigned int maxFriendDuration:1;
        unsigned int medianFriendDuration:1;
        unsigned int minFriendDuration:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNumberOfFriends;
@property (nonatomic) long long numberOfFriends;
@property (nonatomic) _Bool hasMedianFriendDuration;
@property (nonatomic) int medianFriendDuration;
@property (nonatomic) _Bool hasMinFriendDuration;
@property (nonatomic) int minFriendDuration;
@property (nonatomic) _Bool hasMaxFriendDuration;
@property (nonatomic) int maxFriendDuration;
@property (nonatomic) _Bool hasNumberOfFriendsMyDataHidden;
@property (nonatomic) long long numberOfFriendsMyDataHidden;
@property (nonatomic) _Bool hasNumberOfFriendsHiddenFromMe;
@property (nonatomic) long long numberOfFriendsHiddenFromMe;
@property (nonatomic) _Bool hasNumberOfFriendsMuted;
@property (nonatomic) long long numberOfFriendsMuted;
@property (nonatomic) _Bool hasNumberOfFriendsAwaitingResponse;
@property (nonatomic) long long numberOfFriendsAwaitingResponse;
@property (nonatomic) _Bool hasNumberOfFriendsPendingMyResponse;
@property (nonatomic) long long numberOfFriendsPendingMyResponse;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)medianFriendDurationAsString:(int)arg1;
- (int)StringAsMedianFriendDuration:(id)arg1;
- (id)minFriendDurationAsString:(int)arg1;
- (int)StringAsMinFriendDuration:(id)arg1;
- (id)maxFriendDurationAsString:(int)arg1;
- (int)StringAsMaxFriendDuration:(id)arg1;

@end
