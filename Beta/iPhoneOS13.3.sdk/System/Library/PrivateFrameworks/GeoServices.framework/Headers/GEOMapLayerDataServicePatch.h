/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServicePatch : PBCodable

{
    PBDataReader *_reader;
    GEOMapLayerDataServiceLayerIndex *_index;
    GEOMapLayerDataServiceLayer *_layer;
    GEOMapLayerDataServiceVersion *_sourceVersion;
    GEOMapLayerDataServiceVersion *_targetVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    CDStruct_2c11db96 _flags;
}

@property (nonatomic, readonly) _Bool hasLayer;
@property (retain, nonatomic) GEOMapLayerDataServiceLayer *layer;
@property (nonatomic, readonly) _Bool hasSourceVersion;
@property (retain, nonatomic) GEOMapLayerDataServiceVersion *sourceVersion;
@property (nonatomic, readonly) _Bool hasTargetVersion;
@property (retain, nonatomic) GEOMapLayerDataServiceVersion *targetVersion;
@property (nonatomic, readonly) _Bool hasIndex;
@property (retain, nonatomic) GEOMapLayerDataServiceLayerIndex *index;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readLayer;
- (void)_readIndex;
- (void)_readSourceVersion;
- (void)_readTargetVersion;

@end
