/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocalizedString, GEOPDVenueIdentifier, GEOStyleAttributes, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryCategory : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_displayName;
    GEOStyleAttributes *_styleAttributes;
    NSData *_suggestionEntryMetadata;
    GEOPDVenueIdentifier *_venueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayName:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_venueIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayName:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_suggestionEntryMetadata:1;
        unsigned int wrote_venueIdentifier:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) GEOLocalizedString *displayName;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasVenueIdentifier;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
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
- (void)_readStyleAttributes;
- (void)_readSuggestionEntryMetadata;
- (void)_readDisplayName;
- (void)_readVenueIdentifier;

@end
