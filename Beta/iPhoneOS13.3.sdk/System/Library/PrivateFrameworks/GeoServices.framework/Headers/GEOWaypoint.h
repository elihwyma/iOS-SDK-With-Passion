/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, GEOPlaceSearchRequest, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOWaypoint : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entryPoints;
    GEOLocation *_location;
    GEOPlaceSearchRequest *_placeSearchRequest;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entryPoints:1;
        unsigned int read_location:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entryPoints:1;
        unsigned int wrote_location:1;
        unsigned int wrote_placeSearchRequest:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSMutableArray *entryPoints;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)entryPointType;

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
- (void)_readPlaceSearchRequest;
- (void)clearSensitiveFields;
- (void)_readLocation;
- (void)_readEntryPoints;
- (void)_addNoFlagsEntryPoint:(id)arg1;
- (unsigned long long)entryPointsCount;
- (void)clearEntryPoints;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (void)addEntryPoint:(id)arg1;

@end
