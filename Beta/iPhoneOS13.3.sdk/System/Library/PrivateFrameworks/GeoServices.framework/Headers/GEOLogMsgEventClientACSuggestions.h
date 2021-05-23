/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventClientACSuggestions : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_entries;
    long long _overallLatencyInMs;
    NSMutableArray *_queryTokens;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _keypressStatus;
    int _selectedIndex;
    int _selectedSectionIndex;
    int _trigger;
    int _withinSectionSelectedIndex;
    _Bool _isRerankerTriggered;
    _Bool _isRetainedQuery;
    _Bool _shouldDifferentiateClientAndServerResults;
    struct {
        unsigned int has_overallLatencyInMs:1;
        unsigned int has_keypressStatus:1;
        unsigned int has_selectedIndex:1;
        unsigned int has_selectedSectionIndex:1;
        unsigned int has_trigger:1;
        unsigned int has_withinSectionSelectedIndex:1;
        unsigned int has_isRerankerTriggered:1;
        unsigned int has_isRetainedQuery:1;
        unsigned int has_shouldDifferentiateClientAndServerResults:1;
        unsigned int read_entries:1;
        unsigned int read_queryTokens:1;
        unsigned int read_query:1;
        unsigned int wrote_entries:1;
        unsigned int wrote_overallLatencyInMs:1;
        unsigned int wrote_queryTokens:1;
        unsigned int wrote_query:1;
        unsigned int wrote_keypressStatus:1;
        unsigned int wrote_selectedIndex:1;
        unsigned int wrote_selectedSectionIndex:1;
        unsigned int wrote_trigger:1;
        unsigned int wrote_withinSectionSelectedIndex:1;
        unsigned int wrote_isRerankerTriggered:1;
        unsigned int wrote_isRetainedQuery:1;
        unsigned int wrote_shouldDifferentiateClientAndServerResults:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *queryTokens;
@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) _Bool hasSelectedIndex;
@property (nonatomic) int selectedIndex;
@property (nonatomic) _Bool hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) _Bool hasKeypressStatus;
@property (nonatomic) int keypressStatus;
@property (nonatomic) _Bool hasWithinSectionSelectedIndex;
@property (nonatomic) int withinSectionSelectedIndex;
@property (nonatomic) _Bool hasSelectedSectionIndex;
@property (nonatomic) int selectedSectionIndex;
@property (nonatomic) _Bool hasIsRetainedQuery;
@property (nonatomic) _Bool isRetainedQuery;
@property (nonatomic) _Bool hasIsRerankerTriggered;
@property (nonatomic) _Bool isRerankerTriggered;
@property (nonatomic) _Bool hasOverallLatencyInMs;
@property (nonatomic) long long overallLatencyInMs;
@property (nonatomic) _Bool hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) _Bool shouldDifferentiateClientAndServerResults;

+ (_Bool)isValid:(id)arg1;
+ (Class)entriesType;
+ (Class)queryTokensType;

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
- (void)_readQuery;
- (id)triggerAsString:(int)arg1;
- (int)StringAsTrigger:(id)arg1;
- (void)_readQueryTokens;
- (void)_addNoFlagsQueryTokens:(id)arg1;
- (void)_readEntries;
- (void)_addNoFlagsEntries:(id)arg1;
- (unsigned long long)queryTokensCount;
- (void)clearQueryTokens;
- (id)queryTokensAtIndex:(unsigned long long)arg1;
- (void)addQueryTokens:(id)arg1;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (void)addEntries:(id)arg1;
- (id)keypressStatusAsString:(int)arg1;
- (int)StringAsKeypressStatus:(id)arg1;

@end
