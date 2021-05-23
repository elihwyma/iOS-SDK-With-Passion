/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTransitVehicleTime, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitVehicleInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _clusteredRouteLineArtworkIndexs;
    GEOTransitVehicleTime *_arrivalTime;
    GEOTransitVehicleTime *_departureTime;
    unsigned long long _tripMuid;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _departureFrequencyMax;
    unsigned int _departureFrequencyMin;
    unsigned int _lineIndex;
    int _pickupDropoffType;
    unsigned int _routeLineArtworkIndex;
    struct {
        unsigned int has_tripMuid:1;
        unsigned int has_departureFrequencyMax:1;
        unsigned int has_departureFrequencyMin:1;
        unsigned int has_lineIndex:1;
        unsigned int has_pickupDropoffType:1;
        unsigned int has_routeLineArtworkIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clusteredRouteLineArtworkIndexs:1;
        unsigned int read_arrivalTime:1;
        unsigned int read_departureTime:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clusteredRouteLineArtworkIndexs:1;
        unsigned int wrote_arrivalTime:1;
        unsigned int wrote_departureTime:1;
        unsigned int wrote_tripMuid:1;
        unsigned int wrote_vehicleNumber:1;
        unsigned int wrote_departureFrequencyMax:1;
        unsigned int wrote_departureFrequencyMin:1;
        unsigned int wrote_lineIndex:1;
        unsigned int wrote_pickupDropoffType:1;
        unsigned int wrote_routeLineArtworkIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasArrivalTime;
@property (retain, nonatomic) GEOTransitVehicleTime *arrivalTime;
@property (nonatomic, readonly) _Bool hasDepartureTime;
@property (retain, nonatomic) GEOTransitVehicleTime *departureTime;
@property (nonatomic) _Bool hasLineIndex;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic) _Bool hasRouteLineArtworkIndex;
@property (nonatomic) unsigned int routeLineArtworkIndex;
@property (nonatomic, readonly) unsigned long long clusteredRouteLineArtworkIndexsCount;
@property (nonatomic, readonly) unsigned int *clusteredRouteLineArtworkIndexs;
@property (nonatomic) _Bool hasPickupDropoffType;
@property (nonatomic) int pickupDropoffType;
@property (nonatomic) _Bool hasDepartureFrequencyMin;
@property (nonatomic) unsigned int departureFrequencyMin;
@property (nonatomic) _Bool hasDepartureFrequencyMax;
@property (nonatomic) unsigned int departureFrequencyMax;
@property (nonatomic) _Bool hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic, readonly) _Bool hasVehicleNumber;
@property (retain, nonatomic) NSString *vehicleNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readArrivalTime;
- (void)_readDepartureTime;
- (void)_readClusteredRouteLineArtworkIndexs;
- (void)_addNoFlagsClusteredRouteLineArtworkIndex:(unsigned int)arg1;
- (void)_readVehicleNumber;
- (void)clearClusteredRouteLineArtworkIndexs;
- (unsigned int)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addClusteredRouteLineArtworkIndex:(unsigned int)arg1;
- (void)setClusteredRouteLineArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)pickupDropoffTypeAsString:(int)arg1;
- (int)StringAsPickupDropoffType:(id)arg1;

@end
