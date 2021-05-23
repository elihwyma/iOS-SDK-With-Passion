/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPhoto, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIcon : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    int _iconType;
    struct {
        unsigned int has_iconType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) GEOPDPhoto *image;
@property (nonatomic) _Bool hasIconType;
@property (nonatomic) int iconType;
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
- (id)iconTypeAsString:(int)arg1;
- (int)StringAsIconType:(id)arg1;

@end
