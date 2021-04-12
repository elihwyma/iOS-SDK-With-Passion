//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_area;
    NSMutableArray *_boundingBoxs;
    NSMutableArray *_geohashes;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_area:1;
        unsigned int read_boundingBoxs:1;
        unsigned int read_geohashes:1;
        unsigned int read_name:1;
        unsigned int wrote_area:1;
        unsigned int wrote_boundingBoxs:1;
        unsigned int wrote_geohashes:1;
        unsigned int wrote_name:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)boundingBoxType;
+ (Class)geohashesType;
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
- (id)boundingBoxAtIndex:(NSUInteger)arg1;
- (NSUInteger)boundingBoxsCount;
- (void)_addNoFlagsBoundingBox:(id)arg1;
- (void)addBoundingBox:(id)arg1;
- (void)clearBoundingBoxs;
@property(retain, nonatomic) NSMutableArray *boundingBoxs;
- (void)_readBoundingBoxs;
@property(retain, nonatomic) NSString *area;
@property(readonly, nonatomic) BOOL hasArea;
- (void)_readArea;
- (id)geohashesAtIndex:(NSUInteger)arg1;
- (NSUInteger)geohashesCount;
- (void)_addNoFlagsGeohashes:(id)arg1;
- (void)addGeohashes:(id)arg1;
- (void)clearGeohashes;
@property(retain, nonatomic) NSMutableArray *geohashes;
- (void)_readGeohashes;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

