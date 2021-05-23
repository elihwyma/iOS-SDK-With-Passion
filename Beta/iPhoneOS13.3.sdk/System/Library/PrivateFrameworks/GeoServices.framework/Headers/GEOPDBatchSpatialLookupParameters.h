/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookups;
    NSMutableArray *_spatialPlaceLookups;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookups:1;
        unsigned int read_spatialPlaceLookups:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_spatialEventLookups:1;
        unsigned int wrote_spatialPlaceLookups:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *spatialPlaceLookups;
@property (retain, nonatomic) NSMutableArray *spatialEventLookups;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)spatialPlaceLookupType;
+ (Class)spatialEventLookupType;

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
- (void)_readSpatialPlaceLookups;
- (void)_addNoFlagsSpatialPlaceLookup:(id)arg1;
- (void)_readSpatialEventLookups;
- (void)_addNoFlagsSpatialEventLookup:(id)arg1;
- (unsigned long long)spatialPlaceLookupsCount;
- (void)clearSpatialPlaceLookups;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)arg1;
- (void)addSpatialPlaceLookup:(id)arg1;
- (unsigned long long)spatialEventLookupsCount;
- (void)clearSpatialEventLookups;
- (id)spatialEventLookupAtIndex:(unsigned long long)arg1;
- (void)addSpatialEventLookup:(id)arg1;

@end
