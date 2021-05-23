/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTimeRange : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _from;
    unsigned int _to;
    struct {
        unsigned int has_from:1;
        unsigned int has_to:1;
    } _flags;
}

@property (nonatomic) _Bool hasFrom;
@property (nonatomic) unsigned int from;
@property (nonatomic) _Bool hasTo;
@property (nonatomic) unsigned int to;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange *)arg1;

@end
