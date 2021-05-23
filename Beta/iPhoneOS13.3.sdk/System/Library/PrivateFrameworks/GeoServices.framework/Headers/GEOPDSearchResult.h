/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, GEOPDDirectionIntent, GEOPDRelatedSearchSuggestion, GEOPDResolvedItem, GEOPDSearchClientBehavior, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_clientResolvedResult;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent *_directionIntent;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_displayHeaderSubstitutes;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    NSString *_resultDisplayHeader;
    NSMutableArray *_retainSearchs;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchResultSections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _dymSuggestionVisibleTime;
    unsigned int _retainSearchTime;
    int _searchResultType;
    _Bool _enablePartialClientization;
    _Bool _isChainResultSet;
    _Bool _showDymSuggestionCloseButton;
    struct {
        unsigned int has_dymSuggestionVisibleTime:1;
        unsigned int has_retainSearchTime:1;
        unsigned int has_searchResultType:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int has_isChainResultSet:1;
        unsigned int has_showDymSuggestionCloseButton:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientResolvedResult:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_directionIntent:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayHeaderSubstitutes:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_resultDisplayHeader:1;
        unsigned int read_retainSearchs:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int read_searchResultSections:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientResolvedResult:1;
        unsigned int wrote_defaultRelatedSearchSuggestion:1;
        unsigned int wrote_directionIntent:1;
        unsigned int wrote_disambiguationLabels:1;
        unsigned int wrote_displayHeaderSubstitutes:1;
        unsigned int wrote_displayMapRegion:1;
        unsigned int wrote_relatedSearchSuggestions:1;
        unsigned int wrote_resultDetourInfos:1;
        unsigned int wrote_resultDisplayHeader:1;
        unsigned int wrote_retainSearchs:1;
        unsigned int wrote_searchClientBehavior:1;
        unsigned int wrote_searchResultSections:1;
        unsigned int wrote_dymSuggestionVisibleTime:1;
        unsigned int wrote_retainSearchTime:1;
        unsigned int wrote_searchResultType:1;
        unsigned int wrote_enablePartialClientization:1;
        unsigned int wrote_isChainResultSet:1;
        unsigned int wrote_showDymSuggestionCloseButton:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (nonatomic) _Bool hasIsChainResultSet;
@property (nonatomic) _Bool isChainResultSet;
@property (retain, nonatomic) NSMutableArray *relatedSearchSuggestions;
@property (nonatomic) _Bool hasSearchResultType;
@property (nonatomic) int searchResultType;
@property (nonatomic, readonly) _Bool hasResultDisplayHeader;
@property (retain, nonatomic) NSString *resultDisplayHeader;
@property (nonatomic, readonly) _Bool hasDefaultRelatedSearchSuggestion;
@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (nonatomic, readonly) _Bool hasSearchClientBehavior;
@property (retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior;
@property (retain, nonatomic) NSMutableArray *resultDetourInfos;
@property (nonatomic, readonly) _Bool hasDirectionIntent;
@property (retain, nonatomic) GEOPDDirectionIntent *directionIntent;
@property (nonatomic, readonly) _Bool hasClientResolvedResult;
@property (retain, nonatomic) GEOPDResolvedItem *clientResolvedResult;
@property (retain, nonatomic) NSMutableArray *displayHeaderSubstitutes;
@property (nonatomic) _Bool hasEnablePartialClientization;
@property (nonatomic) _Bool enablePartialClientization;
@property (nonatomic) _Bool hasDymSuggestionVisibleTime;
@property (nonatomic) unsigned int dymSuggestionVisibleTime;
@property (nonatomic) _Bool hasShowDymSuggestionCloseButton;
@property (nonatomic) _Bool showDymSuggestionCloseButton;
@property (nonatomic) _Bool hasRetainSearchTime;
@property (nonatomic) unsigned int retainSearchTime;
@property (retain, nonatomic) NSMutableArray *retainSearchs;
@property (retain, nonatomic) NSMutableArray *searchResultSections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)disambiguationLabelType;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;
+ (Class)displayHeaderSubstituteType;
+ (Class)retainSearchType;
+ (Class)searchResultSectionType;

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
- (void)_readDisplayMapRegion;
- (void)_readDisambiguationLabels;
- (void)_addNoFlagsDisambiguationLabel:(id)arg1;
- (void)_readRelatedSearchSuggestions;
- (void)_addNoFlagsRelatedSearchSuggestion:(id)arg1;
- (void)_readResultDisplayHeader;
- (void)_readDefaultRelatedSearchSuggestion;
- (void)_readSearchClientBehavior;
- (void)_readResultDetourInfos;
- (void)_addNoFlagsResultDetourInfo:(id)arg1;
- (void)_readDirectionIntent;
- (void)_readClientResolvedResult;
- (void)_readDisplayHeaderSubstitutes;
- (void)_addNoFlagsDisplayHeaderSubstitute:(id)arg1;
- (void)_readRetainSearchs;
- (void)_addNoFlagsRetainSearch:(id)arg1;
- (void)_readSearchResultSections;
- (void)_addNoFlagsSearchResultSection:(id)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)clearRelatedSearchSuggestions;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)clearResultDetourInfos;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (unsigned long long)displayHeaderSubstitutesCount;
- (void)clearDisplayHeaderSubstitutes;
- (id)displayHeaderSubstituteAtIndex:(unsigned long long)arg1;
- (void)addDisplayHeaderSubstitute:(id)arg1;
- (unsigned long long)retainSearchsCount;
- (void)clearRetainSearchs;
- (id)retainSearchAtIndex:(unsigned long long)arg1;
- (void)addRetainSearch:(id)arg1;
- (unsigned long long)searchResultSectionsCount;
- (void)clearSearchResultSections;
- (id)searchResultSectionAtIndex:(unsigned long long)arg1;
- (void)addSearchResultSection:(id)arg1;
- (id)searchResultTypeAsString:(int)arg1;
- (int)StringAsSearchResultType:(id)arg1;

@end
