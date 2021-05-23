/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBrandProfile, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryClientResolved, GEOPDAutocompleteEntryDirectionIntent, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryOfflineArea, GEOPDAutocompleteEntryQuery, GEOPDParsecRankingFeatures, GEOPDRetainedSearchMetadata, GEOPDServerResultScoreMetadata, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntry : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntryAddress *_address;
    GEOPDAutocompleteEntryBrandProfile *_brandProfile;
    GEOPDAutocompleteEntryBusiness *_business;
    GEOPDAutocompleteEntryCategory *_category;
    GEOPDAutocompleteEntryClientResolved *_clientResolved;
    GEOPDAutocompleteEntryDirectionIntent *_directionIntent;
    GEOPDAutocompleteEntryHighlightLine *_highlightExtra;
    GEOPDAutocompleteEntryHighlightLine *_highlightMain;
    GEOPDAutocompleteEntryOfflineArea *_offlineArea;
    GEOPDParsecRankingFeatures *_parsecRankingFeatures;
    NSString *_queryAcceleratorCompletionString;
    GEOPDAutocompleteEntryQuery *_query;
    GEOPDRetainedSearchMetadata *_retainSearch;
    GEOPDServerResultScoreMetadata *_serverResultScoreMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _autocompleteResultCellType;
    int _sortPriority;
    int _type;
    _Bool _enableQueryAcceleratorAffordance;
    struct {
        unsigned int has_autocompleteResultCellType:1;
        unsigned int has_sortPriority:1;
        unsigned int has_type:1;
        unsigned int has_enableQueryAcceleratorAffordance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_brandProfile:1;
        unsigned int read_business:1;
        unsigned int read_category:1;
        unsigned int read_clientResolved:1;
        unsigned int read_directionIntent:1;
        unsigned int read_highlightExtra:1;
        unsigned int read_highlightMain:1;
        unsigned int read_offlineArea:1;
        unsigned int read_parsecRankingFeatures:1;
        unsigned int read_queryAcceleratorCompletionString:1;
        unsigned int read_query:1;
        unsigned int read_retainSearch:1;
        unsigned int read_serverResultScoreMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_brandProfile:1;
        unsigned int wrote_business:1;
        unsigned int wrote_category:1;
        unsigned int wrote_clientResolved:1;
        unsigned int wrote_directionIntent:1;
        unsigned int wrote_highlightExtra:1;
        unsigned int wrote_highlightMain:1;
        unsigned int wrote_offlineArea:1;
        unsigned int wrote_parsecRankingFeatures:1;
        unsigned int wrote_queryAcceleratorCompletionString:1;
        unsigned int wrote_query:1;
        unsigned int wrote_retainSearch:1;
        unsigned int wrote_serverResultScoreMetadata:1;
        unsigned int wrote_autocompleteResultCellType:1;
        unsigned int wrote_sortPriority:1;
        unsigned int wrote_type:1;
        unsigned int wrote_enableQueryAcceleratorAffordance:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasHighlightMain;
@property (retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightMain;
@property (nonatomic, readonly) _Bool hasHighlightExtra;
@property (retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightExtra;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) GEOPDAutocompleteEntryQuery *query;
@property (nonatomic, readonly) _Bool hasBusiness;
@property (retain, nonatomic) GEOPDAutocompleteEntryBusiness *business;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEOPDAutocompleteEntryAddress *address;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) GEOPDAutocompleteEntryCategory *category;
@property (nonatomic, readonly) _Bool hasBrandProfile;
@property (retain, nonatomic) GEOPDAutocompleteEntryBrandProfile *brandProfile;
@property (nonatomic, readonly) _Bool hasOfflineArea;
@property (retain, nonatomic) GEOPDAutocompleteEntryOfflineArea *offlineArea;
@property (nonatomic, readonly) _Bool hasClientResolved;
@property (retain, nonatomic) GEOPDAutocompleteEntryClientResolved *clientResolved;
@property (nonatomic, readonly) _Bool hasDirectionIntent;
@property (retain, nonatomic) GEOPDAutocompleteEntryDirectionIntent *directionIntent;
@property (nonatomic, readonly) _Bool hasRetainSearch;
@property (retain, nonatomic) GEOPDRetainedSearchMetadata *retainSearch;
@property (nonatomic, readonly) _Bool hasParsecRankingFeatures;
@property (retain, nonatomic) GEOPDParsecRankingFeatures *parsecRankingFeatures;
@property (nonatomic) _Bool hasSortPriority;
@property (nonatomic) int sortPriority;
@property (nonatomic) _Bool hasAutocompleteResultCellType;
@property (nonatomic) int autocompleteResultCellType;
@property (nonatomic, readonly) _Bool hasServerResultScoreMetadata;
@property (retain, nonatomic) GEOPDServerResultScoreMetadata *serverResultScoreMetadata;
@property (nonatomic) _Bool hasEnableQueryAcceleratorAffordance;
@property (nonatomic) _Bool enableQueryAcceleratorAffordance;
@property (nonatomic, readonly) _Bool hasQueryAcceleratorCompletionString;
@property (retain, nonatomic) NSString *queryAcceleratorCompletionString;
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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readQuery;
- (void)_readCategory;
- (void)clearSensitiveFields;
- (void)_readDirectionIntent;
- (void)_readAddress;
- (void)_readBusiness;
- (void)_readHighlightMain;
- (void)_readHighlightExtra;
- (void)_readBrandProfile;
- (void)_readOfflineArea;
- (void)_readClientResolved;
- (void)_readRetainSearch;
- (void)_readParsecRankingFeatures;
- (void)_readServerResultScoreMetadata;
- (void)_readQueryAcceleratorCompletionString;
- (id)autocompleteResultCellTypeAsString:(int)arg1;
- (int)StringAsAutocompleteResultCellType:(id)arg1;

@end
