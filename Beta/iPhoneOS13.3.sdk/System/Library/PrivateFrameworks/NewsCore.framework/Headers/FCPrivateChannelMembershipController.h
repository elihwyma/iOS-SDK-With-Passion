/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPrivateDataController.h>

@class NSDictionary, NSMutableSet, NSString;

@interface FCPrivateChannelMembershipController : FCPrivateDataController

{
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}

@property (retain, nonatomic) NSDictionary *membershipsByChannelID;
@property (retain, nonatomic) NSMutableSet *membershipReferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)desiredKeys;
+ (_Bool)requiresPushNotificationSupport;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (_Bool)shouldShowAllDraftContent;
- (void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isAllowedToSeeDraftsForChannelID:(id)arg1;
- (void)_fetchPrivateChannelMembershipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addItem:(id)arg1 toStore:(_Bool)arg2;
- (void)refreshPublicMemberships;
- (id)referenceToMembershipForMembershipID:(id)arg1;
- (void)removeItemWithItemID:(id)arg1;
- (void)_refreshPublicMembershipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2;
- (void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isMemberOfChannelID:(id)arg1;
- (id)feedDescriptorForDraftFeedForChannel:(id)arg1;
- (void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasMemberships;
- (id)membershipChannelIDs;

@end
