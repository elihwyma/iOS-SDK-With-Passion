/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBGroupViewExposure : PBCodable

{
    NSData *_articleViewingSessionId;
    NSString *_curatedBatchId;
    int _curatedContentType;
    NSString *_curatedSubtype;
    int _feedAutoSubscribeType;
    NSData *_feedViewExposureId;
    int _groupArticleCountInForYou;
    int _groupDisplayMode;
    int _groupDisplayRankInForYou;
    NSString *_groupExposedInLocationId;
    NSString *_groupExposedInSourceChannelId;
    NSString *_groupFeedId;
    int _groupFormationReason;
    int _groupLocation;
    int _groupLocationFeedType;
    int _groupPresentationReason;
    int _groupType;
    NSData *_groupViewExposureId;
    NSMutableArray *_groupedArticleIds;
    NSMutableArray *_groupedIssueIds;
    NSMutableArray *_layoutIds;
    int _screenfulsFromTop;
    NSMutableArray *_sectionIds;
    int _topStoryMandatoryArticleCount;
    int _topStoryOptionalArticleCount;
    _Bool _isIssueContext;
    _Bool _isSubscribedToGroupFeed;
    _Bool _reachedEndOfGroup;
    struct {
        unsigned int curatedContentType:1;
        unsigned int feedAutoSubscribeType:1;
        unsigned int groupArticleCountInForYou:1;
        unsigned int groupDisplayMode:1;
        unsigned int groupDisplayRankInForYou:1;
        unsigned int groupFormationReason:1;
        unsigned int groupLocation:1;
        unsigned int groupLocationFeedType:1;
        unsigned int groupPresentationReason:1;
        unsigned int groupType:1;
        unsigned int screenfulsFromTop:1;
        unsigned int topStoryMandatoryArticleCount:1;
        unsigned int topStoryOptionalArticleCount:1;
        unsigned int isIssueContext:1;
        unsigned int isSubscribedToGroupFeed:1;
        unsigned int reachedEndOfGroup:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (retain, nonatomic) NSMutableArray *groupedArticleIds;
@property (nonatomic) _Bool hasGroupDisplayRankInForYou;
@property (nonatomic) int groupDisplayRankInForYou;
@property (nonatomic) _Bool hasGroupArticleCountInForYou;
@property (nonatomic) int groupArticleCountInForYou;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) _Bool hasIsSubscribedToGroupFeed;
@property (nonatomic) _Bool isSubscribedToGroupFeed;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasTopStoryMandatoryArticleCount;
@property (nonatomic) int topStoryMandatoryArticleCount;
@property (nonatomic) _Bool hasTopStoryOptionalArticleCount;
@property (nonatomic) int topStoryOptionalArticleCount;
@property (nonatomic) _Bool hasGroupPresentationReason;
@property (nonatomic) int groupPresentationReason;
@property (nonatomic) _Bool hasGroupFormationReason;
@property (nonatomic) int groupFormationReason;
@property (nonatomic) _Bool hasFeedAutoSubscribeType;
@property (nonatomic) int feedAutoSubscribeType;
@property (nonatomic) _Bool hasReachedEndOfGroup;
@property (nonatomic) _Bool reachedEndOfGroup;
@property (nonatomic) _Bool hasCuratedContentType;
@property (nonatomic) int curatedContentType;
@property (nonatomic, readonly) _Bool hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (nonatomic) _Bool hasGroupDisplayMode;
@property (nonatomic) int groupDisplayMode;
@property (nonatomic) _Bool hasGroupLocation;
@property (nonatomic) int groupLocation;
@property (nonatomic) _Bool hasGroupLocationFeedType;
@property (nonatomic) int groupLocationFeedType;
@property (nonatomic, readonly) _Bool hasGroupExposedInLocationId;
@property (retain, nonatomic) NSString *groupExposedInLocationId;
@property (nonatomic, readonly) _Bool hasGroupExposedInSourceChannelId;
@property (retain, nonatomic) NSString *groupExposedInSourceChannelId;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) _Bool hasScreenfulsFromTop;
@property (nonatomic) int screenfulsFromTop;
@property (retain, nonatomic) NSMutableArray *groupedIssueIds;
@property (nonatomic) _Bool hasIsIssueContext;
@property (nonatomic) _Bool isIssueContext;
@property (retain, nonatomic) NSMutableArray *sectionIds;
@property (nonatomic, readonly) _Bool hasCuratedSubtype;
@property (retain, nonatomic) NSString *curatedSubtype;
@property (nonatomic, readonly) _Bool hasCuratedBatchId;
@property (retain, nonatomic) NSString *curatedBatchId;
@property (retain, nonatomic) NSMutableArray *layoutIds;

+ (Class)groupedArticleIdsType;
+ (Class)groupedIssueIdsType;
+ (Class)sectionIdsType;
+ (Class)layoutIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)sectionIdsCount;
- (void)clearSectionIds;
- (id)groupTypeAsString:(int)arg1;
- (int)StringAsGroupType:(id)arg1;
- (id)groupPresentationReasonAsString:(int)arg1;
- (int)StringAsGroupPresentationReason:(id)arg1;
- (id)groupFormationReasonAsString:(int)arg1;
- (int)StringAsGroupFormationReason:(id)arg1;
- (id)feedAutoSubscribeTypeAsString:(int)arg1;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;
- (id)curatedContentTypeAsString:(int)arg1;
- (int)StringAsCuratedContentType:(id)arg1;
- (id)groupLocationAsString:(int)arg1;
- (int)StringAsGroupLocation:(id)arg1;
- (void)addGroupedArticleIds:(id)arg1;
- (void)addGroupedIssueIds:(id)arg1;
- (void)addSectionIds:(id)arg1;
- (void)addLayoutIds:(id)arg1;
- (void)clearGroupedArticleIds;
- (unsigned long long)groupedArticleIdsCount;
- (id)groupedArticleIdsAtIndex:(unsigned long long)arg1;
- (id)groupLocationFeedTypeAsString:(int)arg1;
- (int)StringAsGroupLocationFeedType:(id)arg1;
- (void)clearGroupedIssueIds;
- (unsigned long long)groupedIssueIdsCount;
- (id)groupedIssueIdsAtIndex:(unsigned long long)arg1;
- (id)sectionIdsAtIndex:(unsigned long long)arg1;
- (void)clearLayoutIds;
- (unsigned long long)layoutIdsCount;
- (id)layoutIdsAtIndex:(unsigned long long)arg1;

@end
