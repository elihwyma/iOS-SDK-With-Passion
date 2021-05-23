/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOSnapScorePoint, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSnapScoreMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_destinationAccessPoints;
    NSMutableArray *_destinationPoints;
    NSMutableArray *_originAccessPoints;
    GEOSnapScorePoint *_originPoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_destinationAccessPoints:1;
        unsigned int read_destinationPoints:1;
        unsigned int read_originAccessPoints:1;
        unsigned int read_originPoint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_destinationAccessPoints:1;
        unsigned int wrote_destinationPoints:1;
        unsigned int wrote_originAccessPoints:1;
        unsigned int wrote_originPoint:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOriginPoint;
@property (retain, nonatomic) GEOSnapScorePoint *originPoint;
@property (retain, nonatomic) NSMutableArray *originAccessPoints;
@property (retain, nonatomic) NSMutableArray *destinationPoints;
@property (retain, nonatomic) NSMutableArray *destinationAccessPoints;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)originAccessPointType;
+ (Class)destinationPointType;
+ (Class)destinationAccessPointType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readOriginPoint;
- (void)_readOriginAccessPoints;
- (void)_addNoFlagsOriginAccessPoint:(id)arg1;
- (void)_readDestinationPoints;
- (void)_addNoFlagsDestinationPoint:(id)arg1;
- (void)_readDestinationAccessPoints;
- (void)_addNoFlagsDestinationAccessPoint:(id)arg1;
- (unsigned long long)originAccessPointsCount;
- (void)clearOriginAccessPoints;
- (id)originAccessPointAtIndex:(unsigned long long)arg1;
- (void)addOriginAccessPoint:(id)arg1;
- (unsigned long long)destinationPointsCount;
- (void)clearDestinationPoints;
- (id)destinationPointAtIndex:(unsigned long long)arg1;
- (void)addDestinationPoint:(id)arg1;
- (unsigned long long)destinationAccessPointsCount;
- (void)clearDestinationAccessPoints;
- (id)destinationAccessPointAtIndex:(unsigned long long)arg1;
- (void)addDestinationAccessPoint:(id)arg1;

@end
