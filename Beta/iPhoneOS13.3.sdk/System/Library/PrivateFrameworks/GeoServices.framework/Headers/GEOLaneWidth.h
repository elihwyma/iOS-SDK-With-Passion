/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOLaneWidth : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _offset;
    unsigned int _width;
    struct {
        unsigned int has_offset:1;
        unsigned int has_width:1;
    } _flags;
}

@property (nonatomic) _Bool hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) _Bool hasOffset;
@property (nonatomic) unsigned int offset;
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

@end
