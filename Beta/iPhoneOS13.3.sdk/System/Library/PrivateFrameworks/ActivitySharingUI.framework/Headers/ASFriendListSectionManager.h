/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <Foundation/NSObject.h>

@class ASClient, ASFriendListQuery, FIUIClientToken, FIUIModel, FIUIWorkoutDataProvider, HKActivitySummaryQuery, HKHealthStore, NSCache, NSSet;

@protocol OS_dispatch_queue;

@interface ASFriendListSectionManager : NSObject

{
    HKHealthStore *_healthStore;
    ASClient *_client;
    FIUIModel *_model;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSCache *_displayContextToSortedSectionsCache;
    NSSet *_allFriends;
    ASFriendListQuery *_friendListQuery;
    HKActivitySummaryQuery *_meQuery;
    FIUIWorkoutDataProvider *_workoutDataProvider;
    long long _meQueryRetries;
    long long _friendQueryRetries;
    FIUIClientToken *_modelQueryToken;
    _Bool _shouldGenerateDemoData;
    _Bool _hasReceivedFriendListQueryResult;
    _Bool _hasReceivedMeQueryResult;
}

- (id)init;
- (void)dealloc;
- (id)me;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_stopQueries;
- (void)_queue_handleMyWorkoutsUpdate;
- (void)_calendarDayChangedNotification:(id)arg1;
- (void)_startQueriesIfRequired;
- (_Bool)hasAnyFriendsSetup;
- (void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createFakeFriends;
- (void)_startQueries;
- (void)_queue_startMeQuery;
- (void)_queue_startFriendsQuery;
- (void)_queue_stopQueries;
- (id)_createSectionsForFriends:(id)arg1 withDisplayContext:(id)arg2;
- (id)_copyFriends;
- (_Bool)_isWheelchairUserDisplayModeValidForFriends:(id)arg1 filter:(long long)arg2;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(CDUnknownBlockType)arg1;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(CDUnknownBlockType)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)_friendWithUUID:(id)arg1 fromFriends:(id)arg2;
- (id)_queue_me;
- (id)sectionForFriendsInvitingMe;
- (id)sectionForFriendsRequestingMeToCompete;
- (unsigned long long)numberOfFriendsWithInvitesAwaitingResponseFromMe;
- (unsigned long long)numberOfFriendsWithCompetitionRequestsAwaitingResponseFromMe;
- (long long)numberOfNewFriendsAllowed;
- (id)_filterFriends:(id)arg1 withWheelchairUseAtCacheIndex:(id)arg2;
- (void)_enumerateVisibleDaysForFriends:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_queue_updateWithNewData;
- (void)_queue_restartQueryAfterErrorCount:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_queue_handleActivitySummaryUpdate:(id)arg1;
- (void)_postFriendsListChangedNotification;
- (id)_datesToShowSnapshotsForFriend:(id)arg1 startingFromCurrentDateComponents:(id)arg2;
- (id)_sortFriends:(id)arg1 forDisplayMode:(long long)arg2 cacheIndex:(id)arg3;
- (id)initWithModel:(id)arg1 andWorkoutDataProvider:(id)arg2;
- (_Bool)hasInitializedFriendData;
- (id)sectionsForDisplayContext:(id)arg1;
- (void)enumerateValidDisplayModesForFilter:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)sectionForFriendsInvitedByMe;
- (id)sectionForFriendsHidingDataFromMe;
- (id)sectionForFriendsMyDataIsHiddenFrom;
- (id)sectionForFriendsWithNoHiding;
- (id)sectionForFriendsRequestedToCompeteByMe;
- (id)sectionForFriendsCompetingWithMe;
- (id)friendWithUUID:(id)arg1;
- (id)allFriends;
- (id)allActiveFriendsAsRecipients;
- (id)allDestinationsForActiveOrPendingFriends;
- (unsigned long long)totalNumberOfPendingRequests;
- (_Bool)hasReachedMaxNumberOfFriends;
- (id)_filterFriends:(id)arg1 withSnapshotDataAtCacheIndex:(id)arg2;
- (id)_filterFriends:(id)arg1 withActiveFriendshipAtEndOfDay:(id)arg2;

@end
