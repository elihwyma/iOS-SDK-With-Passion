/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBDataReader, PBUnknownFields;

@interface GEOLocation : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _courseAccuracy;
    double _course;
    double _heading;
    double _horizontalAccuracy;
    GEOLatLng *_latLng;
    GEOLatLng *_rawCoordinate;
    double _rawCourse;
    double _speedAccuracy;
    double _speed;
    double _timestamp;
    unsigned long long _transitID;
    double _verticalAccuracy;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _altitude;
    int _formOfWay;
    int _levelOrdinal;
    int _matchQuality;
    int _referenceFrame;
    int _roadClass;
    int _transportType;
    int _type;
    _Bool _isMatchedLocation;
    _Bool _isShifted;
    struct {
        unsigned int has_courseAccuracy:1;
        unsigned int has_course:1;
        unsigned int has_heading:1;
        unsigned int has_horizontalAccuracy:1;
        unsigned int has_rawCourse:1;
        unsigned int has_speedAccuracy:1;
        unsigned int has_speed:1;
        unsigned int has_timestamp:1;
        unsigned int has_transitID:1;
        unsigned int has_verticalAccuracy:1;
        unsigned int has_altitude:1;
        unsigned int has_formOfWay:1;
        unsigned int has_levelOrdinal:1;
        unsigned int has_matchQuality:1;
        unsigned int has_referenceFrame:1;
        unsigned int has_roadClass:1;
        unsigned int has_transportType:1;
        unsigned int has_type:1;
        unsigned int has_isMatchedLocation:1;
        unsigned int has_isShifted:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_rawCoordinate:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_courseAccuracy:1;
        unsigned int wrote_course:1;
        unsigned int wrote_heading:1;
        unsigned int wrote_horizontalAccuracy:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_rawCoordinate:1;
        unsigned int wrote_rawCourse:1;
        unsigned int wrote_speedAccuracy:1;
        unsigned int wrote_speed:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_transitID:1;
        unsigned int wrote_verticalAccuracy:1;
        unsigned int wrote_altitude:1;
        unsigned int wrote_formOfWay:1;
        unsigned int wrote_levelOrdinal:1;
        unsigned int wrote_matchQuality:1;
        unsigned int wrote_referenceFrame:1;
        unsigned int wrote_roadClass:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_type:1;
        unsigned int wrote_isMatchedLocation:1;
        unsigned int wrote_isShifted:1;
    } _flags;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) _Bool hasAccurateCourse;
@property (nonatomic) _Bool hasCourseAccuracy;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) _Bool hasSpeedAccuracy;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) _Bool hasIsMatchedLocation;
@property (nonatomic) _Bool isMatchedLocation;
@property (nonatomic) _Bool hasIsShifted;
@property (nonatomic) _Bool isShifted;
@property (nonatomic) _Bool hasTransitID;
@property (nonatomic) unsigned long long transitID;
@property (nonatomic) _Bool hasReferenceFrame;
@property (nonatomic) int referenceFrame;
@property (nonatomic, readonly) _Bool hasRawCoordinate;
@property (retain, nonatomic) GEOLatLng *rawCoordinate;
@property (nonatomic) _Bool hasRawCourse;
@property (nonatomic) double rawCourse;
@property (nonatomic) _Bool hasMatchQuality;
@property (nonatomic) int matchQuality;
@property (nonatomic) _Bool hasFormOfWay;
@property (nonatomic) int formOfWay;
@property (nonatomic) _Bool hasRoadClass;
@property (nonatomic) int roadClass;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasAltitude;
@property (nonatomic) int altitude;
@property (nonatomic) _Bool hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) _Bool hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) _Bool hasSpeed;
@property (nonatomic) double speed;
@property (nonatomic) _Bool hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) _Bool hasCourse;
@property (nonatomic) double course;
@property (nonatomic) _Bool hasLevelOrdinal;
@property (nonatomic) int levelOrdinal;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLocation:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readLatLng;
- (void)_readRawCoordinate;
- (id)referenceFrameAsString:(int)arg1;
- (int)StringAsReferenceFrame:(id)arg1;
- (id)matchQualityAsString:(int)arg1;
- (int)StringAsMatchQuality:(id)arg1;
- (id)formOfWayAsString:(int)arg1;
- (int)StringAsFormOfWay:(id)arg1;
- (id)roadClassAsString:(int)arg1;
- (int)StringAsRoadClass:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;
- (id)initWithLocation:(id)arg1 floorOrdinal:(int)arg2;
- (id)initWithLocation:(id)arg1 isUserLocation:(_Bool)arg2 floorOrdinal:(int)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 floorOrdinal:(int)arg3;
- (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1 isUserLocation:(_Bool)arg2 floorOrdinal:(int)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 isUserLocation:(_Bool)arg3 floorOrdinal:(int)arg4;
- (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1 isUserLocation:(_Bool)arg2;
- (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1 floorOrdinal:(int)arg2;

@end
