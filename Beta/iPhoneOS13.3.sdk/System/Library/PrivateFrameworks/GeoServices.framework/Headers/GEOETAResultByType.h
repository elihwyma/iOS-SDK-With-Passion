/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORouteTrafficDetail, GEOShortTrafficSummary, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOETAResultByType : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _expectedTimeOfDeparture;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    NSMutableArray *_summaryForPredictedDestinations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _staticTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct {
        unsigned int has_expectedTimeOfDeparture:1;
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_staticTravelTime:1;
        unsigned int has_status:1;
        unsigned int has_transportType:1;
        unsigned int has_travelTimeBestEstimate:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeTrafficDetail:1;
        unsigned int read_shortTrafficSummary:1;
        unsigned int read_summaryForPredictedDestinations:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_expectedTimeOfDeparture:1;
        unsigned int wrote_routeTrafficDetail:1;
        unsigned int wrote_shortTrafficSummary:1;
        unsigned int wrote_summaryForPredictedDestinations:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_historicTravelTime:1;
        unsigned int wrote_staticTravelTime:1;
        unsigned int wrote_status:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_travelTimeBestEstimate:1;
        unsigned int wrote_travelTimeAggressiveEstimate:1;
        unsigned int wrote_travelTimeConservativeEstimate:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasTravelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) _Bool hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) _Bool hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) _Bool hasExpectedTimeOfDeparture;
@property (nonatomic) double expectedTimeOfDeparture;
@property (nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) _Bool hasStaticTravelTime;
@property (nonatomic) unsigned int staticTravelTime;
@property (retain, nonatomic) NSMutableArray *summaryForPredictedDestinations;
@property (nonatomic, readonly) _Bool hasRouteTrafficDetail;
@property (retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic, readonly) _Bool hasShortTrafficSummary;
@property (retain, nonatomic) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)summaryForPredictedDestinationType;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)_readSummaryForPredictedDestinations;
- (void)_addNoFlagsSummaryForPredictedDestination:(id)arg1;
- (void)_readRouteTrafficDetail;
- (void)_readShortTrafficSummary;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (void)clearSummaryForPredictedDestinations;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (void)addSummaryForPredictedDestination:(id)arg1;

@end
