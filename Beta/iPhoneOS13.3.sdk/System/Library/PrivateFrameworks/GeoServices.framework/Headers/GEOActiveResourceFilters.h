/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct GEOActiveResourceFilter *_filters;
    unsigned long long _filtersCount;
    unsigned long long _filtersSpace;
}

@property (nonatomic, readonly) unsigned long long filtersCount;
@property (nonatomic, readonly) struct GEOActiveResourceFilter *filters;
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
- (void)clearFilters;
- (struct GEOActiveResourceFilter)filterAtIndex:(unsigned long long)arg1;
- (void)addFilter:(struct GEOActiveResourceFilter)arg1;
- (void)setFilters:(struct GEOActiveResourceFilter *)arg1 count:(unsigned long long)arg2;

@end
