/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, GEOPDCategorySearchResultSection, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
    GEOPDCategorySearchResultSection *_categorySearchResultSection;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _enablePartialClientization;
    _Bool _isChainResultSet;
    struct {
        unsigned int has_enablePartialClientization:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_browseCategorys:1;
        unsigned int read_categorySearchResultSection:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_browseCategorys:1;
        unsigned int wrote_categorySearchResultSection:1;
        unsigned int wrote_defaultRelatedSearchSuggestion:1;
        unsigned int wrote_displayMapRegion:1;
        unsigned int wrote_relatedSearchSuggestions:1;
        unsigned int wrote_resultDetourInfos:1;
        unsigned int wrote_searchClientBehavior:1;
        unsigned int wrote_enablePartialClientization:1;
        unsigned int wrote_isChainResultSet:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (nonatomic) _Bool hasIsChainResultSet;
@property (nonatomic) _Bool isChainResultSet;
@property (retain, nonatomic) NSMutableArray *relatedSearchSuggestions;
@property (retain, nonatomic) NSMutableArray *resultDetourInfos;
@property (nonatomic, readonly) _Bool hasDefaultRelatedSearchSuggestion;
@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (nonatomic, readonly) _Bool hasSearchClientBehavior;
@property (retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior;
@property (nonatomic) _Bool hasEnablePartialClientization;
@property (nonatomic) _Bool enablePartialClientization;
@property (retain, nonatomic) NSMutableArray *browseCategorys;
@property (nonatomic, readonly) _Bool hasCategorySearchResultSection;
@property (retain, nonatomic) GEOPDCategorySearchResultSection *categorySearchResultSection;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;
+ (Class)browseCategoryType;

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
- (void)_readRelatedSearchSuggestions;
- (void)_addNoFlagsRelatedSearchSuggestion:(id)arg1;
- (void)_readDefaultRelatedSearchSuggestion;
- (void)_readSearchClientBehavior;
- (void)_readResultDetourInfos;
- (void)_addNoFlagsResultDetourInfo:(id)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)clearRelatedSearchSuggestions;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)clearResultDetourInfos;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (unsigned long long)browseCategorysCount;
- (void)_readBrowseCategorys;
- (void)_addNoFlagsBrowseCategory:(id)arg1;
- (void)_readCategorySearchResultSection;
- (void)clearBrowseCategorys;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (void)addBrowseCategory:(id)arg1;

@end
