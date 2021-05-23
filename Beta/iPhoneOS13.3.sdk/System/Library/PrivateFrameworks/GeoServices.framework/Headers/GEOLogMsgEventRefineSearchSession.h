/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventRefineSearchSession : PBCodable

{
    PBDataReader *_reader;
    NSString *_searchString;
    NSMutableArray *_suggestionItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _refineSearchType;
    int _searchType;
    struct {
        unsigned int has_refineSearchType:1;
        unsigned int has_searchType:1;
        unsigned int read_searchString:1;
        unsigned int read_suggestionItems:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_suggestionItems:1;
        unsigned int wrote_refineSearchType:1;
        unsigned int wrote_searchType:1;
    } _flags;
}

@property (nonatomic) _Bool hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic) _Bool hasRefineSearchType;
@property (nonatomic) int refineSearchType;
@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *suggestionItems;

+ (_Bool)isValid:(id)arg1;
+ (Class)suggestionItemType;

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
- (void)_readSearchString;
- (id)searchTypeAsString:(int)arg1;
- (int)StringAsSearchType:(id)arg1;
- (void)_readSuggestionItems;
- (void)_addNoFlagsSuggestionItem:(id)arg1;
- (unsigned long long)suggestionItemsCount;
- (void)clearSuggestionItems;
- (id)suggestionItemAtIndex:(unsigned long long)arg1;
- (void)addSuggestionItem:(id)arg1;
- (id)refineSearchTypeAsString:(int)arg1;
- (int)StringAsRefineSearchType:(id)arg1;

@end
