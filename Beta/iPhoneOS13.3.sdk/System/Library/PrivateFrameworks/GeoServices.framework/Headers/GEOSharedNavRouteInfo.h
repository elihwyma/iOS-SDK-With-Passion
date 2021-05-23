/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

@interface GEOSharedNavRouteInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_82f37d05 _coordinates;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_coordinates:1;
        unsigned int read_trafficColorOffsets:1;
        unsigned int read_trafficColors:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_coordinates:1;
        unsigned int wrote_trafficColorOffsets:1;
        unsigned int wrote_trafficColors:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long coordinatesCount;
@property (nonatomic, readonly) double *coordinates;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, readonly) unsigned int *trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int *trafficColorOffsets;
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
- (void)_readCoordinates;
- (void)_addNoFlagsCoordinates:(double)arg1;
- (void)_readTrafficColors;
- (void)_addNoFlagsTrafficColor:(unsigned int)arg1;
- (void)_readTrafficColorOffsets;
- (void)_addNoFlagsTrafficColorOffset:(unsigned int)arg1;
- (void)clearCoordinates;
- (double)coordinatesAtIndex:(unsigned long long)arg1;
- (void)addCoordinates:(double)arg1;
- (void)clearTrafficColors;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)setCoordinates:(double *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
