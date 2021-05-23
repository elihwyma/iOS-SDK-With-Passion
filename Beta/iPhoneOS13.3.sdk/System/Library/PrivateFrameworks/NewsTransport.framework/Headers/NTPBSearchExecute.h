/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBSearchExecute : PBCodable

{
    NSMutableArray *_articleResultIds;
    NSString *_campaignId;
    NSString *_campaignType;
    NSMutableArray *_channelResultFeedIds;
    NSString *_creativeId;
    int _searchExecutionMethod;
    int _searchLocation;
    NSString *_searchString;
    NSString *_storeFrontId;
    NSString *_topResultArticleId;
    NSString *_topResultChannelId;
    NSString *_topResultFeedId;
    NSString *_topResultTopicId;
    NSMutableArray *_topicResultFeedIds;
    int _totalResults;
    struct {
        unsigned int searchExecutionMethod:1;
        unsigned int searchLocation:1;
        unsigned int totalResults:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) _Bool hasSearchLocation;
@property (nonatomic) int searchLocation;
@property (nonatomic) _Bool hasSearchExecutionMethod;
@property (nonatomic) int searchExecutionMethod;
@property (nonatomic) _Bool hasTotalResults;
@property (nonatomic) int totalResults;
@property (nonatomic, readonly) _Bool hasTopResultFeedId;
@property (retain, nonatomic) NSString *topResultFeedId;
@property (retain, nonatomic) NSMutableArray *topicResultFeedIds;
@property (retain, nonatomic) NSMutableArray *channelResultFeedIds;
@property (nonatomic, readonly) _Bool hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic, readonly) _Bool hasTopResultArticleId;
@property (retain, nonatomic) NSString *topResultArticleId;
@property (nonatomic, readonly) _Bool hasTopResultChannelId;
@property (retain, nonatomic) NSString *topResultChannelId;
@property (nonatomic, readonly) _Bool hasTopResultTopicId;
@property (retain, nonatomic) NSString *topResultTopicId;
@property (retain, nonatomic) NSMutableArray *articleResultIds;

+ (Class)topicResultFeedIdsType;
+ (Class)channelResultFeedIdsType;
+ (Class)articleResultIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTopicResultFeedIds:(id)arg1;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)addArticleResultIds:(id)arg1;
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
- (void)clearArticleResultIds;
- (unsigned long long)articleResultIdsCount;
- (id)articleResultIdsAtIndex:(unsigned long long)arg1;

@end
