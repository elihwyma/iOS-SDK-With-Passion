/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBSearchResultSelect : PBCodable

{
    NSMutableArray *_articleResultArticleIds;
    NSString *_campaignId;
    NSString *_campaignType;
    NSMutableArray *_channelResultFeedIds;
    NSString *_creativeId;
    NSMutableArray *_nonSelectedResultFeedIds;
    int _searchExecutionMethod;
    int _searchLocation;
    int _searchResultSelectLocation;
    NSMutableArray *_searchResults;
    NSString *_searchString;
    int _selectedResultActionType;
    NSString *_selectedResultArticleId;
    NSString *_selectedResultFeedId;
    int _selectedResultRankInSection;
    int _selectedResultSection;
    NSString *_selectedResultString;
    int _selectedResultType;
    NSString *_storeFrontId;
    NSString *_topResultArticleId;
    NSString *_topResultChannelId;
    NSString *_topResultFeedId;
    NSString *_topResultTopicId;
    NSMutableArray *_topicResultFeedIds;
    int _totalResults;
    int _totalResultsInSelectedSection;
    _Bool _didSelectResult;
    _Bool _selectedResultShowMore;
    struct {
        unsigned int searchExecutionMethod:1;
        unsigned int searchLocation:1;
        unsigned int searchResultSelectLocation:1;
        unsigned int selectedResultActionType:1;
        unsigned int selectedResultRankInSection:1;
        unsigned int selectedResultSection:1;
        unsigned int selectedResultType:1;
        unsigned int totalResults:1;
        unsigned int totalResultsInSelectedSection:1;
        unsigned int didSelectResult:1;
        unsigned int selectedResultShowMore:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) _Bool hasSearchLocation;
@property (nonatomic) int searchLocation;
@property (nonatomic) _Bool hasSelectedResultType;
@property (nonatomic) int selectedResultType;
@property (nonatomic) _Bool hasSelectedResultActionType;
@property (nonatomic) int selectedResultActionType;
@property (nonatomic) _Bool hasSelectedResultSection;
@property (nonatomic) int selectedResultSection;
@property (nonatomic, readonly) _Bool hasSelectedResultString;
@property (retain, nonatomic) NSString *selectedResultString;
@property (nonatomic, readonly) _Bool hasSelectedResultFeedId;
@property (retain, nonatomic) NSString *selectedResultFeedId;
@property (nonatomic) _Bool hasSelectedResultRankInSection;
@property (nonatomic) int selectedResultRankInSection;
@property (nonatomic) _Bool hasSelectedResultShowMore;
@property (nonatomic) _Bool selectedResultShowMore;
@property (nonatomic) _Bool hasSearchExecutionMethod;
@property (nonatomic) int searchExecutionMethod;
@property (nonatomic) _Bool hasTotalResults;
@property (nonatomic) int totalResults;
@property (nonatomic) _Bool hasTotalResultsInSelectedSection;
@property (nonatomic) int totalResultsInSelectedSection;
@property (retain, nonatomic) NSMutableArray *nonSelectedResultFeedIds;
@property (nonatomic) _Bool hasDidSelectResult;
@property (nonatomic) _Bool didSelectResult;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic, readonly) _Bool hasTopResultFeedId;
@property (retain, nonatomic) NSString *topResultFeedId;
@property (retain, nonatomic) NSMutableArray *topicResultFeedIds;
@property (retain, nonatomic) NSMutableArray *channelResultFeedIds;
@property (nonatomic, readonly) _Bool hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;
@property (nonatomic) _Bool hasSearchResultSelectLocation;
@property (nonatomic) int searchResultSelectLocation;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic, readonly) _Bool hasSelectedResultArticleId;
@property (retain, nonatomic) NSString *selectedResultArticleId;
@property (retain, nonatomic) NSMutableArray *articleResultArticleIds;
@property (nonatomic, readonly) _Bool hasTopResultArticleId;
@property (retain, nonatomic) NSString *topResultArticleId;
@property (nonatomic, readonly) _Bool hasTopResultChannelId;
@property (retain, nonatomic) NSString *topResultChannelId;
@property (nonatomic, readonly) _Bool hasTopResultTopicId;
@property (retain, nonatomic) NSString *topResultTopicId;

+ (Class)searchResultsType;
+ (Class)topicResultFeedIdsType;
+ (Class)channelResultFeedIdsType;
+ (Class)nonSelectedResultFeedIdType;
+ (Class)articleResultArticleIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)searchResultsCount;
- (void)clearSearchResults;
- (void)addSearchResults:(id)arg1;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (void)addTopicResultFeedIds:(id)arg1;
- (void)addChannelResultFeedIds:(id)arg1;
- (id)searchLocationAsString:(int)arg1;
- (int)StringAsSearchLocation:(id)arg1;
- (id)searchExecutionMethodAsString:(int)arg1;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (void)clearTopicResultFeedIds;
- (unsigned long long)topicResultFeedIdsCount;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (void)clearChannelResultFeedIds;
- (unsigned long long)channelResultFeedIdsCount;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (void)addNonSelectedResultFeedId:(id)arg1;
- (void)addArticleResultArticleIds:(id)arg1;
- (void)clearNonSelectedResultFeedIds;
- (unsigned long long)nonSelectedResultFeedIdsCount;
- (id)nonSelectedResultFeedIdAtIndex:(unsigned long long)arg1;
- (void)clearArticleResultArticleIds;
- (unsigned long long)articleResultArticleIdsCount;
- (id)articleResultArticleIdsAtIndex:(unsigned long long)arg1;

@end
