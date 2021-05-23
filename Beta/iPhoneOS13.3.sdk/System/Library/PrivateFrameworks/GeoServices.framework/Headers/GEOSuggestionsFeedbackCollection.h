/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteEntry, NSData, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsFeedbackCollection : PBCodable

{
    PBDataReader *_reader;
    struct GEOSessionID _sessionID;
    NSData *_suggestionEntryMetadata;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _suggestionEntryIndex;
    int _suggestionsEntryListIndex;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_suggestionEntryIndex:1;
        unsigned int has_suggestionsEntryListIndex:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionEntry:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_suggestionEntry:1;
        unsigned int wrote_suggestionMetadata:1;
        unsigned int wrote_suggestionEntryIndex:1;
        unsigned int wrote_suggestionsEntryListIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) struct GEOSessionID sessionID;
@property (nonatomic) _Bool hasSuggestionsEntryListIndex;
@property (nonatomic) int suggestionsEntryListIndex;
@property (nonatomic) _Bool hasSuggestionEntryIndex;
@property (nonatomic) int suggestionEntryIndex;
@property (nonatomic, readonly) _Bool hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasSuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *suggestionEntry;

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
- (void)_readSuggestionMetadata;
- (void)_readSuggestionEntryMetadata;
- (void)_readSuggestionEntry;

@end
