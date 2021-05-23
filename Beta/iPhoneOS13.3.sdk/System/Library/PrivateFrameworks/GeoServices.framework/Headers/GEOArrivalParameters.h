/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOArrivalParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrivalMapRegions;
    NSMutableArray *_arrivalPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _arrivalParametersEndOfRouteDistanceThreshold;
    unsigned int _endOfRouteDistanceThreshold;
    struct {
        unsigned int has_arrivalParametersEndOfRouteDistanceThreshold:1;
        unsigned int has_endOfRouteDistanceThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalMapRegions:1;
        unsigned int read_arrivalPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_arrivalMapRegions:1;
        unsigned int wrote_arrivalPoints:1;
        unsigned int wrote_arrivalParametersEndOfRouteDistanceThreshold:1;
        unsigned int wrote_endOfRouteDistanceThreshold:1;
    } _flags;
}

@property (nonatomic) _Bool hasEndOfRouteDistanceThreshold;
@property (nonatomic) unsigned int endOfRouteDistanceThreshold;
@property (retain, nonatomic) NSMutableArray *arrivalPoints;
@property (retain, nonatomic) NSMutableArray *arrivalMapRegions;
@property (nonatomic) _Bool hasArrivalParametersEndOfRouteDistanceThreshold;
@property (nonatomic) unsigned int arrivalParametersEndOfRouteDistanceThreshold;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)arrivalPointsType;
+ (Class)arrivalMapRegionsType;

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
- (void)_readArrivalPoints;
- (void)_addNoFlagsArrivalPoints:(id)arg1;
- (void)_readArrivalMapRegions;
- (void)_addNoFlagsArrivalMapRegions:(id)arg1;
- (unsigned long long)arrivalPointsCount;
- (void)clearArrivalPoints;
- (id)arrivalPointsAtIndex:(unsigned long long)arg1;
- (void)addArrivalPoints:(id)arg1;
- (unsigned long long)arrivalMapRegionsCount;
- (void)clearArrivalMapRegions;
- (id)arrivalMapRegionsAtIndex:(unsigned long long)arg1;
- (void)addArrivalMapRegions:(id)arg1;

@end
