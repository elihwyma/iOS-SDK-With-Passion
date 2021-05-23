/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOABClientConfig, GEOABExperimentAssignment, GEOAbAssignInfo, GEOPDDatasetABStatus, PBDataReader;

@interface GEOLogMsgStateExperiments : PBCodable

{
    PBDataReader *_reader;
    GEOAbAssignInfo *_abAssignInfo;
    GEOABClientConfig *_clientAbExperimentAssignment;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_abAssignInfo:1;
        unsigned int read_clientAbExperimentAssignment:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_tilesAbExperimentAssignment:1;
        unsigned int wrote_abAssignInfo:1;
        unsigned int wrote_clientAbExperimentAssignment:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_tilesAbExperimentAssignment:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTilesAbExperimentAssignment;
@property (retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property (nonatomic, readonly) _Bool hasClientAbExperimentAssignment;
@property (retain, nonatomic) GEOABClientConfig *clientAbExperimentAssignment;
@property (nonatomic, readonly) _Bool hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) _Bool hasAbAssignInfo;
@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;

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
- (void)_readDatasetAbStatus;
- (void)_readAbAssignInfo;
- (void)_readTilesAbExperimentAssignment;
- (void)_readClientAbExperimentAssignment;

@end
