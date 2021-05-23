/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPFeatureHandle : PBCodable

{
    struct GEORPFeatureHandleStyleAttribute *_styleAttributes;
    unsigned long long _styleAttributesCount;
    unsigned long long _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct {
        unsigned int has_featureIndex:1;
        unsigned int has_featureTileX:1;
        unsigned int has_featureTileY:1;
        unsigned int has_featureTileZ:1;
        unsigned int has_identifier:1;
        unsigned int has_style:1;
        unsigned int has_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureIndex;
@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) _Bool hasFeatureTileX;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) _Bool hasFeatureTileY;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) _Bool hasFeatureTileZ;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) _Bool hasStyle;
@property (nonatomic) int style;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) unsigned long long styleAttributesCount;
@property (nonatomic, readonly) struct GEORPFeatureHandleStyleAttribute *styleAttributes;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)styleAsString:(int)arg1;
- (int)StringAsStyle:(id)arg1;
- (void)clearStyleAttributes;
- (struct GEORPFeatureHandleStyleAttribute)styleAttributeAtIndex:(unsigned long long)arg1;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute)arg1;
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute *)arg1 count:(unsigned long long)arg2;

@end
