/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDOrientedBoundingBox, NSMutableArray, PBDataReader;

@interface GEOPDStorefrontFace : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_features;
    GEOPDOrientedBoundingBox *_geometry;
    unsigned long long _groupId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_groupId:1;
        unsigned int read_features:1;
        unsigned int read_geometry:1;
        unsigned int wrote_features:1;
        unsigned int wrote_geometry:1;
        unsigned int wrote_groupId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasGeometry;
@property (retain, nonatomic) GEOPDOrientedBoundingBox *geometry;
@property (retain, nonatomic) NSMutableArray *features;
@property (nonatomic) _Bool hasGroupId;
@property (nonatomic) unsigned long long groupId;

+ (_Bool)isValid:(id)arg1;
+ (Class)featureType;

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
- (void)_readGeometry;
- (void)_readFeatures;
- (void)_addNoFlagsFeature:(id)arg1;
- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (id)featureAtIndex:(unsigned long long)arg1;
- (void)addFeature:(id)arg1;

@end
