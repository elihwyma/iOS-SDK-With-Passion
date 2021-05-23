/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibrary;

@interface PLCloudFeedEntriesManager : NSObject

{
    PLPhotoLibrary *_library;
}

@property (nonatomic, readonly) PLPhotoLibrary *library;

- (id)initWithPhotoLibrary:(id)arg1;
- (id)_firstEntryOnOrBeforeDate:(id)arg1;
- (id)_firstEntryAfterDate:(id)arg1;
- (id)_firstEntryOnOrAfterDate:(id)arg1;
- (id)_firstEntryRelativeToDate:(id)arg1 ascending:(_Bool)arg2 includeSameDate:(_Bool)arg3;
- (void)_getEarliestDate:(id *)arg1 latestDate:(id *)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3;
- (id)_invitationReceivedEntryForSharedAlbum:(id)arg1;
- (id)_subscriptionEntryForSharedAlbum:(id)arg1;
- (id)_albumCreatedEntryForSharedAlbum:(id)arg1;
- (id)_singleEntryOfType:(long long)arg1 forSharedAlbum:(id)arg2;
- (id)_invitationAcceptedEntryForInvitationRecord:(id)arg1;
- (id)_invitationDeclinedEntryForInvitationRecord:(id)arg1;
- (id)_singleEntryOfType:(long long)arg1 forInvitationRecord:(id)arg2;
- (void)processAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)rebuildAllEntries:(CDUnknownBlockType)arg1;
- (void)_noteDidUpdateSharedAlbum:(id)arg1;
- (void)_noteContentDeletionAffectingInvitationEntry:(id)arg1;
- (void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg1;
- (void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg1;
- (void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg1;
- (void)_noteDidReceiveSharedAsset:(id)arg1;
- (void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg1;
- (void)_noteDidReceiveSharedComments:(id)arg1;
- (void)_noteDidReceiveSharedComment:(id)arg1;
- (void)_noteDidUpdateInvitationRecord:(id)arg1;
- (void)_noteContentDeletionAffectingAssetsEntry:(id)arg1;
- (void)_noteContentDeletionAffectingCommentsEntry:(id)arg1;
- (id)_dateForAsset:(id)arg1;
- (id)_subscriptionDateForSharedAlbum:(id)arg1;
- (_Bool)_wasAssetPublishedBeforeSubscription:(id)arg1;
- (_Bool)_wasCommentPublishedBeforeSubscription:(id)arg1;
- (_Bool)_commentIsBatchCaption:(id)arg1;
- (_Bool)_shouldIgnoreAsset:(id)arg1;
- (_Bool)_shouldIgnoreComment:(id)arg1;
- (_Bool)_shouldIgnoreInvitationRecord:(id)arg1;
- (_Bool)_shouldMergeAsset:(id)arg1 intoEntry:(id)arg2;
- (CDUnknownBlockType)_assetSortingComparator;
- (CDUnknownBlockType)_commentSortingComparator;
- (void)_addAsset:(id)arg1 toEntry:(id)arg2;
- (void)_mergeOlderEntry:(id)arg1 intoMoreRecentEntry:(id)arg2;
- (void)_splitEntriesAtDate:(id)arg1;
- (void)_mergeEntriesAroundDate:(id)arg1;
- (_Bool)_tryMergingComment:(id)arg1 withEntry:(id)arg2;

@end
