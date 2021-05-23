/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTrafficSnapshotMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncidentSnapshot : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_incidents;
    unsigned long long _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_receivedTime:1;
        unsigned int read_incidents:1;
        unsigned int read_snapshotMetaData:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_receivedTime:1;
        unsigned int wrote_snapshotMetaData:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSnapshotMetaData;
@property (retain, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (nonatomic) _Bool hasReceivedTime;
@property (nonatomic) unsigned long long receivedTime;

+ (_Bool)isValid:(id)arg1;
+ (Class)incidentsType;

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
- (void)_readSnapshotMetaData;
- (void)_readIncidents;
- (void)_addNoFlagsIncidents:(id)arg1;
- (unsigned long long)incidentsCount;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (void)addIncidents:(id)arg1;

@end
