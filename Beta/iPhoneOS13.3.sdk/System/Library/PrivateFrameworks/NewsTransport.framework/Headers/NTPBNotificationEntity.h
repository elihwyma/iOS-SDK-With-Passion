/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable

{
    int _notificationType;
    int _paidBundleSubscriptionStatus;
    int _subscriberType;
    NSMutableArray *_tagIds;
    struct {
        unsigned int notificationType:1;
        unsigned int paidBundleSubscriptionStatus:1;
        unsigned int subscriberType:1;
    } _has;
}

@property (nonatomic) _Bool hasNotificationType;
@property (nonatomic) int notificationType;
@property (retain, nonatomic) NSMutableArray *tagIds;
@property (nonatomic) _Bool hasSubscriberType;
@property (nonatomic) int subscriberType;
@property (nonatomic) _Bool hasPaidBundleSubscriptionStatus;
@property (nonatomic) int paidBundleSubscriptionStatus;

+ (Class)tagIdType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTagId:(id)arg1;
- (void)clearTagIds;
- (unsigned long long)tagIdsCount;
- (id)tagIdAtIndex:(unsigned long long)arg1;

@end
