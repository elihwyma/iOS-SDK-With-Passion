/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable

{
    int _countOfSubscriptionsDetected;
    struct {
        unsigned int countOfSubscriptionsDetected:1;
    } _has;
}

@property (nonatomic) _Bool hasCountOfSubscriptionsDetected;
@property (nonatomic) int countOfSubscriptionsDetected;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
