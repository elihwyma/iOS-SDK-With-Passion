/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPBTransitArtwork, GEOPBTransitShield, GEOStyleAttributes, NSDate, NSString, PBDataReader, PBUnknownFields;

@protocol GEOTransitArtworkDataSource;

@interface GEOPBTransitVehiclePosition : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSString *_color;
    NSString *_directionName;
    NSString *_headsign;
    GEOLatLng *_latLng;
    GEOPBTransitShield *_modeShield;
    GEOStyleAttributes *_styleAttributes;
    unsigned long long _time;
    unsigned long long _tripId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _bearing;
    float _speed;
    struct {
        unsigned int has_time:1;
        unsigned int has_tripId:1;
        unsigned int has_bearing:1;
        unsigned int has_speed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_color:1;
        unsigned int read_directionName:1;
        unsigned int read_headsign:1;
        unsigned int read_latLng:1;
        unsigned int read_modeShield:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artwork:1;
        unsigned int wrote_color:1;
        unsigned int wrote_directionName:1;
        unsigned int wrote_headsign:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_modeShield:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_time:1;
        unsigned int wrote_tripId:1;
        unsigned int wrote_bearing:1;
        unsigned int wrote_speed:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long tripID;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) NSString *direction;
@property (copy, nonatomic, readonly) NSString *headsign;
@property (copy, nonatomic, readonly) NSString *colorHexString;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artworkDataSource;
@property (nonatomic) _Bool hasTripId;
@property (nonatomic) unsigned long long tripId;
@property (nonatomic, readonly) _Bool hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) _Bool hasTime;
@property (nonatomic) unsigned long long time;
@property (nonatomic) _Bool hasBearing;
@property (nonatomic) float bearing;
@property (nonatomic) _Bool hasSpeed;
@property (nonatomic) float speed;
@property (nonatomic, readonly) _Bool hasDirectionName;
@property (retain, nonatomic) NSString *directionName;
@property (nonatomic, readonly) _Bool hasHeadsign;
@property (retain, nonatomic) NSString *headsign;
@property (nonatomic, readonly) _Bool hasModeShield;
@property (retain, nonatomic) GEOPBTransitShield *modeShield;
@property (nonatomic, readonly) _Bool hasColor;
@property (retain, nonatomic) NSString *color;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)transitVehiclePositionForPlaceData:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readLatLng;
- (void)_readDirectionName;
- (void)_readHeadsign;
- (void)_readModeShield;
- (void)_readColor;
- (void)_readStyleAttributes;
- (void)_readArtwork;

@end
