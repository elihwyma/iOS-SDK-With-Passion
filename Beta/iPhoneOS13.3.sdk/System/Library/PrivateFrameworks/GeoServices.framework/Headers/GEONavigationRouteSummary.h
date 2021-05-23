/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOComposedWaypoint, NSString, PBDataReader;

@interface GEONavigationRouteSummary : PBCodable

{
    PBDataReader *_reader;
    NSString *_destinationName;
    GEOComposedWaypoint *_destination;
    GEOComposedWaypoint *_origin;
    double _travelTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transportType;
    struct {
        unsigned int has_travelTime:1;
        unsigned int has_transportType:1;
        unsigned int read_destinationName:1;
        unsigned int read_destination:1;
        unsigned int read_origin:1;
        unsigned int wrote_destinationName:1;
        unsigned int wrote_destination:1;
        unsigned int wrote_origin:1;
        unsigned int wrote_travelTime:1;
        unsigned int wrote_transportType:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) _Bool hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) _Bool hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) _Bool hasTravelTime;
@property (nonatomic) double travelTime;

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
- (void)readAll:(_Bool)arg1;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)setRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (void)_readDestinationName;
- (void)_readDestination;
- (void)_readOrigin;

@end
