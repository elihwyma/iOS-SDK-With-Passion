/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOClientMetrics, GEOETAServiceResponseSummary, GEOPDDatasetABStatus, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETATrafficUpdateResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrivalParameters;
    NSMutableArray *_cameras;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    unsigned long long _debugServerLatencyMs;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    NSData *_responseId;
    NSMutableArray *_routes;
    NSData *_sessionState;
    NSMutableArray *_trafficSignals;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_debugServerLatencyMs:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalParameters:1;
        unsigned int read_cameras:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugData:1;
        unsigned int read_etaServiceSummary:1;
        unsigned int read_responseId:1;
        unsigned int read_routes:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficSignals:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_arrivalParameters:1;
        unsigned int wrote_cameras:1;
        unsigned int wrote_clientMetrics:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_debugData:1;
        unsigned int wrote_debugServerLatencyMs:1;
        unsigned int wrote_etaServiceSummary:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_routes:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_trafficSignals:1;
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
@property (retain, nonatomic) NSMutableArray *routes;
@property (nonatomic, readonly) _Bool hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic, readonly) _Bool hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (retain, nonatomic) NSMutableArray *cameras;
@property (nonatomic, readonly) _Bool hasResponseId;
@property (retain, nonatomic) NSData *responseId;
@property (nonatomic, readonly) _Bool hasDebugData;
@property (retain, nonatomic) NSString *debugData;
@property (retain, nonatomic) NSMutableArray *trafficSignals;
@property (retain, nonatomic) NSMutableArray *arrivalParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)cameraType;
+ (_Bool)isValid:(id)arg1;
+ (Class)routeType;
+ (Class)arrivalParametersType;
+ (Class)trafficSignalType;

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
- (void)_readSessionState;
- (void)_readRoutes;
- (void)_addNoFlagsRoute:(id)arg1;
- (void)_readDatasetAbStatus;
- (void)_readDebugData;
- (void)_readArrivalParameters;
- (void)_addNoFlagsArrivalParameters:(id)arg1;
- (void)_readTrafficSignals;
- (void)_addNoFlagsTrafficSignal:(id)arg1;
- (unsigned long long)routesCount;
- (void)clearRoutes;
- (id)routeAtIndex:(unsigned long long)arg1;
- (void)addRoute:(id)arg1;
- (unsigned long long)arrivalParametersCount;
- (void)clearArrivalParameters;
- (id)arrivalParametersAtIndex:(unsigned long long)arg1;
- (void)addArrivalParameters:(id)arg1;
- (unsigned long long)trafficSignalsCount;
- (void)clearTrafficSignals;
- (id)trafficSignalAtIndex:(unsigned long long)arg1;
- (void)addTrafficSignal:(id)arg1;
- (void)_readEtaServiceSummary;
- (void)_readClientMetrics;
- (void)_readResponseId;
- (void)_readCameras;
- (void)_addNoFlagsCamera:(id)arg1;
- (unsigned long long)camerasCount;
- (void)clearCameras;
- (id)cameraAtIndex:(unsigned long long)arg1;
- (void)addCamera:(id)arg1;

@end
