/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _distToNextCheckpoints;
    CDStruct_9f2792e4 _timeToNextCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_distToNextCheckpoints:1;
        unsigned int read_timeToNextCheckpoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_distToNextCheckpoints:1;
        unsigned int wrote_timeToNextCheckpoints:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long distToNextCheckpointsCount;
@property (nonatomic, readonly) unsigned int *distToNextCheckpoints;
@property (nonatomic, readonly) unsigned long long timeToNextCheckpointsCount;
@property (nonatomic, readonly) unsigned int *timeToNextCheckpoints;
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
- (void)_readDistToNextCheckpoints;
- (void)_addNoFlagsDistToNextCheckpoint:(unsigned int)arg1;
- (void)_readTimeToNextCheckpoints;
- (void)_addNoFlagsTimeToNextCheckpoint:(unsigned int)arg1;
- (void)clearDistToNextCheckpoints;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)arg1;
- (void)addDistToNextCheckpoint:(unsigned int)arg1;
- (void)clearTimeToNextCheckpoints;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)arg1;
- (void)addTimeToNextCheckpoint:(unsigned int)arg1;
- (void)setDistToNextCheckpoints:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTimeToNextCheckpoints:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
