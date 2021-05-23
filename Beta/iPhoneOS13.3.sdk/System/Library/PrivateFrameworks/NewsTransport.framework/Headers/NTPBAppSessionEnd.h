/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable

{
    long long _appSessionDuration;
    int _appsAutoSubscribeFeedCount;
    NSMutableArray *_autoSubscribedFeedIds;
    int _channelSubscriptionCount;
    NSMutableArray *_groupableFeedIds;
    int _internalAutoSubscribeFeedCount;
    NSMutableArray *_lastVisibleViews;
    NSMutableArray *_notificationChannelIds;
    int _notificationEnabledChannelsCount;
    int _notitificationsEnabledChannelsCount;
    NSMutableArray *_paidSubscriptionChannelIds;
    int _portraitAutoSubscribeFeedCount;
    int _safariAutoSubscribeFeedCount;
    int _sessionEndReason;
    NSMutableArray *_subscribedFeedIds;
    int _topicSubscriptionCount;
    _Bool _breakingNewsAvailableDuringSession;
    _Bool _breakingNewsDismissedDuringSession;
    _Bool _syncedOtherUserIdDuringSession;
    struct {
        unsigned int appSessionDuration:1;
        unsigned int appsAutoSubscribeFeedCount:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int internalAutoSubscribeFeedCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int portraitAutoSubscribeFeedCount:1;
        unsigned int safariAutoSubscribeFeedCount:1;
        unsigned int sessionEndReason:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int breakingNewsAvailableDuringSession:1;
        unsigned int breakingNewsDismissedDuringSession:1;
        unsigned int syncedOtherUserIdDuringSession:1;
    } _has;
}

@property (nonatomic) _Bool hasSessionEndReason;
@property (nonatomic) int sessionEndReason;
@property (retain, nonatomic) NSMutableArray *lastVisibleViews;
@property (nonatomic) _Bool hasChannelSubscriptionCount;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) _Bool hasTopicSubscriptionCount;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic) _Bool hasAppSessionDuration;
@property (nonatomic) long long appSessionDuration;
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) _Bool hasNotitificationsEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *notificationChannelIds;
@property (nonatomic) _Bool hasNotificationEnabledChannelsCount;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) _Bool hasBreakingNewsAvailableDuringSession;
@property (nonatomic) _Bool breakingNewsAvailableDuringSession;
@property (nonatomic) _Bool hasBreakingNewsDismissedDuringSession;
@property (nonatomic) _Bool breakingNewsDismissedDuringSession;
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
@property (nonatomic) _Bool hasSyncedOtherUserIdDuringSession;
@property (nonatomic) _Bool syncedOtherUserIdDuringSession;

+ (Class)subscribedFeedIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)lastVisibleViewsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
- (unsigned long long)subscribedFeedIdsCount;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
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
- (void)addLastVisibleViews:(id)arg1;
- (void)clearLastVisibleViews;
- (unsigned long long)lastVisibleViewsCount;
- (id)lastVisibleViewsAtIndex:(unsigned long long)arg1;

@end
