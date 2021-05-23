/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBFeedViewExposure : PBCodable

{
    long long _previousArticlePublisherArticleVersion;
    int _areaPresentationReason;
    NSString *_campaignId;
    NSString *_campaignType;
    int _countOfTotalGroupExposures;
    int _countOfTotalGroupsExposed;
    NSString *_creativeId;
    int _feedCellHostType;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    int _groupType;
    NSData *_groupViewExposureId;
    int _presentationReason;
    NSString *_presentationReasonSearchString;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _rankInToc;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    NSString *_userActivityType;
    NSString *_viewFrameInScreen;
    _Bool _adSupportedChannel;
    _Bool _cameFromGroup;
    _Bool _isNewUserToFeed;
    _Bool _isPaidSubscriberToFeed;
    _Bool _isSubscribedToGroupFeed;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int areaPresentationReason:1;
        unsigned int countOfTotalGroupExposures:1;
        unsigned int countOfTotalGroupsExposed:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int presentationReason:1;
        unsigned int rankInToc:1;
        unsigned int adSupportedChannel:1;
        unsigned int cameFromGroup:1;
        unsigned int isNewUserToFeed:1;
        unsigned int isPaidSubscriberToFeed:1;
        unsigned int isSubscribedToGroupFeed:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) _Bool hasIsUserSubscribedToFeed;
@property (nonatomic) _Bool isUserSubscribedToFeed;
@property (nonatomic) _Bool hasPresentationReason;
@property (nonatomic) int presentationReason;
@property (nonatomic, readonly) _Bool hasPresentationReasonSearchString;
@property (retain, nonatomic) NSString *presentationReasonSearchString;
@property (nonatomic, readonly) _Bool hasViewFrameInScreen;
@property (retain, nonatomic) NSString *viewFrameInScreen;
@property (nonatomic) _Bool hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) _Bool hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasIsNewUserToFeed;
@property (nonatomic) _Bool isNewUserToFeed;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic, readonly) _Bool hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (nonatomic, readonly) _Bool hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (nonatomic, readonly) _Bool hasUserActivityType;
@property (retain, nonatomic) NSString *userActivityType;
@property (nonatomic) _Bool hasCameFromGroup;
@property (nonatomic) _Bool cameFromGroup;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) _Bool hasIsSubscribedToGroupFeed;
@property (nonatomic) _Bool isSubscribedToGroupFeed;
@property (nonatomic) _Bool hasCountOfTotalGroupExposures;
@property (nonatomic) int countOfTotalGroupExposures;
@property (nonatomic) _Bool hasCountOfTotalGroupsExposed;
@property (nonatomic) int countOfTotalGroupsExposed;
@property (nonatomic) _Bool hasIsPaidSubscriberToFeed;
@property (nonatomic) _Bool isPaidSubscriberToFeed;
@property (nonatomic) _Bool hasAdSupportedChannel;
@property (nonatomic) _Bool adSupportedChannel;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) _Bool hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (nonatomic, readonly) _Bool hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (nonatomic, readonly) _Bool hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (nonatomic, readonly) _Bool hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (nonatomic) _Bool hasRankInToc;
@property (nonatomic) int rankInToc;

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
- (id)feedCellSectionAsString:(int)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)areaPresentationReasonAsString:(int)arg1;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)presentationReasonAsString:(int)arg1;
- (int)StringAsPresentationReason:(id)arg1;

@end
