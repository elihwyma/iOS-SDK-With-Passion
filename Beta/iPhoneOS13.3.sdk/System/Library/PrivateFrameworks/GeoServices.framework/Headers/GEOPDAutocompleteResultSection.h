/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSection : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _numVisibleResults;
    int _suggestionType;
    int _type;
    _Bool _enforceServerResultsOrder;
    _Bool _shouldInterleaveClientResults;
    struct {
        unsigned int has_numVisibleResults:1;
        unsigned int has_suggestionType:1;
        unsigned int has_type:1;
        unsigned int has_enforceServerResultsOrder:1;
        unsigned int has_shouldInterleaveClientResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entries:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entries:1;
        unsigned int wrote_name:1;
        unsigned int wrote_numVisibleResults:1;
        unsigned int wrote_suggestionType:1;
        unsigned int wrote_type:1;
        unsigned int wrote_enforceServerResultsOrder:1;
        unsigned int wrote_shouldInterleaveClientResults:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) _Bool hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (nonatomic) _Bool hasNumVisibleResults;
@property (nonatomic) int numVisibleResults;
@property (nonatomic) _Bool hasShouldInterleaveClientResults;
@property (nonatomic) _Bool shouldInterleaveClientResults;
@property (nonatomic) _Bool hasEnforceServerResultsOrder;
@property (nonatomic) _Bool enforceServerResultsOrder;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)entriesType;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readName;
- (void)clearSensitiveFields;
- (void)_readEntries;
- (void)_addNoFlagsEntries:(id)arg1;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (void)addEntries:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
- (int)StringAsSuggestionType:(id)arg1;

@end
