/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTrafficResponseMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficApiResponse : PBCodable

{
    PBDataReader *_reader;
    struct GEOSessionID _responseId;
    NSMutableArray *_incidentSnapshots;
    GEOTrafficResponseMetaData *_metaData;
    NSMutableArray *_speedSnapshots;
    NSMutableArray *_trafficSnapshots;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_responseId:1;
        unsigned int read_incidentSnapshots:1;
        unsigned int read_metaData:1;
        unsigned int read_speedSnapshots:1;
        unsigned int read_trafficSnapshots:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_incidentSnapshots:1;
        unsigned int wrote_metaData:1;
        unsigned int wrote_speedSnapshots:1;
        unsigned int wrote_trafficSnapshots:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *speedSnapshots;
@property (retain, nonatomic) NSMutableArray *incidentSnapshots;
@property (nonatomic) _Bool hasResponseId;
@property (nonatomic) struct GEOSessionID responseId;
@property (nonatomic, readonly) _Bool hasMetaData;
@property (retain, nonatomic) GEOTrafficResponseMetaData *metaData;
@property (retain, nonatomic) NSMutableArray *trafficSnapshots;

+ (_Bool)isValid:(id)arg1;
+ (Class)speedSnapshotsType;
+ (Class)incidentSnapshotsType;
+ (Class)trafficSnapshotsType;

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
- (void)_readSpeedSnapshots;
- (void)_addNoFlagsSpeedSnapshots:(id)arg1;
- (void)_readIncidentSnapshots;
- (void)_addNoFlagsIncidentSnapshots:(id)arg1;
- (void)_readMetaData;
- (void)_readTrafficSnapshots;
- (void)_addNoFlagsTrafficSnapshots:(id)arg1;
- (unsigned long long)speedSnapshotsCount;
- (void)clearSpeedSnapshots;
- (id)speedSnapshotsAtIndex:(unsigned long long)arg1;
- (void)addSpeedSnapshots:(id)arg1;
- (unsigned long long)incidentSnapshotsCount;
- (void)clearIncidentSnapshots;
- (id)incidentSnapshotsAtIndex:(unsigned long long)arg1;
- (void)addIncidentSnapshots:(id)arg1;
- (unsigned long long)trafficSnapshotsCount;
- (void)clearTrafficSnapshots;
- (id)trafficSnapshotsAtIndex:(unsigned long long)arg1;
- (void)addTrafficSnapshots:(id)arg1;

@end
