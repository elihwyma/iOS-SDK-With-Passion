/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDRecentRouteInfo, GEOPDViewportInfo, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxResults;
    int _searchType;
    _Bool _supportCategorySearchResultSection;
    struct {
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int has_supportCategorySearchResultSection:1;
        unsigned int read_unknownFields:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_recentRouteInfo:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_blurredHourOfDay:1;
        unsigned int wrote_dayOfWeek:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_searchType:1;
        unsigned int wrote_supportCategorySearchResultSection:1;
    } _flags;
}

@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic) _Bool hasBlurredHourOfDay;
@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) _Bool hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic, readonly) _Bool hasRecentRouteInfo;
@property (retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic) _Bool hasSupportCategorySearchResultSection;
@property (nonatomic) _Bool supportCategorySearchResultSection;
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
- (id)searchTypeAsString:(int)arg1;
- (int)StringAsSearchType:(id)arg1;
- (void)_readSuggestionEntryMetadata;
- (void)_readRecentRouteInfo;

@end
