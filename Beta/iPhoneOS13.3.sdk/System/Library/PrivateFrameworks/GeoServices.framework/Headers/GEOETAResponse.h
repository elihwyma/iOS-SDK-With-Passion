/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOClientMetrics, GEOETAResult, GEOETAServiceResponseSummary, GEOPDDatasetABStatus, GEOPlaceSearchResponse, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETAResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    unsigned long long _debugServerLatencyMs;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_debugServerLatencyMs:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_problemDetails:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugData:1;
        unsigned int read_etaResultReferencePointDestinations:1;
        unsigned int read_etaResultReferencePointOrigin:1;
        unsigned int read_etaResults:1;
        unsigned int read_etaServiceSummary:1;
        unsigned int read_originPlaceSearchResponse:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_problemDetails:1;
        unsigned int wrote_clientMetrics:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_debugData:1;
        unsigned int wrote_debugServerLatencyMs:1;
        unsigned int wrote_etaResultReferencePointDestinations:1;
        unsigned int wrote_etaResultReferencePointOrigin:1;
        unsigned int wrote_etaResults:1;
        unsigned int wrote_etaServiceSummary:1;
        unsigned int wrote_originPlaceSearchResponse:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasEtaServiceSummary;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic) _Bool hasDebugServerLatencyMs;
@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (nonatomic, readonly) _Bool hasClientMetrics;
@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *etaResults;
@property (nonatomic, readonly) _Bool hasOriginPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (nonatomic, readonly) unsigned long long problemDetailsCount;
@property (nonatomic, readonly) struct GEOProblemDetail *problemDetails;
@property (nonatomic, readonly) _Bool hasEtaResultReferencePointOrigin;
@property (retain, nonatomic) GEOETAResult *etaResultReferencePointOrigin;
@property (retain, nonatomic) NSMutableArray *etaResultReferencePointDestinations;
@property (nonatomic, readonly) _Bool hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) _Bool hasDebugData;
@property (retain, nonatomic) NSString *debugData;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)etaResultType;
+ (Class)etaResultReferencePointDestinationType;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)clearProblemDetails;
- (void)_readProblemDetails;
- (void)_addNoFlagsProblemDetail:(struct GEOProblemDetail)arg1;
- (void)_readDatasetAbStatus;
- (void)_readDebugData;
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)_readEtaServiceSummary;
- (void)_readClientMetrics;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;
- (void)_readEtaResults;
- (void)_addNoFlagsEtaResult:(id)arg1;
- (void)_readOriginPlaceSearchResponse;
- (void)_readEtaResultReferencePointOrigin;
- (void)_readEtaResultReferencePointDestinations;
- (void)_addNoFlagsEtaResultReferencePointDestination:(id)arg1;
- (unsigned long long)etaResultsCount;
- (void)clearEtaResults;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (void)addEtaResult:(id)arg1;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (void)clearEtaResultReferencePointDestinations;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1;
- (void)addEtaResultReferencePointDestination:(id)arg1;

@end
