/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteSessionData, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    NSMutableArray *_clientRankingFeatureMetadatas;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _retainSearchTime;
    _Bool _enableRap;
    _Bool _isNoResultFromNegativeCache;
    _Bool _isTopSectionTypeQuery;
    _Bool _shouldDifferentiateClientAndServerResults;
    _Bool _shouldDisplayNoResults;
    struct {
        unsigned int has_retainSearchTime:1;
        unsigned int has_enableRap:1;
        unsigned int has_isNoResultFromNegativeCache:1;
        unsigned int has_isTopSectionTypeQuery:1;
        unsigned int has_shouldDifferentiateClientAndServerResults:1;
        unsigned int has_shouldDisplayNoResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_clientRankingFeatureMetadatas:1;
        unsigned int read_sections:1;
        unsigned int read_sortPriorityMappings:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompleteSessionData:1;
        unsigned int wrote_clientRankingFeatureMetadatas:1;
        unsigned int wrote_sections:1;
        unsigned int wrote_sortPriorityMappings:1;
        unsigned int wrote_retainSearchTime:1;
        unsigned int wrote_enableRap:1;
        unsigned int wrote_isNoResultFromNegativeCache:1;
        unsigned int wrote_isTopSectionTypeQuery:1;
        unsigned int wrote_shouldDifferentiateClientAndServerResults:1;
        unsigned int wrote_shouldDisplayNoResults:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) _Bool hasEnableRap;
@property (nonatomic) _Bool enableRap;
@property (nonatomic) _Bool hasShouldDisplayNoResults;
@property (nonatomic) _Bool shouldDisplayNoResults;
@property (nonatomic) _Bool hasRetainSearchTime;
@property (nonatomic) unsigned int retainSearchTime;
@property (nonatomic) _Bool hasIsNoResultFromNegativeCache;
@property (nonatomic) _Bool isNoResultFromNegativeCache;
@property (retain, nonatomic) NSMutableArray *sortPriorityMappings;
@property (nonatomic) _Bool hasIsTopSectionTypeQuery;
@property (nonatomic) _Bool isTopSectionTypeQuery;
@property (retain, nonatomic) NSMutableArray *clientRankingFeatureMetadatas;
@property (nonatomic) _Bool hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) _Bool shouldDifferentiateClientAndServerResults;
@property (nonatomic, readonly) _Bool hasAutocompleteSessionData;
@property (retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)sectionsType;
+ (Class)sortPriorityMappingType;
+ (Class)clientRankingFeatureMetadataType;

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
- (void)_readSections;
- (void)_addNoFlagsSections:(id)arg1;
- (void)_readSortPriorityMappings;
- (void)_addNoFlagsSortPriorityMapping:(id)arg1;
- (void)_readClientRankingFeatureMetadatas;
- (void)_addNoFlagsClientRankingFeatureMetadata:(id)arg1;
- (void)_readAutocompleteSessionData;
- (unsigned long long)sectionsCount;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (void)addSections:(id)arg1;
- (unsigned long long)sortPriorityMappingsCount;
- (void)clearSortPriorityMappings;
- (id)sortPriorityMappingAtIndex:(unsigned long long)arg1;
- (void)addSortPriorityMapping:(id)arg1;
- (unsigned long long)clientRankingFeatureMetadatasCount;
- (void)clearClientRankingFeatureMetadatas;
- (id)clientRankingFeatureMetadataAtIndex:(unsigned long long)arg1;
- (void)addClientRankingFeatureMetadata:(id)arg1;

@end
