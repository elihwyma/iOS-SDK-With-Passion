/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAddress, GEOPDIndexQueryNode, GEOPDRecentRouteInfo, GEOPDViewportInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSiriSearchParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    GEOPDIndexQueryNode *_indexFilter;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResultCount;
    int _sortOrder;
    _Bool _isStrictMapRegion;
    _Bool _structuredSearch;
    struct {
        unsigned int has_maxResultCount:1;
        unsigned int has_sortOrder:1;
        unsigned int has_isStrictMapRegion:1;
        unsigned int has_structuredSearch:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_businessCategoryFilters:1;
        unsigned int read_indexFilter:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_searchString:1;
        unsigned int read_searchSubstringDescriptors:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_businessCategoryFilters:1;
        unsigned int wrote_indexFilter:1;
        unsigned int wrote_recentRouteInfo:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_searchSubstringDescriptors:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResultCount:1;
        unsigned int wrote_sortOrder:1;
        unsigned int wrote_isStrictMapRegion:1;
        unsigned int wrote_structuredSearch:1;
    } _flags;
}

@property (nonatomic) _Bool hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) _Bool hasMaxResultCount;
@property (nonatomic) unsigned int maxResultCount;
@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEOAddress *address;
@property (retain, nonatomic) NSMutableArray *businessCategoryFilters;
@property (nonatomic) _Bool hasIsStrictMapRegion;
@property (nonatomic) _Bool isStrictMapRegion;
@property (nonatomic) _Bool hasStructuredSearch;
@property (nonatomic) _Bool structuredSearch;
@property (retain, nonatomic) NSMutableArray *searchSubstringDescriptors;
@property (nonatomic, readonly) _Bool hasIndexFilter;
@property (retain, nonatomic) GEOPDIndexQueryNode *indexFilter;
@property (nonatomic, readonly) _Bool hasRecentRouteInfo;
@property (retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)businessCategoryFilterType;
+ (Class)searchSubstringDescriptorType;

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
- (void)_readAddress;
- (void)_readViewportInfo;
- (void)_readSearchString;
- (id)sortOrderAsString:(int)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)_readIndexFilter;
- (void)_readRecentRouteInfo;
- (void)_readBusinessCategoryFilters;
- (void)_addNoFlagsBusinessCategoryFilter:(id)arg1;
- (void)_readSearchSubstringDescriptors;
- (void)_addNoFlagsSearchSubstringDescriptor:(id)arg1;
- (unsigned long long)businessCategoryFiltersCount;
- (void)clearBusinessCategoryFilters;
- (id)businessCategoryFilterAtIndex:(unsigned long long)arg1;
- (void)addBusinessCategoryFilter:(id)arg1;
- (unsigned long long)searchSubstringDescriptorsCount;
- (void)clearSearchSubstringDescriptors;
- (id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1;
- (void)addSearchSubstringDescriptor:(id)arg1;

@end
