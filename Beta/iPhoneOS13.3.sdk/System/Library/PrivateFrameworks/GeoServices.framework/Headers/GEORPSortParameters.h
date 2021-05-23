/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEORPSortParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _sortBy;
    int _sortDirection;
    struct {
        unsigned int has_sortBy:1;
        unsigned int has_sortDirection:1;
    } _flags;
}

@property (nonatomic) _Bool hasSortBy;
@property (nonatomic) int sortBy;
@property (nonatomic) _Bool hasSortDirection;
@property (nonatomic) int sortDirection;
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
- (id)sortByAsString:(int)arg1;
- (int)StringAsSortBy:(id)arg1;
- (id)sortDirectionAsString:(int)arg1;
- (int)StringAsSortDirection:(id)arg1;

@end
