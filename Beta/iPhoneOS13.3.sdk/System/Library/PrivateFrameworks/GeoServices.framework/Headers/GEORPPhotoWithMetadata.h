/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSData, PBDataReader;

@interface GEORPPhotoWithMetadata : PBCodable

{
    PBDataReader *_reader;
    double _creationDate;
    NSData *_data;
    GEOLatLng *_geotagCoordinate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_creationDate:1;
        unsigned int has_geotagHorizontalAccuracy:1;
        unsigned int has_geotagTimestamp:1;
        unsigned int read_data:1;
        unsigned int read_geotagCoordinate:1;
        unsigned int wrote_creationDate:1;
        unsigned int wrote_data:1;
        unsigned int wrote_geotagCoordinate:1;
        unsigned int wrote_geotagHorizontalAccuracy:1;
        unsigned int wrote_geotagTimestamp:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasData;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic, readonly) _Bool hasGeotagCoordinate;
@property (retain, nonatomic) GEOLatLng *geotagCoordinate;
@property (nonatomic) _Bool hasGeotagHorizontalAccuracy;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) _Bool hasGeotagTimestamp;
@property (nonatomic) double geotagTimestamp;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)_readData;
- (void)readAll:(_Bool)arg1;
- (void)_readGeotagCoordinate;

@end
