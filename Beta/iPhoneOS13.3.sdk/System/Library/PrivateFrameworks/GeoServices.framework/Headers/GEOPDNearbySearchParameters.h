/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearbySearchParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _maxResults;
    int _sortOrder;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_sortOrder:1;
    } _flags;
}

@property (nonatomic) _Bool hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
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
- (id)sortOrderAsString:(int)arg1;
- (int)StringAsSortOrder:(id)arg1;

@end
