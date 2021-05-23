/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class BLTPBBulletinSummary;

@interface BLTPBAddBulletinSummaryRequest : PBRequest

{
    BLTPBBulletinSummary *_bulletin;
}

@property (nonatomic, readonly) _Bool hasBulletin;
@property (retain, nonatomic) BLTPBBulletinSummary *bulletin;

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
