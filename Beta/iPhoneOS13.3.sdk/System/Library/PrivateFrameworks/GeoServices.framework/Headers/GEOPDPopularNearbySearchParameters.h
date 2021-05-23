/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDViewportInfo, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbySearchParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    int _searchType;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_searchType:1;
    } _flags;
}

@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic) _Bool hasSearchType;
@property (nonatomic) int searchType;
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

@end
