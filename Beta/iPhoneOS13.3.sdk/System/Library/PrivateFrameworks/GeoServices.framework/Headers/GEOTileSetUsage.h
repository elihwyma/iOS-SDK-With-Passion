/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOTileSetUsage : PBCodable

{
    unsigned int _count;
    int _style;
    struct {
        unsigned int has_count:1;
        unsigned int has_style:1;
    } _flags;
}

@property (nonatomic) _Bool hasStyle;
@property (nonatomic) int style;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;

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
- (id)styleAsString:(int)arg1;
- (int)StringAsStyle:(id)arg1;

@end
