/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOLatLng : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _lat;
    double _lng;
    _Bool _gtLog;
    struct {
        unsigned int has_gtLog:1;
    } _flags;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) _Bool hasGtLog;
@property (nonatomic) _Bool gtLog;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
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
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
