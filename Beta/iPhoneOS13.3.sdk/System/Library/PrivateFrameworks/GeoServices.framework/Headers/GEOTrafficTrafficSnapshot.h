/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTrafficSnapshotMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficSnapshot : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_colors;
    NSMutableArray *_incidents;
    unsigned long long _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_receivedTime:1;
        unsigned int read_colors:1;
        unsigned int read_incidents:1;
        unsigned int read_snapshotMetaData:1;
        unsigned int read_speeds:1;
        unsigned int wrote_colors:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_receivedTime:1;
        unsigned int wrote_snapshotMetaData:1;
        unsigned int wrote_speeds:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSnapshotMetaData;
@property (retain, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;
@property (retain, nonatomic) NSMutableArray *speeds;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (retain, nonatomic) NSMutableArray *colors;
@property (nonatomic) _Bool hasReceivedTime;
@property (nonatomic) unsigned long long receivedTime;

+ (_Bool)isValid:(id)arg1;
+ (Class)speedsType;
+ (Class)incidentsType;
+ (Class)colorsType;

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
- (void)_readSpeeds;
- (void)_addNoFlagsSpeeds:(id)arg1;
- (void)_readIncidents;
- (void)_addNoFlagsIncidents:(id)arg1;
- (void)_readColors;
- (void)_addNoFlagsColors:(id)arg1;
- (unsigned long long)speedsCount;
- (void)clearSpeeds;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (void)addSpeeds:(id)arg1;
- (unsigned long long)incidentsCount;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (void)addIncidents:(id)arg1;
- (unsigned long long)colorsCount;
- (void)clearColors;
- (id)colorsAtIndex:(unsigned long long)arg1;
- (void)addColors:(id)arg1;

@end
