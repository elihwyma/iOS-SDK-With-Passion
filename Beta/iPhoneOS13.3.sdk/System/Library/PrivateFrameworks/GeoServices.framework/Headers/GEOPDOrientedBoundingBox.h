/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDOrientedPosition;

__attribute__((visibility("hidden")))
@interface GEOPDOrientedBoundingBox : PBCodable

{
    double _depth;
    double _height;
    GEOPDOrientedPosition *_position;
    double _width;
    struct {
        unsigned int has_depth:1;
        unsigned int has_height:1;
        unsigned int has_width:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic) _Bool hasWidth;
@property (nonatomic) double width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) double height;
@property (nonatomic) _Bool hasDepth;
@property (nonatomic) double depth;

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

@end
