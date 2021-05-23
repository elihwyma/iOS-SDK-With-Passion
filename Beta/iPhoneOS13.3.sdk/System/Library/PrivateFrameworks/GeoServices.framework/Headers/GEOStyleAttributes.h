/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOStyleAttributes : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    unsigned long long _customIconId;
    struct {
        unsigned int has_customIconId:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic) _Bool hasCustomIconId;
@property (nonatomic) unsigned long long customIconId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (_Bool)isValid:(id)arg1;
+ (id)attributesForTransitLine:(id)arg1;
+ (id)attributesForTransitSystem:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)initWithGEOFeatureStyleAttributes:(id)arg1;

@end
