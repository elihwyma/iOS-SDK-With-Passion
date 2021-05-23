/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPSubscriptionNotificationAlert, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotification : PBCodable

{
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    NSString *_collapseIdKey;
    _Bool _shouldBadge;
    _Bool _shouldSendContentAvailable;
    _Bool _shouldSendMutableContent;
    struct {
        unsigned int shouldBadge:1;
        unsigned int shouldSendContentAvailable:1;
        unsigned int shouldSendMutableContent:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAlert;
@property (retain, nonatomic) CKDPSubscriptionNotificationAlert *alert;
@property (nonatomic) _Bool hasShouldBadge;
@property (nonatomic) _Bool shouldBadge;
@property (retain, nonatomic) NSMutableArray *additionalFields;
@property (nonatomic) _Bool hasShouldSendContentAvailable;
@property (nonatomic) _Bool shouldSendContentAvailable;
@property (nonatomic) _Bool hasShouldSendMutableContent;
@property (nonatomic) _Bool shouldSendMutableContent;
@property (nonatomic, readonly) _Bool hasCollapseIdKey;
@property (retain, nonatomic) NSString *collapseIdKey;

+ (Class)additionalFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAdditionalFields:(id)arg1;
- (unsigned long long)additionalFieldsCount;
- (void)clearAdditionalFields;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;

@end
