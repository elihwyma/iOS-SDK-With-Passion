/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDGroundDataBuild : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _capabilitys;
    CDStruct_9f2792e4 _lodWithTextures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _bucketId;
    unsigned int _buildId;
    unsigned int _dataFormatVersion;
    float _heightAboveGroundM;
    unsigned int _index;
    unsigned int _metricsVersion;
    int _type;
    int _urlFormat;
    struct {
        unsigned int has_bucketId:1;
        unsigned int has_buildId:1;
        unsigned int has_dataFormatVersion:1;
        unsigned int has_heightAboveGroundM:1;
        unsigned int has_index:1;
        unsigned int has_metricsVersion:1;
        unsigned int has_type:1;
        unsigned int has_urlFormat:1;
        unsigned int read_capabilitys:1;
        unsigned int read_lodWithTextures:1;
        unsigned int wrote_capabilitys:1;
        unsigned int wrote_lodWithTextures:1;
        unsigned int wrote_bucketId:1;
        unsigned int wrote_buildId:1;
        unsigned int wrote_dataFormatVersion:1;
        unsigned int wrote_heightAboveGroundM:1;
        unsigned int wrote_index:1;
        unsigned int wrote_metricsVersion:1;
        unsigned int wrote_type:1;
        unsigned int wrote_urlFormat:1;
    } _flags;
}

@property (nonatomic) _Bool hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) _Bool hasBuildId;
@property (nonatomic) unsigned int buildId;
@property (nonatomic) _Bool hasUrlFormat;
@property (nonatomic) int urlFormat;
@property (nonatomic) _Bool hasDataFormatVersion;
@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasHeightAboveGroundM;
@property (nonatomic) float heightAboveGroundM;
@property (nonatomic, readonly) unsigned long long capabilitysCount;
@property (nonatomic, readonly) int *capabilitys;
@property (nonatomic) _Bool hasBucketId;
@property (nonatomic) unsigned int bucketId;
@property (nonatomic, readonly) unsigned long long lodWithTexturesCount;
@property (nonatomic, readonly) unsigned int *lodWithTextures;
@property (nonatomic) _Bool hasMetricsVersion;
@property (nonatomic) unsigned int metricsVersion;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readCapabilitys;
- (void)_addNoFlagsCapability:(int)arg1;
- (void)_readLodWithTextures;
- (void)_addNoFlagsLodWithTextures:(unsigned int)arg1;
- (void)clearCapabilitys;
- (int)capabilityAtIndex:(unsigned long long)arg1;
- (void)addCapability:(int)arg1;
- (void)clearLodWithTextures;
- (unsigned int)lodWithTexturesAtIndex:(unsigned long long)arg1;
- (void)addLodWithTextures:(unsigned int)arg1;
- (id)urlFormatAsString:(int)arg1;
- (int)StringAsUrlFormat:(id)arg1;
- (void)setCapabilitys:(int *)arg1 count:(unsigned long long)arg2;
- (id)capabilitysAsString:(int)arg1;
- (int)StringAsCapabilitys:(id)arg1;
- (void)setLodWithTextures:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
