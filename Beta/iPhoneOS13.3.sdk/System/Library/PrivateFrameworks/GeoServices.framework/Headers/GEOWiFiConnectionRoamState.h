/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOWiFiConnectionRoamState : PBCodable

{
    int _lateRoamMaxRSSI;
    int _lateRoamMinRSSI;
    struct {
        unsigned int has_lateRoamMaxRSSI:1;
        unsigned int has_lateRoamMinRSSI:1;
    } _flags;
}

@property (nonatomic) _Bool hasLateRoamMinRSSI;
@property (nonatomic) int lateRoamMinRSSI;
@property (nonatomic) _Bool hasLateRoamMaxRSSI;
@property (nonatomic) int lateRoamMaxRSSI;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
