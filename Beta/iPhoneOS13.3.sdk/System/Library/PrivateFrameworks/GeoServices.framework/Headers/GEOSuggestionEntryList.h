/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntryList : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_localizedSectionHeader;
    NSMutableArray *_suggestionEntries;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_localizedSectionHeader:1;
        unsigned int read_suggestionEntries:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localizedSectionHeader:1;
        unsigned int wrote_suggestionEntries:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *suggestionEntries;
@property (nonatomic, readonly) _Bool hasLocalizedSectionHeader;
@property (retain, nonatomic) NSString *localizedSectionHeader;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)suggestionEntriesType;

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
- (void)_readSuggestionEntries;
- (void)_addNoFlagsSuggestionEntries:(id)arg1;
- (void)_readLocalizedSectionHeader;
- (unsigned long long)suggestionEntriesCount;
- (void)clearSuggestionEntries;
- (id)suggestionEntriesAtIndex:(unsigned long long)arg1;
- (void)addSuggestionEntries:(id)arg1;

@end
