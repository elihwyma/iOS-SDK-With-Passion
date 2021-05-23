/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOCacheHit : PBCodable

{
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_requestorType:1;
        unsigned int has_tileSourceType:1;
    } _flags;
}

@property (nonatomic) _Bool hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) _Bool hasTileSourceType;
@property (nonatomic) int tileSourceType;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) _Bool hasBytes;
@property (nonatomic) unsigned int bytes;

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
- (id)requestorTypeAsString:(int)arg1;
- (int)StringAsRequestorType:(id)arg1;
- (id)tileSourceTypeAsString:(int)arg1;
- (int)StringAsTileSourceType:(id)arg1;

@end
