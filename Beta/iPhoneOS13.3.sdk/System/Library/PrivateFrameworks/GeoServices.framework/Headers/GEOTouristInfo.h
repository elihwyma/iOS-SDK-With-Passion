/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOTouristInfo : PBCodable

{
    double _fetchTimestamp;
    _Bool _isTourist;
    struct {
        unsigned int has_fetchTimestamp:1;
        unsigned int has_isTourist:1;
    } _flags;
}

@property (nonatomic) _Bool hasIsTourist;
@property (nonatomic) _Bool isTourist;
@property (nonatomic) _Bool hasFetchTimestamp;
@property (nonatomic) double fetchTimestamp;

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
