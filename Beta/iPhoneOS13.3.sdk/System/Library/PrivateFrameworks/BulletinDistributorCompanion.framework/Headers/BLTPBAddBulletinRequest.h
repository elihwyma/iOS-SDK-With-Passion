/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest

{
    double _date;
    BLTPBBulletin *_bulletin;
    unsigned int _updateType;
    _Bool _shouldPlayLightsAndSirens;
    _Bool _trafficRestricted;
    struct {
        unsigned int date:1;
        unsigned int updateType:1;
        unsigned int shouldPlayLightsAndSirens:1;
        unsigned int trafficRestricted:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBulletin;
@property (retain, nonatomic) BLTPBBulletin *bulletin;
@property (nonatomic) _Bool hasShouldPlayLightsAndSirens;
@property (nonatomic) _Bool shouldPlayLightsAndSirens;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic) _Bool hasUpdateType;
@property (nonatomic) unsigned int updateType;
@property (nonatomic) _Bool hasTrafficRestricted;
@property (nonatomic) _Bool trafficRestricted;

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
