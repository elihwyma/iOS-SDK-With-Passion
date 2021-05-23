/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class ASCompetition, ASContact, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSString, NSTimeZone, NSUUID, _HKFitnessFriendActivitySnapshot;

@interface ASFriend : NSObject

{
    NSNumber *_currentCacheIndex;
    ASContact *_contact;
    NSArray *_competitions;
    NSDictionary *_snapshots;
    NSDictionary *_friendAchievements;
    NSDictionary *_friendWorkouts;
}

@property (retain, nonatomic) ASContact *contact;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSDateComponents *currentDateComponents;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly, getter=isMe) _Bool me;
@property (nonatomic, readonly) _Bool isFriendshipCurrentlyActive;
@property (nonatomic, readonly) _Bool canSeeMyActivityData;
@property (nonatomic, readonly) _Bool isActivityDataCurrentlyVisibleToMe;
@property (nonatomic, readonly) _Bool isCurrentlyHidingActivityDataFromMe;
@property (nonatomic, readonly) _Bool isMyActivityDataCurrentlyHidden;
@property (nonatomic, readonly) _Bool hasInviteRequestFromMe;
@property (nonatomic, readonly) _Bool sentInviteRequestToMe;
@property (nonatomic, readonly) _Bool isAwaitingInviteResponseFromMe;
@property (nonatomic, readonly) _Bool inviteRequestToMeWasAccepted;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingInviteRequest;
@property (nonatomic, readonly) NSDate *dateForLatestDataHiddenFromMe;
@property (nonatomic, readonly) NSDate *dateForLatestDataHidden;
@property (nonatomic, readonly) NSDate *dateForLatestRelationshipStart;
@property (nonatomic, readonly) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property (nonatomic, readonly) _Bool isMuted;
@property (retain, nonatomic) NSArray *competitions;
@property (nonatomic, readonly) NSArray *completedCompetitions;
@property (nonatomic, readonly) ASCompetition *currentOrMostRecentCompetition;
@property (nonatomic, readonly) ASCompetition *currentCompetition;
@property (nonatomic, readonly) ASCompetition *mostRecentlyCompletedCompetition;
@property (nonatomic, readonly) ASCompetition *competitionPendingAcceptance;
@property (nonatomic, readonly) _Bool hasCompetitionRequestFromMe;
@property (nonatomic, readonly) _Bool hasPendingCompetitionRequestFromMe;
@property (nonatomic, readonly) _Bool ignoredCompetitionRequestFromMe;
@property (nonatomic, readonly) _Bool isAwaitingCompetitionResponseFromMe;
@property (nonatomic, readonly) _Bool isCompetitionActive;
@property (nonatomic, readonly) _Bool hasCompletedCompetition;
@property (nonatomic, readonly) _Bool hasCompletedFirstDayOfCurrentCompetition;
@property (nonatomic, readonly) _Bool isEligibleToReceiveCompetitionRequest;
@property (nonatomic, readonly) _Bool hasCompetitionHistory;
@property (nonatomic, readonly) unsigned long long numberOfCompetitionWinsAgainstMe;
@property (nonatomic, readonly) unsigned long long numberOfCompetitionWinsByMe;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (nonatomic, readonly) NSDate *dateForLatestIncomingCompetitionRequest;
@property (nonatomic, readonly) NSDate *earliestCompetitionVictoryOrPotentialVictoryDate;
@property (retain, nonatomic) NSDictionary *snapshots;
@property (retain, nonatomic) NSDictionary *friendAchievements;
@property (retain, nonatomic) NSDictionary *friendWorkouts;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property (nonatomic, readonly) NSNumber *currentCacheIndex;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property (nonatomic, readonly) _Bool supportsCompetitions;

+ (id)friendWithCodableFriend:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4 competitions:(id)arg5;
- (id)codableFriendIncludingCloudKitFields:(_Bool)arg1;
- (struct _HKFitnessFriendActivitySnapshot *)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1;
- (_Bool)isActivityDataVisibleToMeForDate:(id)arg1;
- (_Bool)isHidingActivityDataFromMeForDate:(id)arg1;
- (struct _HKFitnessFriendActivitySnapshot *)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1;

@end
