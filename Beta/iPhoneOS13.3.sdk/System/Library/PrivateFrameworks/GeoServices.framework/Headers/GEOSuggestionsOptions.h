/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsOptions : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _entriesType;
    int _listType;
    _Bool _includeRankingFeatures;
    _Bool _normalizePOIs;
    struct {
        unsigned int has_entriesType:1;
        unsigned int has_listType:1;
        unsigned int has_includeRankingFeatures:1;
        unsigned int has_normalizePOIs:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_suggestionMetadata:1;
        unsigned int wrote_entriesType:1;
        unsigned int wrote_listType:1;
        unsigned int wrote_includeRankingFeatures:1;
        unsigned int wrote_normalizePOIs:1;
    } _flags;
}

@property (nonatomic) _Bool hasListType;
@property (nonatomic) int listType;
@property (nonatomic) _Bool hasEntriesType;
@property (nonatomic) int entriesType;
@property (nonatomic, readonly) _Bool hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic) _Bool hasNormalizePOIs;
@property (nonatomic) _Bool normalizePOIs;
@property (nonatomic) _Bool hasIncludeRankingFeatures;
@property (nonatomic) _Bool includeRankingFeatures;
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
- (void)_readSuggestionMetadata;
- (void)_readSuggestionEntryMetadata;
- (id)listTypeAsString:(int)arg1;
- (int)StringAsListType:(id)arg1;
- (id)entriesTypeAsString:(int)arg1;
- (int)StringAsEntriesType:(id)arg1;

@end
