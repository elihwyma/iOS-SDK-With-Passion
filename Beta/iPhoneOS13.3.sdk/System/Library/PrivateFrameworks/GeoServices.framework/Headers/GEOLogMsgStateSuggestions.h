/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgStateSuggestions : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_displayedResults;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _acSequenceNumber;
    int _searchFieldType;
    int _selectedIndex;
    struct {
        unsigned int has_acSequenceNumber:1;
        unsigned int has_searchFieldType:1;
        unsigned int has_selectedIndex:1;
        unsigned int read_displayedResults:1;
        unsigned int read_searchString:1;
        unsigned int wrote_displayedResults:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_acSequenceNumber:1;
        unsigned int wrote_searchFieldType:1;
        unsigned int wrote_selectedIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *displayedResults;
@property (nonatomic) _Bool hasSelectedIndex;
@property (nonatomic) int selectedIndex;
@property (nonatomic) _Bool hasSearchFieldType;
@property (nonatomic) int searchFieldType;
@property (nonatomic) _Bool hasAcSequenceNumber;
@property (nonatomic) int acSequenceNumber;

+ (_Bool)isValid:(id)arg1;
+ (Class)displayedResultType;

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
- (void)addDisplayedResult:(id)arg1;
- (void)_readDisplayedResults;
- (void)_addNoFlagsDisplayedResult:(id)arg1;
- (unsigned long long)displayedResultsCount;
- (void)clearDisplayedResults;
- (id)displayedResultAtIndex:(unsigned long long)arg1;
- (id)searchFieldTypeAsString:(int)arg1;
- (int)StringAsSearchFieldType:(id)arg1;

@end
