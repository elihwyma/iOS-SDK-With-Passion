/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOSubactionMetaData, NSString, PBDataReader;

@interface GEOClientACSuggestionEntry : PBCodable

{
    PBDataReader *_reader;
    double _contactRelevanceScore;
    double _fractionOfMatch;
    double _mapsSuggestionsContactRevelanceScore;
    double _mapsSuggestionsIsTouristScore;
    double _mapsSuggestionsPoiRevelanceScore;
    GEOSubactionMetaData *_subactionMetaData;
    NSString *_suggestionSectionType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _age;
    int _autocompleteResultCellType;
    int _distanceToSuggestion;
    int _peopleSuggesterRank;
    int _poiOpenState;
    int _serverEntryType;
    int _serverItemIndexInSection;
    int _serverSectionIndex;
    int _suggestionType;
    int _tapBehavior;
    _Bool _discreteFeatureValuesAvailable;
    _Bool _isFavorite;
    _Bool _isProminentResult;
    _Bool _matchedUsingAddress;
    _Bool _matchedUsingEventName;
    _Bool _matchedUsingLabel;
    _Bool _matchedUsingName;
    _Bool _matchedUsingOrganization;
    _Bool _shownToUser;
    struct {
        unsigned int has_contactRelevanceScore:1;
        unsigned int has_fractionOfMatch:1;
        unsigned int has_mapsSuggestionsContactRevelanceScore:1;
        unsigned int has_mapsSuggestionsIsTouristScore:1;
        unsigned int has_mapsSuggestionsPoiRevelanceScore:1;
        unsigned int has_age:1;
        unsigned int has_autocompleteResultCellType:1;
        unsigned int has_distanceToSuggestion:1;
        unsigned int has_peopleSuggesterRank:1;
        unsigned int has_poiOpenState:1;
        unsigned int has_serverEntryType:1;
        unsigned int has_serverItemIndexInSection:1;
        unsigned int has_serverSectionIndex:1;
        unsigned int has_suggestionType:1;
        unsigned int has_tapBehavior:1;
        unsigned int has_discreteFeatureValuesAvailable:1;
        unsigned int has_isFavorite:1;
        unsigned int has_isProminentResult:1;
        unsigned int has_matchedUsingAddress:1;
        unsigned int has_matchedUsingEventName:1;
        unsigned int has_matchedUsingLabel:1;
        unsigned int has_matchedUsingName:1;
        unsigned int has_matchedUsingOrganization:1;
        unsigned int has_shownToUser:1;
        unsigned int read_subactionMetaData:1;
        unsigned int read_suggestionSectionType:1;
        unsigned int wrote_contactRelevanceScore:1;
        unsigned int wrote_fractionOfMatch:1;
        unsigned int wrote_mapsSuggestionsContactRevelanceScore:1;
        unsigned int wrote_mapsSuggestionsIsTouristScore:1;
        unsigned int wrote_mapsSuggestionsPoiRevelanceScore:1;
        unsigned int wrote_subactionMetaData:1;
        unsigned int wrote_suggestionSectionType:1;
        unsigned int wrote_age:1;
        unsigned int wrote_autocompleteResultCellType:1;
        unsigned int wrote_distanceToSuggestion:1;
        unsigned int wrote_peopleSuggesterRank:1;
        unsigned int wrote_poiOpenState:1;
        unsigned int wrote_serverEntryType:1;
        unsigned int wrote_serverItemIndexInSection:1;
        unsigned int wrote_serverSectionIndex:1;
        unsigned int wrote_suggestionType:1;
        unsigned int wrote_tapBehavior:1;
        unsigned int wrote_discreteFeatureValuesAvailable:1;
        unsigned int wrote_isFavorite:1;
        unsigned int wrote_isProminentResult:1;
        unsigned int wrote_matchedUsingAddress:1;
        unsigned int wrote_matchedUsingEventName:1;
        unsigned int wrote_matchedUsingLabel:1;
        unsigned int wrote_matchedUsingName:1;
        unsigned int wrote_matchedUsingOrganization:1;
        unsigned int wrote_shownToUser:1;
    } _flags;
}

@property (nonatomic) _Bool hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (nonatomic) _Bool hasShownToUser;
@property (nonatomic) _Bool shownToUser;
@property (nonatomic) _Bool hasFractionOfMatch;
@property (nonatomic) double fractionOfMatch;
@property (nonatomic) _Bool hasDistanceToSuggestion;
@property (nonatomic) int distanceToSuggestion;
@property (nonatomic) _Bool hasContactRelevanceScore;
@property (nonatomic) double contactRelevanceScore;
@property (nonatomic) _Bool hasMatchedUsingName;
@property (nonatomic) _Bool matchedUsingName;
@property (nonatomic) _Bool hasMatchedUsingOrganization;
@property (nonatomic) _Bool matchedUsingOrganization;
@property (nonatomic) _Bool hasMatchedUsingAddress;
@property (nonatomic) _Bool matchedUsingAddress;
@property (nonatomic) _Bool hasMatchedUsingLabel;
@property (nonatomic) _Bool matchedUsingLabel;
@property (nonatomic) _Bool hasMatchedUsingEventName;
@property (nonatomic) _Bool matchedUsingEventName;
@property (nonatomic) _Bool hasPeopleSuggesterRank;
@property (nonatomic) int peopleSuggesterRank;
@property (nonatomic) _Bool hasAge;
@property (nonatomic) int age;
@property (nonatomic) _Bool hasServerEntryType;
@property (nonatomic) int serverEntryType;
@property (nonatomic) _Bool hasIsFavorite;
@property (nonatomic) _Bool isFavorite;
@property (nonatomic) _Bool hasPoiOpenState;
@property (nonatomic) int poiOpenState;
@property (nonatomic) _Bool hasMapsSuggestionsContactRevelanceScore;
@property (nonatomic) double mapsSuggestionsContactRevelanceScore;
@property (nonatomic) _Bool hasMapsSuggestionsPoiRevelanceScore;
@property (nonatomic) double mapsSuggestionsPoiRevelanceScore;
@property (nonatomic) _Bool hasMapsSuggestionsIsTouristScore;
@property (nonatomic) double mapsSuggestionsIsTouristScore;
@property (nonatomic) _Bool hasDiscreteFeatureValuesAvailable;
@property (nonatomic) _Bool discreteFeatureValuesAvailable;
@property (nonatomic, readonly) _Bool hasSuggestionSectionType;
@property (retain, nonatomic) NSString *suggestionSectionType;
@property (nonatomic) _Bool hasIsProminentResult;
@property (nonatomic) _Bool isProminentResult;
@property (nonatomic, readonly) _Bool hasSubactionMetaData;
@property (retain, nonatomic) GEOSubactionMetaData *subactionMetaData;
@property (nonatomic) _Bool hasAutocompleteResultCellType;
@property (nonatomic) int autocompleteResultCellType;
@property (nonatomic) _Bool hasServerSectionIndex;
@property (nonatomic) int serverSectionIndex;
@property (nonatomic) _Bool hasServerItemIndexInSection;
@property (nonatomic) int serverItemIndexInSection;
@property (nonatomic) _Bool hasTapBehavior;
@property (nonatomic) int tapBehavior;

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
- (id)suggestionTypeAsString:(int)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (id)autocompleteResultCellTypeAsString:(int)arg1;
- (int)StringAsAutocompleteResultCellType:(id)arg1;
- (void)_readSuggestionSectionType;
- (void)_readSubactionMetaData;
- (id)serverEntryTypeAsString:(int)arg1;
- (int)StringAsServerEntryType:(id)arg1;
- (id)poiOpenStateAsString:(int)arg1;
- (int)StringAsPoiOpenState:(id)arg1;
- (id)tapBehaviorAsString:(int)arg1;
- (int)StringAsTapBehavior:(id)arg1;

@end
