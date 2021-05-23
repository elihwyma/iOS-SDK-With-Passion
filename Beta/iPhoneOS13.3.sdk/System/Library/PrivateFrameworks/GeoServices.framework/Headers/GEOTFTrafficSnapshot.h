/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOTFTrafficSnapshot : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_compactSpeeds;
    NSString *_feedId;
    unsigned long long _feedPublishTime;
    long long _feedUpdateTime;
    NSMutableArray *_incidents;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _trafficVersion;
    struct {
        unsigned int has_feedPublishTime:1;
        unsigned int has_feedUpdateTime:1;
        unsigned int has_trafficVersion:1;
        unsigned int read_compactSpeeds:1;
        unsigned int read_feedId:1;
        unsigned int read_incidents:1;
        unsigned int read_regions:1;
        unsigned int read_snapshotId:1;
        unsigned int read_speeds:1;
        unsigned int wrote_compactSpeeds:1;
        unsigned int wrote_feedId:1;
        unsigned int wrote_feedPublishTime:1;
        unsigned int wrote_feedUpdateTime:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_snapshotId:1;
        unsigned int wrote_speeds:1;
        unsigned int wrote_trafficVersion:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (retain, nonatomic) NSMutableArray *speeds;
@property (nonatomic) _Bool hasFeedUpdateTime;
@property (nonatomic) long long feedUpdateTime;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) _Bool hasTrafficVersion;
@property (nonatomic) unsigned int trafficVersion;
@property (nonatomic) _Bool hasFeedPublishTime;
@property (nonatomic) unsigned long long feedPublishTime;
@property (retain, nonatomic) NSMutableArray *compactSpeeds;
@property (nonatomic, readonly) _Bool hasSnapshotId;
@property (retain, nonatomic) NSString *snapshotId;

+ (_Bool)isValid:(id)arg1;
+ (Class)regionType;
+ (Class)speedsType;
+ (Class)incidentsType;
+ (Class)compactSpeedsType;

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
- (void)addRegion:(id)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (unsigned long long)regionsCount;
- (id)regionAtIndex:(unsigned long long)arg1;
- (void)_readFeedId;
- (void)_readSnapshotId;
- (void)_readRegions;
- (void)_addNoFlagsRegion:(id)arg1;
- (void)_readSpeeds;
- (void)_addNoFlagsSpeeds:(id)arg1;
- (void)_readIncidents;
- (void)_addNoFlagsIncidents:(id)arg1;
- (unsigned long long)speedsCount;
- (void)clearSpeeds;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (void)addSpeeds:(id)arg1;
- (unsigned long long)incidentsCount;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (void)addIncidents:(id)arg1;
- (void)_readCompactSpeeds;
- (void)_addNoFlagsCompactSpeeds:(id)arg1;
- (unsigned long long)compactSpeedsCount;
- (void)clearCompactSpeeds;
- (id)compactSpeedsAtIndex:(unsigned long long)arg1;
- (void)addCompactSpeeds:(id)arg1;

@end
