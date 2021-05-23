/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable

{
    NSMutableArray *_notifications;
    NSMutableArray *_playerPaths;
    NSMutableArray *_userInfos;
}

@property (retain, nonatomic) NSMutableArray *notifications;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (retain, nonatomic) NSMutableArray *playerPaths;

+ (Class)notificationType;
+ (Class)userInfoType;
+ (Class)playerPathType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addUserInfo:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationsCount;
- (void)addNotification:(id)arg1;
- (void)addPlayerPath:(id)arg1;
- (void)clearNotifications;
- (id)notificationAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)clearUserInfos;
- (unsigned long long)playerPathsCount;
- (void)clearPlayerPaths;
- (id)playerPathAtIndex:(unsigned long long)arg1;

@end
