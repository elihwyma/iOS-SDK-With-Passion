/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOStyleAttributes, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIcon : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _cartoId;
    unsigned int _transitTypeEnumValue;
    struct {
        unsigned int has_cartoId:1;
        unsigned int has_transitTypeEnumValue:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic) _Bool hasCartoId;
@property (nonatomic) unsigned int cartoId;
@property (nonatomic) _Bool hasTransitTypeEnumValue;
@property (nonatomic) unsigned int transitTypeEnumValue;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
