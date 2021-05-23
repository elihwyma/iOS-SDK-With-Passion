/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficRegion : PBCodable

{
    PBDataReader *_reader;
    NSString *_area;
    NSMutableArray *_boundingBoxs;
    NSMutableArray *_geohashes;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
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

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *geohashes;
@property (nonatomic, readonly) _Bool hasArea;
@property (retain, nonatomic) NSString *area;
@property (retain, nonatomic) NSMutableArray *boundingBoxs;

+ (_Bool)isValid:(id)arg1;
+ (Class)geohashesType;
+ (Class)boundingBoxType;

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
- (void)_readName;
- (void)_readArea;
- (void)_readGeohashes;
- (void)_addNoFlagsGeohashes:(id)arg1;
- (void)_readBoundingBoxs;
- (void)_addNoFlagsBoundingBox:(id)arg1;
- (unsigned long long)geohashesCount;
- (void)clearGeohashes;
- (id)geohashesAtIndex:(unsigned long long)arg1;
- (void)addGeohashes:(id)arg1;
- (unsigned long long)boundingBoxsCount;
- (void)clearBoundingBoxs;
- (id)boundingBoxAtIndex:(unsigned long long)arg1;
- (void)addBoundingBox:(id)arg1;

@end
