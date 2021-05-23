/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@interface BLTPBWillSendLightsAndSirensResponse : PBCodable

{
    unsigned int _additionalWait;
    _Bool _willSend;
    struct {
        unsigned int additionalWait:1;
        unsigned int willSend:1;
    } _has;
}

@property (nonatomic) _Bool hasWillSend;
@property (nonatomic) _Bool willSend;
@property (nonatomic) _Bool hasAdditionalWait;
@property (nonatomic) unsigned int additionalWait;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
