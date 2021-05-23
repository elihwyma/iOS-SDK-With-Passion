/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <Swift>

{
    int _notificationType;
    struct {
        unsigned int notificationType:1;
    } _has;
}

@property (nonatomic) _Bool hasNotificationType;
@property (nonatomic) int notificationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)notificationTypeAsString:(int)arg1;
- (int)StringAsNotificationType:(id)arg1;

@end
