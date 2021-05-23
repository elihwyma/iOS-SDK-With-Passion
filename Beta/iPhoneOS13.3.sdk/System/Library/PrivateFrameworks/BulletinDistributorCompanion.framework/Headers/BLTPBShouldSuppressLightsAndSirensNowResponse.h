/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable

{
    _Bool _shouldSuppress;
    struct {
        unsigned int shouldSuppress:1;
    } _has;
}

@property (nonatomic) _Bool hasShouldSuppress;
@property (nonatomic) _Bool shouldSuppress;

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
