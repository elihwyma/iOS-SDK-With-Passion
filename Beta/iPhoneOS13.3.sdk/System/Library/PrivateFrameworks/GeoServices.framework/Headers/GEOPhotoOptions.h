/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _photoSizes;
    int _maxPhotos;
    int _photoType;
    struct {
        unsigned int has_photoType:1;
    } _flags;
}

@property (nonatomic) int maxPhotos;
@property (nonatomic) _Bool hasPhotoType;
@property (nonatomic) int photoType;
@property (nonatomic, readonly) unsigned long long photoSizesCount;
@property (nonatomic, readonly) int *photoSizes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)photoTypeAsString:(int)arg1;
- (int)StringAsPhotoType:(id)arg1;
- (void)clearPhotoSizes;
- (int)photoSizeAtIndex:(unsigned long long)arg1;
- (void)addPhotoSize:(int)arg1;
- (void)setPhotoSizes:(int *)arg1 count:(unsigned long long)arg2;
- (id)photoSizesAsString:(int)arg1;
- (int)StringAsPhotoSizes:(id)arg1;

@end
