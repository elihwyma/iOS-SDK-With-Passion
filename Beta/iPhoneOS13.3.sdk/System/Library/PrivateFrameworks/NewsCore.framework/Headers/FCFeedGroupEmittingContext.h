/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCloudContext, FCDateRange, FCFeedDescriptor, FCFeedEdition, FCFeedRefreshSession, FCForYouCatchUpOperation, NSArray, NSDate, NSHashTable, NSSet;

@protocol FCCoreConfiguration, FCFeedPersonalizing;

@interface FCFeedGroupEmittingContext : NSObject

{
    _Bool _isTopOfPage;
    _Bool _isFirstPageInRefreshSession;
    _Bool _preferSpeedOverQuality;
    _Bool _isOffline;
    FCForYouCatchUpOperation *_forYouCatchUpOperation;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    id <FCFeedPersonalizing> _personalizer;
    FCDateRange *_refreshDateRange;
    FCDateRange *_pageDateRange;
    FCFeedEdition *_edition;
    NSDate *_editionKeyDate;
    FCFeedDescriptor *_feedDescriptor;
    unsigned long long _desiredHeadlineCount;
    NSArray *_precedingGroups;
    NSArray *_pendingGroups;
    NSArray *_followingGroups;
    NSArray *_pendingGroupsFromOtherSessions;
    NSHashTable *_groupsFromPage;
    FCFeedRefreshSession *_refreshSession;
    NSHashTable *_insertedGroupsFromPage;
    FCFeedEdition *_followingEdition;
    NSArray *_emitters;
    NSArray *_remainingEmitters;
    NSSet *_articleIDs;
    NSSet *_clusterIDs;
    NSSet *_groupIDs;
}

@property (retain, nonatomic) FCFeedRefreshSession *refreshSession;
@property (retain, nonatomic) NSHashTable *groupsFromPage;
@property (retain, nonatomic) NSHashTable *insertedGroupsFromPage;
@property (retain, nonatomic) FCFeedEdition *followingEdition;
@property (retain, nonatomic) NSArray *emitters;
@property (retain, nonatomic) NSArray *remainingEmitters;
@property (copy, nonatomic, readonly) NSSet *articleIDs;
@property (copy, nonatomic, readonly) NSSet *clusterIDs;
@property (copy, nonatomic, readonly) NSSet *groupIDs;
@property (copy, nonatomic, readonly) id <FCCoreConfiguration> configuration;
@property (nonatomic, readonly) FCCloudContext *cloudContext;
@property (nonatomic, readonly) id <FCFeedPersonalizing> personalizer;
@property (nonatomic, readonly) FCDateRange *refreshDateRange;
@property (copy, nonatomic, readonly) FCDateRange *pageDateRange;
@property (nonatomic, readonly) _Bool isTopOfPage;
@property (nonatomic, readonly) _Bool isFirstPageInRefreshSession;
@property (copy, nonatomic, readonly) FCFeedEdition *edition;
@property (nonatomic, readonly) NSDate *editionKeyDate;
@property (copy, nonatomic, readonly) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, readonly) unsigned long long desiredHeadlineCount;
@property (nonatomic, readonly) _Bool preferSpeedOverQuality;
@property (copy, nonatomic, readonly) NSArray *precedingGroups;
@property (copy, nonatomic, readonly) NSArray *pendingGroups;
@property (copy, nonatomic, readonly) NSArray *followingGroups;
@property (copy, nonatomic, readonly) NSArray *pendingGroupsFromOtherSessions;
@property (nonatomic, readonly) long long precedingGroupType;
@property (nonatomic, readonly) _Bool isOffline;
@property (nonatomic, readonly) FCForYouCatchUpOperation *forYouCatchUpOperation;

- (id)allGroupIDs;
- (id)filterTransformationWithFilterOptions:(long long)arg1;
- (id)allArticleIDs;
- (_Bool)isNewEdition;
- (_Bool)pageHasExhaustedGroupsWithTypes:(id)arg1;
- (id)creationDateOfFollowingGroupWithType:(long long)arg1;
- (id)precedingAndPendingTopicIDsInSession;
- (id)precedingAdjacentHeadlinesFromGroupType:(long long)arg1;
- (id)followingAdjacentHeadlinesFromGroupType:(long long)arg1;
- (id)precedingNewFavoriteTagIDs;
- (id)filterTransformationWithFilterOptions:(long long)arg1 ignoringCurrentPageOutputFrom:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 considerOutputFrom:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 refreshSession:(id)arg3 refreshDateRange:(id)arg4 currentEdition:(id)arg5 followingEdition:(id)arg6 precedingGroups:(id)arg7 followingGroups:(id)arg8 pendingGroupsFromOtherSessions:(id)arg9 feedDescriptor:(id)arg10 emitters:(id)arg11 desiredHeadlineCount:(unsigned long long)arg12 preferSpeedOverQuality:(_Bool)arg13 forYouCatchUpOperation:(id)arg14;
- (id)groupFromPageWithSourceIdentifier:(id)arg1;
- (id)_filterTransformationWithFilterOptions:(long long)arg1 groupTypes:(id)arg2 includeArticlesFromGroupTypes:(_Bool)arg3;
- (_Bool)pageWillContainExpandedNewGroupWithSourceIdentifier:(id)arg1;
- (id)creationDateOfGroupWithSourceIdentifier:(id)arg1;
- (id)copyWithRefreshSession:(id)arg1;
- (unsigned long long)countOfGroupsFromPageWithType:(long long)arg1;
- (unsigned long long)countOfPrecedingAdjacentGroupsWithTypes:(id)arg1;
- (_Bool)pageIsWaitingForFirstGroupFromSourceIdentifier:(id)arg1;
- (_Bool)pageWillHaveGroupWithSourceIdentifier:(id)arg1;
- (_Bool)pageHasPrecedingGroupWithSourceIdentifier:(id)arg1;
- (id)filterTransformationWithFilterOptions:(long long)arg1 additionalArticleIDs:(id)arg2;
- (id)filterTransformationWithFilterOptions:(long long)arg1 ignoringOutputFrom:(id)arg2;
- (id)groupOfGroupType:(long long)arg1;
- (id)articleIDsContainedByGroupsWithSourceIdentifier:(id)arg1;

@end
