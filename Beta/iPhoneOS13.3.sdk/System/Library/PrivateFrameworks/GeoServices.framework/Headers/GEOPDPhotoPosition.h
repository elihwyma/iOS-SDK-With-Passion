/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDGeographicCoordinate, GEOPDGroundDataBuild, GEOPDOrientedPosition, GEOPDOrientedTilePosition, GEOPDRigMetrics, GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOPDPhotoPosition : PBCodable

{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _cameraMetadataIndexs;
    GEOPDGroundDataBuild *_build;
    NSMutableArray *_cameraMetadatas;
    unsigned long long _imageryTimestamp;
    unsigned long long _imdataId;
    GEOTileCoordinate *_parentTile;
    GEOPDGeographicCoordinate *_positionGeo;
    GEOPDOrientedPosition *_position;
    GEOPDRigMetrics *_rigMetrics;
    GEOPDOrientedTilePosition *_tilePosition;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _buildTableIndex;
    int _revision;
    struct {
        unsigned int has_imageryTimestamp:1;
        unsigned int has_imdataId:1;
        unsigned int has_buildTableIndex:1;
        unsigned int has_revision:1;
        unsigned int read_cameraMetadataIndexs:1;
        unsigned int read_build:1;
        unsigned int read_cameraMetadatas:1;
        unsigned int read_parentTile:1;
        unsigned int read_positionGeo:1;
        unsigned int read_position:1;
        unsigned int read_rigMetrics:1;
        unsigned int read_tilePosition:1;
        unsigned int wrote_cameraMetadataIndexs:1;
        unsigned int wrote_build:1;
        unsigned int wrote_cameraMetadatas:1;
        unsigned int wrote_imageryTimestamp:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_parentTile:1;
        unsigned int wrote_positionGeo:1;
        unsigned int wrote_position:1;
        unsigned int wrote_rigMetrics:1;
        unsigned int wrote_tilePosition:1;
        unsigned int wrote_buildTableIndex:1;
        unsigned int wrote_revision:1;
    } _flags;
}

@property (nonatomic) _Bool hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (retain, nonatomic) NSMutableArray *cameraMetadatas;
@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic) _Bool hasRevision;
@property (nonatomic) int revision;
@property (nonatomic) _Bool hasImageryTimestamp;
@property (nonatomic) unsigned long long imageryTimestamp;
@property (nonatomic, readonly) _Bool hasPositionGeo;
@property (retain, nonatomic) GEOPDGeographicCoordinate *positionGeo;
@property (nonatomic) _Bool hasBuildTableIndex;
@property (nonatomic) unsigned int buildTableIndex;
@property (nonatomic, readonly) _Bool hasBuild;
@property (retain, nonatomic) GEOPDGroundDataBuild *build;
@property (nonatomic, readonly) unsigned long long cameraMetadataIndexsCount;
@property (nonatomic, readonly) unsigned int *cameraMetadataIndexs;
@property (nonatomic, readonly) _Bool hasTilePosition;
@property (retain, nonatomic) GEOPDOrientedTilePosition *tilePosition;
@property (nonatomic, readonly) _Bool hasParentTile;
@property (retain, nonatomic) GEOTileCoordinate *parentTile;
@property (nonatomic, readonly) _Bool hasRigMetrics;
@property (retain, nonatomic) GEOPDRigMetrics *rigMetrics;

+ (_Bool)isValid:(id)arg1;
+ (Class)cameraMetadataType;

- (id)init;
- (void)dealloc;
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
- (unsigned long long)cameraMetadatasCount;
- (void)_readPosition;
- (void)_readCameraMetadatas;
- (void)_addNoFlagsCameraMetadata:(id)arg1;
- (void)_readPositionGeo;
- (void)_readBuild;
- (void)_readCameraMetadataIndexs;
- (void)_addNoFlagsCameraMetadataIndex:(unsigned int)arg1;
- (void)_readTilePosition;
- (void)_readParentTile;
- (void)_readRigMetrics;
- (void)clearCameraMetadatas;
- (id)cameraMetadataAtIndex:(unsigned long long)arg1;
- (void)addCameraMetadata:(id)arg1;
- (void)clearCameraMetadataIndexs;
- (unsigned int)cameraMetadataIndexAtIndex:(unsigned long long)arg1;
- (void)addCameraMetadataIndex:(unsigned int)arg1;
- (void)setCameraMetadataIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
