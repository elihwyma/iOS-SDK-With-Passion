/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookupResults;
    NSMutableArray *_spatialPlaceLookupResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusCode;
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookupResults:1;
        unsigned int read_spatialPlaceLookupResults:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_spatialEventLookupResults:1;
        unsigned int wrote_spatialPlaceLookupResults:1;
        unsigned int wrote_statusCode:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *spatialPlaceLookupResults;
@property (retain, nonatomic) NSMutableArray *spatialEventLookupResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)spatialPlaceLookupResultType;
+ (Class)spatialEventLookupResultType;

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
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (void)_readSpatialPlaceLookupResults;
- (void)_addNoFlagsSpatialPlaceLookupResult:(id)arg1;
- (void)_readSpatialEventLookupResults;
- (void)_addNoFlagsSpatialEventLookupResult:(id)arg1;
- (unsigned long long)spatialPlaceLookupResultsCount;
- (void)clearSpatialPlaceLookupResults;
- (id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1;
- (void)addSpatialPlaceLookupResult:(id)arg1;
- (unsigned long long)spatialEventLookupResultsCount;
- (void)clearSpatialEventLookupResults;
- (id)spatialEventLookupResultAtIndex:(unsigned long long)arg1;
- (void)addSpatialEventLookupResult:(id)arg1;

@end
