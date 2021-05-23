/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteEntry, GEOPDRecentRouteInfo, GEOPDRetainedSearchMetadata, GEOPDSearchFilter, GEOPDSearchLocationParameters, GEOPDSearchStructureIntentRequestType, GEOPDViewportInfo, NSData, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDSearchFilter *_searchFilter;
    GEOPDSearchLocationParameters *_searchLocationParameters;
    NSString *_searchString;
    GEOPDSearchStructureIntentRequestType *_searchStructureIntentType;
    NSData *_suggestionEntryMetadata;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    int _searchType;
    int _sortOrder;
    _Bool _supportDirectionIntentSearch;
    _Bool _supportDymSuggestion;
    _Bool _supportSearchResultSection;
    _Bool _supportUnresolvedDirectionIntent;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int has_sortOrder:1;
        unsigned int has_supportDirectionIntentSearch:1;
        unsigned int has_supportDymSuggestion:1;
        unsigned int has_supportSearchResultSection:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int read_unknownFields:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_retainedSearch:1;
        unsigned int read_searchFilter:1;
        unsigned int read_searchLocationParameters:1;
        unsigned int read_searchString:1;
        unsigned int read_searchStructureIntentType:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionEntry:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_recentRouteInfo:1;
        unsigned int wrote_retainedSearch:1;
        unsigned int wrote_searchFilter:1;
        unsigned int wrote_searchLocationParameters:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_searchStructureIntentType:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_suggestionEntry:1;
        unsigned int wrote_suggestionMetadata:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_searchType:1;
        unsigned int wrote_sortOrder:1;
        unsigned int wrote_supportDirectionIntentSearch:1;
        unsigned int wrote_supportDymSuggestion:1;
        unsigned int wrote_supportSearchResultSection:1;
        unsigned int wrote_supportUnresolvedDirectionIntent:1;
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
@property (nonatomic, readonly) _Bool hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasSuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic) _Bool hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic, readonly) _Bool hasSearchStructureIntentType;
@property (retain, nonatomic) GEOPDSearchStructureIntentRequestType *searchStructureIntentType;
@property (nonatomic, readonly) _Bool hasSearchLocationParameters;
@property (retain, nonatomic) GEOPDSearchLocationParameters *searchLocationParameters;
@property (nonatomic, readonly) _Bool hasRecentRouteInfo;
@property (retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic, readonly) _Bool hasSearchFilter;
@property (retain, nonatomic) GEOPDSearchFilter *searchFilter;
@property (nonatomic) _Bool hasSupportDymSuggestion;
@property (nonatomic) _Bool supportDymSuggestion;
@property (nonatomic) _Bool hasSupportDirectionIntentSearch;
@property (nonatomic) _Bool supportDirectionIntentSearch;
@property (nonatomic, readonly) _Bool hasRetainedSearch;
@property (retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic) _Bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic) _Bool supportUnresolvedDirectionIntent;
@property (nonatomic) _Bool hasSupportSearchResultSection;
@property (nonatomic) _Bool supportSearchResultSection;
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
- (void)clearSensitiveFields;
- (void)_readViewportInfo;
- (void)_readSearchString;
- (id)sortOrderAsString:(int)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
- (int)StringAsSearchType:(id)arg1;
- (void)_readSuggestionMetadata;
- (void)_readSuggestionEntryMetadata;
- (void)_readSuggestionEntry;
- (void)_readRecentRouteInfo;
- (void)_readRetainedSearch;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (void)_readSearchStructureIntentType;
- (void)_readSearchLocationParameters;
- (void)_readSearchFilter;

@end
