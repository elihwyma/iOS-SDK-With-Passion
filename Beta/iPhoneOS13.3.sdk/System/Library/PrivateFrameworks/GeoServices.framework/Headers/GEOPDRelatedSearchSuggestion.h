/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedSearchSuggestion : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_searchBarDisplayToken;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayString:1;
        unsigned int read_searchBarDisplayToken:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayString:1;
        unsigned int wrote_searchBarDisplayToken:1;
        unsigned int wrote_suggestionEntryMetadata:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDisplayString;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasSearchBarDisplayToken;
@property (retain, nonatomic) NSString *searchBarDisplayToken;
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
- (void)_readSuggestionEntryMetadata;
- (void)_readDisplayString;
- (void)_readSearchBarDisplayToken;

@end
