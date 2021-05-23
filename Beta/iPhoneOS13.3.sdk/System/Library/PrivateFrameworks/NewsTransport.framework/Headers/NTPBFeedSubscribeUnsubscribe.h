/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBFeedSubscribeUnsubscribe : PBCodable

{
    long long _previousArticlePublisherArticleVersion;
    NSString *_articleId;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    int _displayRank;
    int _feedCellHostType;
    int _feedCellSection;
    NSString *_feedId;
    int _feedSubscriptionOrigin;
    int _feedType;
    NSData *_feedViewExposureId;
    int _feedViewPresentationReason;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _recommendationBrickType;
    NSString *_searchString;
    int _subscribeUnsubscribeLocation;
    int _subscribeUnsubscribeSurfaceReason;
    NSMutableArray *_subscribedFeedIds;
    int _userAction;
    _Bool _cameFromGroup;
    _Bool _isPaidSubscriberToFeed;
    struct {
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int displayRank:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedSubscriptionOrigin:1;
        unsigned int feedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int groupType:1;
        unsigned int recommendationBrickType:1;
        unsigned int subscribeUnsubscribeLocation:1;
        unsigned int subscribeUnsubscribeSurfaceReason:1;
        unsigned int userAction:1;
        unsigned int cameFromGroup:1;
        unsigned int isPaidSubscriberToFeed:1;
    } _has;
}

@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) _Bool hasSubscribeUnsubscribeLocation;
@property (nonatomic) int subscribeUnsubscribeLocation;
@property (nonatomic) _Bool hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic) _Bool hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) _Bool hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) _Bool hasCameFromGroup;
@property (nonatomic) _Bool cameFromGroup;
@property (nonatomic, readonly) _Bool hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) _Bool hasIsPaidSubscriberToFeed;
@property (nonatomic) _Bool isPaidSubscriberToFeed;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) _Bool hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) _Bool hasSubscribeUnsubscribeSurfaceReason;
@property (nonatomic) int subscribeUnsubscribeSurfaceReason;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (nonatomic, readonly) _Bool hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) _Bool hasFeedSubscriptionOrigin;
@property (nonatomic) int feedSubscriptionOrigin;
@property (nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (nonatomic, readonly) _Bool hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

+ (Class)subscribedFeedIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
- (int)StringAsGroupType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;
- (id)feedViewPresentationReasonAsString:(int)arg1;
- (int)StringAsFeedViewPresentationReason:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedSubscriptionOriginAsString:(int)arg1;
- (int)StringAsFeedSubscriptionOrigin:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
- (unsigned long long)subscribedFeedIdsCount;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (id)recommendationBrickTypeAsString:(int)arg1;
- (int)StringAsRecommendationBrickType:(id)arg1;

@end
