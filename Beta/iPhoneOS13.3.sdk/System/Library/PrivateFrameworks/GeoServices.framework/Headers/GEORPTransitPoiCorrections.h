/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPAccessPointCorrections, GEORPAmenityCorrections, GEORPCorrectedCoordinate, GEORPMapLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    NSString *_name;
    NSString *_originalName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _lineScheduleDelay;
    _Bool _lineShapeIncorrect;
    struct {
        unsigned int has_lineScheduleDelay:1;
        unsigned int has_lineShapeIncorrect:1;
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoint:1;
        unsigned int read_amenity:1;
        unsigned int read_businessHours:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapLocation:1;
        unsigned int read_name:1;
        unsigned int read_originalName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessPoint:1;
        unsigned int wrote_amenity:1;
        unsigned int wrote_businessHours:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_name:1;
        unsigned int wrote_originalName:1;
        unsigned int wrote_lineScheduleDelay:1;
        unsigned int wrote_lineShapeIncorrect:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasAmenity;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (nonatomic, readonly) _Bool hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (nonatomic) _Bool hasLineShapeIncorrect;
@property (nonatomic) _Bool lineShapeIncorrect;
@property (nonatomic) _Bool hasLineScheduleDelay;
@property (nonatomic) _Bool lineScheduleDelay;
@property (nonatomic, readonly) _Bool hasAccessPoint;
@property (retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property (nonatomic, readonly) _Bool hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)businessHoursType;

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
- (void)_readName;
- (void)_readCoordinate;
- (void)_readMapLocation;
- (void)_readAmenity;
- (void)_readBusinessHours;
- (void)_addNoFlagsBusinessHours:(id)arg1;
- (void)_readAccessPoint;
- (void)_readOriginalName;
- (unsigned long long)businessHoursCount;
- (void)clearBusinessHours;
- (id)businessHoursAtIndex:(unsigned long long)arg1;
- (void)addBusinessHours:(id)arg1;

@end
