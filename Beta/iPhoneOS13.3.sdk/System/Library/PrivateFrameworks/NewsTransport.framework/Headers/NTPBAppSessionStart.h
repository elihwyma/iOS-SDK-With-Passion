/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBWidgetEngagement;

@interface NTPBAppSessionStart : PBCodable

{
    long long _lastAppSessionTimestamp;
    int _appsAutoSubscribeFeedCount;
    NSMutableArray *_autoSubscribedFeedIds;
    NSString *_campaignId;
    NSString *_campaignType;
    int _channelSubscriptionCount;
    NSString *_creativeId;
    NSMutableArray *_groupableFeedIds;
    int _internalAutoSubscribeFeedCount;
    NSString *_notificationArticleId;
    NSMutableArray *_notificationChannelIds;
    int _notificationEnabledChannelsCount;
    NSString *_notificationId;
    NSString *_notificationSenderChannelId;
    NSString *_notificationSourceChannelId;
    int _notificationType;
    int _notitificationsEnabledChannelsCount;
    NSMutableArray *_paidSubscriptionChannelIds;
    int _portraitAutoSubscribeFeedCount;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    int _safariAutoSubscribeFeedCount;
    int _sessionStartMethod;
    NSMutableArray *_subscribedFeedIds;
    int _topicSubscriptionCount;
    NSString *_userActivityType;
    int _viewabilityState;
    NSMutableArray *_visibleViews;
    int _widgetArticleRank;
    NTPBWidgetEngagement *_widgetEngagement;
    int _widgetSection;
    int _widgetSectionArticleRank;
    _Bool _isMarketingNotificationEnabled;
    _Bool _isNewIssuesNotificationEnabled;
    _Bool _startedFromNotification;
    struct {
        unsigned int lastAppSessionTimestamp:1;
        unsigned int appsAutoSubscribeFeedCount:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int internalAutoSubscribeFeedCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notificationType:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int portraitAutoSubscribeFeedCount:1;
        unsigned int safariAutoSubscribeFeedCount:1;
        unsigned int sessionStartMethod:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int viewabilityState:1;
        unsigned int widgetArticleRank:1;
        unsigned int widgetSection:1;
        unsigned int widgetSectionArticleRank:1;
        unsigned int isMarketingNotificationEnabled:1;
        unsigned int isNewIssuesNotificationEnabled:1;
        unsigned int startedFromNotification:1;
    } _has;
}

@property (nonatomic) _Bool hasLastAppSessionTimestamp;
@property (nonatomic) long long lastAppSessionTimestamp;
@property (retain, nonatomic) NSMutableArray *visibleViews;
@property (nonatomic) _Bool hasChannelSubscriptionCount;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) _Bool hasTopicSubscriptionCount;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic, readonly) _Bool hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (nonatomic, readonly) _Bool hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (nonatomic, readonly) _Bool hasUserActivityType;
@property (retain, nonatomic) NSString *userActivityType;
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) _Bool hasStartedFromNotification;
@property (nonatomic) _Bool startedFromNotification;
@property (nonatomic, readonly) _Bool hasNotificationId;
@property (retain, nonatomic) NSString *notificationId;
@property (nonatomic, readonly) _Bool hasNotificationSenderChannelId;
@property (retain, nonatomic) NSString *notificationSenderChannelId;
@property (nonatomic, readonly) _Bool hasNotificationSourceChannelId;
@property (retain, nonatomic) NSString *notificationSourceChannelId;
@property (nonatomic) _Bool hasNotitificationsEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *notificationChannelIds;
@property (nonatomic, readonly) _Bool hasNotificationArticleId;
@property (retain, nonatomic) NSString *notificationArticleId;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) _Bool hasNotificationEnabledChannelsCount;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) _Bool hasSessionStartMethod;
@property (nonatomic) int sessionStartMethod;
@property (nonatomic) _Bool hasWidgetSection;
@property (nonatomic) int widgetSection;
@property (nonatomic) _Bool hasWidgetSectionArticleRank;
@property (nonatomic) int widgetSectionArticleRank;
@property (nonatomic) _Bool hasWidgetArticleRank;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic, readonly) _Bool hasWidgetEngagement;
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement;
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds;
@property (retain, nonatomic) NSMutableArray *groupableFeedIds;
@property (nonatomic) _Bool hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic) _Bool hasSafariAutoSubscribeFeedCount;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) _Bool hasAppsAutoSubscribeFeedCount;
@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic) _Bool hasInternalAutoSubscribeFeedCount;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic) _Bool hasViewabilityState;
@property (nonatomic) int viewabilityState;
@property (nonatomic) _Bool hasNotificationType;
@property (nonatomic) int notificationType;
@property (nonatomic) _Bool hasIsNewIssuesNotificationEnabled;
@property (nonatomic) _Bool isNewIssuesNotificationEnabled;
@property (nonatomic) _Bool hasIsMarketingNotificationEnabled;
@property (nonatomic) _Bool isMarketingNotificationEnabled;

+ (Class)subscribedFeedIdsType;
+ (Class)visibleViewsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)widgetSectionAsString:(int)arg1;
- (int)StringAsWidgetSection:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
- (unsigned long long)subscribedFeedIdsCount;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (void)addVisibleViews:(id)arg1;
- (void)clearVisibleViews;
- (unsigned long long)visibleViewsCount;
- (id)visibleViewsAtIndex:(unsigned long long)arg1;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)addNotificationChannelIds:(id)arg1;
- (void)addAutoSubscribedFeedIds:(id)arg1;
- (void)addGroupableFeedIds:(id)arg1;
- (void)clearPaidSubscriptionChannelIds;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (void)clearNotificationChannelIds;
- (unsigned long long)notificationChannelIdsCount;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;
- (void)clearAutoSubscribedFeedIds;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (void)clearGroupableFeedIds;
- (unsigned long long)groupableFeedIdsCount;
- (id)groupableFeedIdsAtIndex:(unsigned long long)arg1;

@end
