/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBChannelMuteUnmute : PBCodable

{
    long long _previousArticlePublisherArticleVersion;
    NSString *_articleId;
    NSData *_articleSessionId;
    NSString *_articleSessionIdDeprecated;
    NSData *_articleViewingSessionId;
    NSString *_articleViewingSessionIdDeprecated;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_channelMuteUnmuteFeedId;
    NSString *_creativeId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSString *_feedViewExposureIdDeprecated;
    int _feedViewPresentationReason;
    int _groupType;
    NSData *_groupViewExposureId;
    int _muteUnmuteLocation;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sourceChannelId;
    int _userAction;
    _Bool _isSearchResultArticle;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int feedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int groupType:1;
        unsigned int muteUnmuteLocation:1;
        unsigned int userAction:1;
        unsigned int isSearchResultArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasMuteUnmuteLocation;
@property (nonatomic) int muteUnmuteLocation;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic, readonly) _Bool hasArticleSessionIdDeprecated;
@property (retain, nonatomic) NSString *articleSessionIdDeprecated;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionIdDeprecated;
@property (retain, nonatomic) NSString *articleViewingSessionIdDeprecated;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasChannelMuteUnmuteFeedId;
@property (retain, nonatomic) NSString *channelMuteUnmuteFeedId;
@property (nonatomic, readonly) _Bool hasFeedViewExposureIdDeprecated;
@property (retain, nonatomic) NSString *feedViewExposureIdDeprecated;
@property (nonatomic) _Bool hasIsUserSubscribedToFeed;
@property (nonatomic) _Bool isUserSubscribedToFeed;
@property (nonatomic, readonly) _Bool hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) _Bool hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic) _Bool hasIsSearchResultArticle;
@property (nonatomic) _Bool isSearchResultArticle;
@property (nonatomic, readonly) _Bool hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (nonatomic, readonly) _Bool hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (nonatomic, readonly) _Bool hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

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

@end
