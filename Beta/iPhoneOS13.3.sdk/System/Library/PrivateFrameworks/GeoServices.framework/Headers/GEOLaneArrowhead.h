/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOLaneArrowhead : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _angle;
    int _category;
    struct {
        unsigned int has_angle:1;
        unsigned int has_category:1;
    } _flags;
}

@property (nonatomic) _Bool hasAngle;
@property (nonatomic) int angle;
@property (nonatomic) _Bool hasCategory;
@property (nonatomic) int category;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (id)categoryAsString:(int)arg1;
- (int)StringAsCategory:(id)arg1;

@end
