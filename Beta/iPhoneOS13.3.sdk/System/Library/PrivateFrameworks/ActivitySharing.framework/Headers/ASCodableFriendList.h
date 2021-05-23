/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ASCodableFriendList : PBCodable

{
    NSMutableArray *_friends;
}

@property (retain, nonatomic) NSMutableArray *friends;

+ (Class)friendType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFriend:(id)arg1;
- (unsigned long long)friendsCount;
- (void)clearFriends;
- (id)friendAtIndex:(unsigned long long)arg1;

@end
