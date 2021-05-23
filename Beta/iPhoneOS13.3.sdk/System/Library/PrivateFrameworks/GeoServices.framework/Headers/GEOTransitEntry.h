/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTransitEntry : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    unsigned long long _tripMuid;
    unsigned int _tripStaticDepartureTime;
    unsigned int _windowStartTime;
    struct {
        unsigned int has_lineMuid:1;
        unsigned int has_tripMuid:1;
        unsigned int has_tripStaticDepartureTime:1;
        unsigned int has_windowStartTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic) _Bool hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) _Bool hasTripStaticDepartureTime;
@property (nonatomic) unsigned int tripStaticDepartureTime;
@property (nonatomic) _Bool hasWindowStartTime;
@property (nonatomic) unsigned int windowStartTime;
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

@end
