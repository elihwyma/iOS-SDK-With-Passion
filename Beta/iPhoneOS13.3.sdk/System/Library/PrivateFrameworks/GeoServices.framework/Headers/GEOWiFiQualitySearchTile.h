/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOWiFiQualitySearchTile : PBCodable

{
    unsigned long long _tileKey;
    int _type;
    struct {
        unsigned int has_tileKey:1;
        unsigned int has_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
