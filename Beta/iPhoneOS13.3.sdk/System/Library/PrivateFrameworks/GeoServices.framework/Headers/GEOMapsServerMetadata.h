/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, PBDataReader;

@interface GEOMapsServerMetadata : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_mapsSearchResults;
    NSMutableArray *_suggestionEntryMetadataDisplayeds;
    NSData *_suggestionEntryMetadataTappedOn;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_mapsSearchResults:1;
        unsigned int read_suggestionEntryMetadataDisplayeds:1;
        unsigned int read_suggestionEntryMetadataTappedOn:1;
        unsigned int wrote_mapsSearchResults:1;
        unsigned int wrote_suggestionEntryMetadataDisplayeds:1;
        unsigned int wrote_suggestionEntryMetadataTappedOn:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadataTappedOn;
@property (retain, nonatomic) NSData *suggestionEntryMetadataTappedOn;
@property (retain, nonatomic) NSMutableArray *suggestionEntryMetadataDisplayeds;
@property (retain, nonatomic) NSMutableArray *mapsSearchResults;

+ (_Bool)isValid:(id)arg1;
+ (Class)suggestionEntryMetadataDisplayedType;
+ (Class)mapsSearchResultType;

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
- (void)_readSuggestionEntryMetadataTappedOn;
- (void)_readSuggestionEntryMetadataDisplayeds;
- (void)_addNoFlagsSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)_readMapsSearchResults;
- (void)_addNoFlagsMapsSearchResult:(id)arg1;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1;
- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (unsigned long long)mapsSearchResultsCount;
- (void)clearMapsSearchResults;
- (id)mapsSearchResultAtIndex:(unsigned long long)arg1;
- (void)addMapsSearchResult:(id)arg1;

@end
