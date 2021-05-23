/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineSuggestedRegionsParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_layers;
    NSMutableArray *_locations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_layers:1;
        unsigned int read_locations:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_layers:1;
        unsigned int wrote_locations:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *layers;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)layerType;
+ (_Bool)isValid:(id)arg1;
+ (Class)locationType;

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
- (void)_readLayers;
- (void)_addNoFlagsLayer:(id)arg1;
- (unsigned long long)layersCount;
- (void)clearLayers;
- (id)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(id)arg1;
- (void)addLocation:(id)arg1;
- (unsigned long long)locationsCount;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)arg1;
- (void)_readLocations;
- (void)_addNoFlagsLocation:(id)arg1;

@end
