/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDDatasetABStatus, GEOTransitRouteUpdateConfiguration, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdateResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint _timepointUsed;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSData *_responseId;
    GEOTransitRouteUpdateConfiguration *_routeUpdateConfiguration;
    NSMutableArray *_routeUpdates;
    NSString *_transitDataVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_timepointUsed:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_responseId:1;
        unsigned int read_routeUpdateConfiguration:1;
        unsigned int read_routeUpdates:1;
        unsigned int read_transitDataVersion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_timepointUsed:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_routeUpdateConfiguration:1;
        unsigned int wrote_routeUpdates:1;
        unsigned int wrote_transitDataVersion:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *routeUpdates;
@property (nonatomic, readonly) _Bool hasResponseId;
@property (retain, nonatomic) NSData *responseId;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) _Bool hasRouteUpdateConfiguration;
@property (retain, nonatomic) GEOTransitRouteUpdateConfiguration *routeUpdateConfiguration;
@property (nonatomic) _Bool hasTimepointUsed;
@property (nonatomic) struct GEOTimepoint timepointUsed;
@property (nonatomic, readonly) _Bool hasTransitDataVersion;
@property (retain, nonatomic) NSString *transitDataVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)routeUpdateType;

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
- (void)_readDatasetAbStatus;
- (void)_readTransitDataVersion;
- (void)_readResponseId;
- (void)_readRouteUpdates;
- (void)_addNoFlagsRouteUpdate:(id)arg1;
- (void)_readRouteUpdateConfiguration;
- (unsigned long long)routeUpdatesCount;
- (void)clearRouteUpdates;
- (id)routeUpdateAtIndex:(unsigned long long)arg1;
- (void)addRouteUpdate:(id)arg1;

@end
