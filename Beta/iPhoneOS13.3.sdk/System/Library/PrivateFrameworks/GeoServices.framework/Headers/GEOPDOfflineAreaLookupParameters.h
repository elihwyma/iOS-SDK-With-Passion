/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineAreaLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocation *_extendedLocation;
    unsigned long long _featureId;
    NSMutableArray *_layers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_extendedLocation:1;
        unsigned int read_layers:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_extendedLocation:1;
        unsigned int wrote_featureId:1;
        unsigned int wrote_layers:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic, readonly) _Bool hasExtendedLocation;
@property (retain, nonatomic) GEOLocation *extendedLocation;
@property (retain, nonatomic) NSMutableArray *layers;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)layerType;
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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readExtendedLocation;
- (void)_readLayers;
- (void)_addNoFlagsLayer:(id)arg1;
- (void)clearSensitiveFields;
- (unsigned long long)layersCount;
- (void)clearLayers;
- (id)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(id)arg1;

@end
