/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTileCoordinate, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDGroundMetadataTile : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_buildTables;
    NSMutableArray *_cameraMetadataTables;
    GEOTileCoordinate *_coord;
    NSMutableArray *_photoPositions;
    NSMutableArray *_storefronts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _tileBuildId;
    struct {
        unsigned int has_tileBuildId:1;
        unsigned int read_buildTables:1;
        unsigned int read_cameraMetadataTables:1;
        unsigned int read_coord:1;
        unsigned int read_photoPositions:1;
        unsigned int read_storefronts:1;
        unsigned int wrote_buildTables:1;
        unsigned int wrote_cameraMetadataTables:1;
        unsigned int wrote_coord:1;
        unsigned int wrote_photoPositions:1;
        unsigned int wrote_storefronts:1;
        unsigned int wrote_tileBuildId:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *photoPositions;
@property (retain, nonatomic) NSMutableArray *storefronts;
@property (retain, nonatomic) NSMutableArray *buildTables;
@property (retain, nonatomic) NSMutableArray *cameraMetadataTables;
@property (nonatomic, readonly) _Bool hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (nonatomic) _Bool hasTileBuildId;
@property (nonatomic) unsigned int tileBuildId;

+ (_Bool)isValid:(id)arg1;
+ (Class)photoPositionType;
+ (Class)storefrontType;
+ (Class)buildTableType;
+ (Class)cameraMetadataTableType;

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
- (unsigned long long)buildTablesCount;
- (unsigned long long)photoPositionsCount;
- (unsigned long long)storefrontsCount;
- (id)buildTableAtIndex:(unsigned long long)arg1;
- (unsigned long long)cameraMetadataTablesCount;
- (void)_readPhotoPositions;
- (void)_addNoFlagsPhotoPosition:(id)arg1;
- (void)_readStorefronts;
- (void)_addNoFlagsStorefront:(id)arg1;
- (void)_readBuildTables;
- (void)_addNoFlagsBuildTable:(id)arg1;
- (void)_readCameraMetadataTables;
- (void)_addNoFlagsCameraMetadataTable:(id)arg1;
- (void)_readCoord;
- (void)clearPhotoPositions;
- (id)photoPositionAtIndex:(unsigned long long)arg1;
- (void)addPhotoPosition:(id)arg1;
- (void)clearStorefronts;
- (id)storefrontAtIndex:(unsigned long long)arg1;
- (void)addStorefront:(id)arg1;
- (void)clearBuildTables;
- (void)addBuildTable:(id)arg1;
- (void)clearCameraMetadataTables;
- (id)cameraMetadataTableAtIndex:(unsigned long long)arg1;
- (void)addCameraMetadataTable:(id)arg1;

@end
