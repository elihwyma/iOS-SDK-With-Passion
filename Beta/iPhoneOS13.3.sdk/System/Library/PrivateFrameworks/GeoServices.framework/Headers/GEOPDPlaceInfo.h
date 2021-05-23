/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDBasemapRegionMetadata, GEOTimezone, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _area;
    GEOPDBasemapRegionMetadata *_basemapRegionMetadata;
    GEOLatLng *_center;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _knownAccuracy;
    _Bool _isApproximateCenter;
    struct {
        unsigned int has_area:1;
        unsigned int has_knownAccuracy:1;
        unsigned int has_isApproximateCenter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_basemapRegionMetadata:1;
        unsigned int read_center:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_area:1;
        unsigned int wrote_basemapRegionMetadata:1;
        unsigned int wrote_center:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_knownAccuracy:1;
        unsigned int wrote_isApproximateCenter:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) _Bool hasArea;
@property (nonatomic) double area;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic) _Bool hasIsApproximateCenter;
@property (nonatomic) _Bool isApproximateCenter;
@property (nonatomic) _Bool hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;
@property (nonatomic, readonly) _Bool hasBasemapRegionMetadata;
@property (retain, nonatomic) GEOPDBasemapRegionMetadata *basemapRegionMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)placeInfoForPlaceData:(id)arg1;

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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readCenter;
- (void)_readTimezone;
- (id)knownAccuracyAsString:(int)arg1;
- (int)StringAsKnownAccuracy:(id)arg1;
- (void)_readBasemapRegionMetadata;

@end
