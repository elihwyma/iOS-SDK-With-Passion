/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflinePolygonQuadNodesParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_existingDatas;
    NSMutableArray *_layers;
    NSMutableArray *_regions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_existingDatas:1;
        unsigned int read_layers:1;
        unsigned int read_regions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_existingDatas:1;
        unsigned int wrote_layers:1;
        unsigned int wrote_regions:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *layers;
@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSMutableArray *existingDatas;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)layerType;
+ (_Bool)isValid:(id)arg1;
+ (Class)regionType;
+ (Class)existingDataType;

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
- (void)addRegion:(id)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (unsigned long long)regionsCount;
- (id)regionAtIndex:(unsigned long long)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readLayers;
- (void)_addNoFlagsLayer:(id)arg1;
- (unsigned long long)layersCount;
- (void)clearLayers;
- (id)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(id)arg1;
- (void)_readRegions;
- (void)_addNoFlagsRegion:(id)arg1;
- (void)_readExistingDatas;
- (void)_addNoFlagsExistingData:(id)arg1;
- (unsigned long long)existingDatasCount;
- (void)clearExistingDatas;
- (id)existingDataAtIndex:(unsigned long long)arg1;
- (void)addExistingData:(id)arg1;

@end
