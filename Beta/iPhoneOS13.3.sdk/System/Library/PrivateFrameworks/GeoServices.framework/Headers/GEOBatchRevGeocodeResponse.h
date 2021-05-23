/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeResponse : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    double _timestamp;
    NSMutableArray *_versionDomains;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusCode;
    unsigned int _ttl;
    unsigned int _version;
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_statusCode:1;
        unsigned int has_ttl:1;
        unsigned int has_version:1;
        unsigned int read_batchPlaceResults:1;
        unsigned int read_clusters:1;
        unsigned int read_versionDomains:1;
        unsigned int wrote_batchPlaceResults:1;
        unsigned int wrote_clusters:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_versionDomains:1;
        unsigned int wrote_statusCode:1;
        unsigned int wrote_ttl:1;
        unsigned int wrote_version:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *clusters;
@property (retain, nonatomic) NSMutableArray *batchPlaceResults;
@property (nonatomic) _Bool hasTtl;
@property (nonatomic) unsigned int ttl;
@property (retain, nonatomic) NSMutableArray *versionDomains;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;

+ (_Bool)isValid:(id)arg1;
+ (Class)versionDomainType;
+ (Class)clusterType;
+ (Class)batchPlaceResultType;

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
- (void)clearSensitiveFields;
- (unsigned long long)clustersCount;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (unsigned long long)batchPlaceResultsCount;
- (void)addVersionDomain:(id)arg1;
- (unsigned long long)versionDomainsCount;
- (void)clearVersionDomains;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (void)_readClusters;
- (void)_addNoFlagsCluster:(id)arg1;
- (void)clearClusters;
- (id)clusterAtIndex:(unsigned long long)arg1;
- (void)addCluster:(id)arg1;
- (void)_readBatchPlaceResults;
- (void)_addNoFlagsBatchPlaceResult:(id)arg1;
- (void)_readVersionDomains;
- (void)_addNoFlagsVersionDomain:(id)arg1;
- (void)clearBatchPlaceResults;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;
- (void)addBatchPlaceResult:(id)arg1;

@end
