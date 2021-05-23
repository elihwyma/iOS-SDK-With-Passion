/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBLocalNotificationReturn : PBCodable

{
    long long _localNotificationSentTimestamp;
    int _localNoticationNumberReceived;
    int _localNotificationDirectOpenNumber;
    int _localNotificationType;
    _Bool _localNotificationDirectOpen;
    struct {
        unsigned int localNotificationSentTimestamp:1;
        unsigned int localNoticationNumberReceived:1;
        unsigned int localNotificationDirectOpenNumber:1;
        unsigned int localNotificationType:1;
        unsigned int localNotificationDirectOpen:1;
    } _has;
}

@property (nonatomic) _Bool hasLocalNotificationDirectOpen;
@property (nonatomic) _Bool localNotificationDirectOpen;
@property (nonatomic) _Bool hasLocalNoticationNumberReceived;
@property (nonatomic) int localNoticationNumberReceived;
@property (nonatomic) _Bool hasLocalNotificationType;
@property (nonatomic) int localNotificationType;
@property (nonatomic) _Bool hasLocalNotificationSentTimestamp;
@property (nonatomic) long long localNotificationSentTimestamp;
@property (nonatomic) _Bool hasLocalNotificationDirectOpenNumber;
@property (nonatomic) int localNotificationDirectOpenNumber;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
