/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDNearestTransitParameters, GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDNearestTransitParameters *_nearestTransitParameters;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    int _searchType;
    int _sortOrder;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int has_sortOrder:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nearestTransitParameters:1;
        unsigned int read_searchLocation:1;
        unsigned int read_searchString:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_nearestTransitParameters:1;
        unsigned int wrote_searchLocation:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_searchType:1;
        unsigned int wrote_sortOrder:1;
    } _flags;
}

@property (nonatomic) _Bool hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic, readonly) _Bool hasSearchLocation;
@property (retain, nonatomic) GEOLatLng *searchLocation;
@property (nonatomic) _Bool hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic, readonly) _Bool hasNearestTransitParameters;
@property (retain, nonatomic) GEOPDNearestTransitParameters *nearestTransitParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readViewportInfo;
- (void)_readSearchString;
- (void)_readSearchLocation;
- (void)_readNearestTransitParameters;
- (id)sortOrderAsString:(int)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
- (int)StringAsSearchType:(id)arg1;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;

@end
