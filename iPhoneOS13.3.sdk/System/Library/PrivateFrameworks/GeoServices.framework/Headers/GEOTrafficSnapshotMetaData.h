//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficSnapshotMetaData : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_basemapId;
    NSString *_branchId;
    NSString *_environment;
    NSString *_feedId;
    NSString *_isoCountryCode;
    NSUInteger _publishTime;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
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

+ (BOOL)isValid:(id)arg1;
+ (Class)regionsType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *basemapId;
@property(readonly, nonatomic) BOOL hasBasemapId;
- (void)_readBasemapId;
- (id)regionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)regionsCount;
- (void)_addNoFlagsRegions:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)clearRegions;
@property(retain, nonatomic) NSMutableArray *regions;
- (void)_readRegions;
- (int)StringAsVendor:(id)arg1;
- (id)vendorAsString:(int)arg1;
@property(nonatomic) BOOL hasVendor;
@property(nonatomic) int vendor;
@property(retain, nonatomic) NSString *snapshotId;
@property(readonly, nonatomic) BOOL hasSnapshotId;
- (void)_readSnapshotId;
@property(retain, nonatomic) NSString *environment;
@property(readonly, nonatomic) BOOL hasEnvironment;
- (void)_readEnvironment;
@property(retain, nonatomic) NSString *branchId;
@property(readonly, nonatomic) BOOL hasBranchId;
- (void)_readBranchId;
@property(retain, nonatomic) NSString *isoCountryCode;
@property(readonly, nonatomic) BOOL hasIsoCountryCode;
- (void)_readIsoCountryCode;
@property(retain, nonatomic) NSString *feedId;
@property(readonly, nonatomic) BOOL hasFeedId;
- (void)_readFeedId;
@property(nonatomic) BOOL hasPublishTime;
@property(nonatomic) NSUInteger publishTime;
- (id)initWithData:(id)arg1;
- (id)init;

@end

