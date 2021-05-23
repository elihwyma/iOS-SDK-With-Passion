/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTipFilter : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
}

@property (nonatomic, readonly) unsigned long long photoSizeFiltersCount;
@property (nonatomic, readonly) struct GEOPDPhotoSizeFilterValue *photoSizeFilters;
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
- (void)clearPhotoSizeFilters;
- (struct GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue)arg1;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue *)arg1 count:(unsigned long long)arg2;

@end
