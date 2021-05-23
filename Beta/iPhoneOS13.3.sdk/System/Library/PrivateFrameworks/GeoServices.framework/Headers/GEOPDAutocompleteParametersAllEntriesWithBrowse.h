/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteEntry, GEOPDRetainedSearchMetadata, GEOPDVenueIdentifier, GEOPDViewportInfo, NSData, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedAutocompleteResultCellTypes;
    CDStruct_95bda58d _supportedListTypes;
    NSData *_categorySuggestionEntryMetadata;
    GEOPDAutocompleteEntry *_categorySuggestionEntry;
    GEOPDAutocompleteEntry *_querySuggestionEntry;
    NSString *_query;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxQueryBuilderSuggestions;
    int _maxResults;
    _Bool _highlightDiff;
    _Bool _interleaveCategorySuggestions;
    _Bool _supportClientRankingFeatureMetadata;
    _Bool _supportDirectionIntentSuggestions;
    _Bool _supportRapAffordance;
    _Bool _supportSectionHeader;
    _Bool _supportUnresolvedDirectionIntent;
    struct {
        unsigned int has_maxQueryBuilderSuggestions:1;
        unsigned int has_maxResults:1;
        unsigned int has_highlightDiff:1;
        unsigned int has_interleaveCategorySuggestions:1;
        unsigned int has_supportClientRankingFeatureMetadata:1;
        unsigned int has_supportDirectionIntentSuggestions:1;
        unsigned int has_supportRapAffordance:1;
        unsigned int has_supportSectionHeader:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int read_unknownFields:1;
        unsigned int read_supportedAutocompleteResultCellTypes:1;
        unsigned int read_supportedListTypes:1;
        unsigned int read_categorySuggestionEntryMetadata:1;
        unsigned int read_categorySuggestionEntry:1;
        unsigned int read_querySuggestionEntry:1;
        unsigned int read_query:1;
        unsigned int read_retainedSearch:1;
        unsigned int read_venueIdentifier:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_supportedAutocompleteResultCellTypes:1;
        unsigned int wrote_supportedListTypes:1;
        unsigned int wrote_categorySuggestionEntryMetadata:1;
        unsigned int wrote_categorySuggestionEntry:1;
        unsigned int wrote_querySuggestionEntry:1;
        unsigned int wrote_query:1;
        unsigned int wrote_retainedSearch:1;
        unsigned int wrote_venueIdentifier:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxQueryBuilderSuggestions:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_highlightDiff:1;
        unsigned int wrote_interleaveCategorySuggestions:1;
        unsigned int wrote_supportClientRankingFeatureMetadata:1;
        unsigned int wrote_supportDirectionIntentSuggestions:1;
        unsigned int wrote_supportRapAffordance:1;
        unsigned int wrote_supportSectionHeader:1;
        unsigned int wrote_supportUnresolvedDirectionIntent:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic) _Bool hasHighlightDiff;
@property (nonatomic) _Bool highlightDiff;
@property (nonatomic, readonly) _Bool hasCategorySuggestionEntryMetadata;
@property (retain, nonatomic) NSData *categorySuggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasCategorySuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property (nonatomic) _Bool hasInterleaveCategorySuggestions;
@property (nonatomic) _Bool interleaveCategorySuggestions;
@property (nonatomic, readonly) _Bool hasVenueIdentifier;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic) _Bool hasSupportDirectionIntentSuggestions;
@property (nonatomic) _Bool supportDirectionIntentSuggestions;
@property (nonatomic, readonly) _Bool hasRetainedSearch;
@property (retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic) _Bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic) _Bool supportUnresolvedDirectionIntent;
@property (nonatomic, readonly) unsigned long long supportedListTypesCount;
@property (nonatomic, readonly) int *supportedListTypes;
@property (nonatomic, readonly) _Bool hasQuerySuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *querySuggestionEntry;
@property (nonatomic) _Bool hasSupportClientRankingFeatureMetadata;
@property (nonatomic) _Bool supportClientRankingFeatureMetadata;
@property (nonatomic) _Bool hasMaxQueryBuilderSuggestions;
@property (nonatomic) int maxQueryBuilderSuggestions;
@property (nonatomic) _Bool hasSupportSectionHeader;
@property (nonatomic) _Bool supportSectionHeader;
@property (nonatomic, readonly) unsigned long long supportedAutocompleteResultCellTypesCount;
@property (nonatomic, readonly) int *supportedAutocompleteResultCellTypes;
@property (nonatomic) _Bool hasSupportRapAffordance;
@property (nonatomic) _Bool supportRapAffordance;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readQuery;
- (void)clearSensitiveFields;
- (void)_readViewportInfo;
- (void)_readVenueIdentifier;
- (void)_readSupportedAutocompleteResultCellTypes;
- (void)_addNoFlagsSupportedAutocompleteResultCellType:(int)arg1;
- (void)clearSupportedAutocompleteResultCellTypes;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedAutocompleteResultCellType:(int)arg1;
- (void)setSupportedAutocompleteResultCellTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;
- (void)_readCategorySuggestionEntryMetadata;
- (void)_readCategorySuggestionEntry;
- (void)_readRetainedSearch;
- (void)_readSupportedListTypes;
- (void)_addNoFlagsSupportedListType:(int)arg1;
- (void)_readQuerySuggestionEntry;
- (void)clearSupportedListTypes;
- (int)supportedListTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedListType:(int)arg1;
- (void)setSupportedListTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedListTypesAsString:(int)arg1;
- (int)StringAsSupportedListTypes:(id)arg1;

@end
