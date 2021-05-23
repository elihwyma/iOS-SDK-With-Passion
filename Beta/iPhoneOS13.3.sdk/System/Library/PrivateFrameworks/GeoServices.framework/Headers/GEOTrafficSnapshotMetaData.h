/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficSnapshotMetaData : PBCodable

{
    PBDataReader *_reader;
    NSString *_basemapId;
    NSString *_branchId;
    NSString *_environment;
    NSString *_feedId;
    NSString *_isoCountryCode;
    unsigned long long _publishTime;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _vendor;
    struct {
        unsigned int has_publishTime:1;
        unsigned int has_vendor:1;
        unsigned int read_basemapId:1;
        unsigned int read_branchId:1;
        unsigned int read_environment:1;
        unsigned int read_feedId:1;
        unsigned int read_isoCountryCode:1;
        unsigned int read_regions:1;
        unsigned int read_snapshotId:1;
        unsigned int wrote_basemapId:1;
        unsigned int wrote_branchId:1;
        unsigned int wrote_environment:1;
        unsigned int wrote_feedId:1;
        unsigned int wrote_isoCountryCode:1;
        unsigned int wrote_publishTime:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_snapshotId:1;
        unsigned int wrote_vendor:1;
    } _flags;
}

@property (nonatomic) _Bool hasPublishTime;
@property (nonatomic) unsigned long long publishTime;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic, readonly) _Bool hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (nonatomic, readonly) _Bool hasBranchId;
@property (retain, nonatomic) NSString *branchId;
@property (nonatomic, readonly) _Bool hasEnvironment;
@property (retain, nonatomic) NSString *environment;
@property (nonatomic, readonly) _Bool hasSnapshotId;
@property (retain, nonatomic) NSString *snapshotId;
@property (nonatomic) _Bool hasVendor;
@property (nonatomic) int vendor;
@property (retain, nonatomic) NSMutableArray *regions;
@property (nonatomic, readonly) _Bool hasBasemapId;
@property (retain, nonatomic) NSString *basemapId;

+ (_Bool)isValid:(id)arg1;
+ (Class)regionsType;

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
- (void)addRegions:(id)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (unsigned long long)regionsCount;
- (void)_readFeedId;
- (void)_readIsoCountryCode;
- (void)_readBranchId;
- (void)_readEnvironment;
- (void)_readSnapshotId;
- (void)_readRegions;
- (void)_addNoFlagsRegions:(id)arg1;
- (void)_readBasemapId;
- (id)regionsAtIndex:(unsigned long long)arg1;
- (id)vendorAsString:(int)arg1;
- (int)StringAsVendor:(id)arg1;

@end
