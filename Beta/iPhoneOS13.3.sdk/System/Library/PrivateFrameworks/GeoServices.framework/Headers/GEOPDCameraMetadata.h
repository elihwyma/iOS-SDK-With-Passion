/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDLensProjection, GEOPDOrientedPosition, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDCameraMetadata : PBCodable

{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _textureIds;
    GEOPDLensProjection *_lensProjection;
    GEOPDOrientedPosition *_position;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _cameraNumber;
    int _imageHeight;
    int _imageWidth;
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_imageHeight:1;
        unsigned int has_imageWidth:1;
        unsigned int read_textureIds:1;
        unsigned int read_lensProjection:1;
        unsigned int read_position:1;
        unsigned int wrote_textureIds:1;
        unsigned int wrote_lensProjection:1;
        unsigned int wrote_position:1;
        unsigned int wrote_cameraNumber:1;
        unsigned int wrote_imageHeight:1;
        unsigned int wrote_imageWidth:1;
    } _flags;
}

@property (nonatomic) _Bool hasCameraNumber;
@property (nonatomic) int cameraNumber;
@property (nonatomic) _Bool hasImageWidth;
@property (nonatomic) int imageWidth;
@property (nonatomic) _Bool hasImageHeight;
@property (nonatomic) int imageHeight;
@property (nonatomic, readonly) _Bool hasLensProjection;
@property (retain, nonatomic) GEOPDLensProjection *lensProjection;
@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic, readonly) unsigned long long textureIdsCount;
@property (nonatomic, readonly) unsigned int *textureIds;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readPosition;
- (void)_readLensProjection;
- (void)_readTextureIds;
- (void)_addNoFlagsTextureId:(unsigned int)arg1;
- (void)clearTextureIds;
- (unsigned int)textureIdAtIndex:(unsigned long long)arg1;
- (void)addTextureId:(unsigned int)arg1;
- (void)setTextureIds:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
