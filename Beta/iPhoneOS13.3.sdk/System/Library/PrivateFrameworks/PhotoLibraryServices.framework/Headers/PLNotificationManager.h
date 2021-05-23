/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSMutableDictionary, NSString, PLNotificationUNCenter;

@protocol OS_dispatch_queue;

@interface PLNotificationManager : NSObject

{
    _Bool _badgeCountIsInvalid;
    _Bool _enableTemporaryDebugMode;
    CNContactStore *_contactStore;
    int _alertFiltrationEnabled;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_waitingAssetsAddNotifications;
    PLNotificationUNCenter *_UNCenter;
}

@property (retain, nonatomic) PLNotificationUNCenter *UNCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (struct NSObject *)filteredAlbumListForContentMode:(int)arg1 library:(id)arg2;
+ (id)_notificationDeliveryDate;
+ (id)_bestDateForDeliveringNotificationWithError:(id *)arg1;

- (id)init;
- (void)dealloc;
- (id)contactStore;
- (_Bool)_alertFiltrationEnabled;
- (unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)arg1;
- (id)_initSharedInstance;
- (_Bool)enableTemporaryDebugMode;
- (void)setEnableTemporaryDebugMode:(_Bool)arg1;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg1;
- (void)noteDidDeleteSharedAlbum:(id)arg1;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidReceiveAssets:(id)arg1 forSharedAlbum:(id)arg2 mstreamdInfo:(id)arg3;
- (void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;
- (void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)arg1;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1;
- (void)noteDidReceiveCMMInvitationWithMomentShare:(id)arg1;
- (void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)arg1;
- (void)noteUserAssetsAreReadyForMomentShare:(id)arg1;
- (void)noteUserDidViewCloudFeedContent:(long long)arg1 photoLibrary:(id)arg2;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg1 photoLibrary:(id)arg2;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1 photoLibrary:(id)arg2;
- (void)noteUserDidReadCommentOnSharedAsset:(id)arg1 photoLibrary:(id)arg2;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1;
- (void)noteUserDidLeavePhotosApplication;
- (void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)arg1;
- (void)noteUserDidChangeStatusForMomentShare:(id)arg1 photoLibrary:(id)arg2;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;
- (id)_memoryNotificationFromDictionaryRepresentation:(id)arg1;
- (id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)postNotificationForInterestingMemoryWithMemoryUUID:(id)arg1 library:(id)arg2 notificationDeliveryDate:(id)arg3;
- (void)removeNotificationForInterestingMemoryWithUUID:(id)arg1;
- (void)_deleteNotificationsForObjectWithUUID:(id)arg1 notificationDictionaryKey:(id)arg2 notificationTypes:(id)arg3;
- (void)_deleteNotificationsForMemoriesWithUUID:(id)arg1 notificationTypes:(id)arg2;
- (void)_deleteNotificationsForAlbumWithUUID:(id)arg1 notificationTypes:(id)arg2;
- (_Bool)_notificationType:(long long)arg1 matchesCommentsOrLikeNotifications:(_Bool)arg2 andPhotosAddedToAlbumNotifications:(_Bool)arg3;
- (void)_deleteNotificationsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeNotifications:(_Bool)arg2 shouldDeletePhotosAddedToAlbumNotifications:(_Bool)arg3;
- (void)postNotificationForSuggestedCMMWithUUID:(id)arg1 library:(id)arg2 notificationDeliveryDate:(id)arg3;
- (void)removeNotificationForSuggestedCMMWithUUID:(id)arg1;
- (void)postNotificationForExpiringCMMsWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (unsigned long long)_appBadgeCount;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_addWaitingNotification:(id)arg1 forPhotosBatchID:(id)arg2;
- (id)_waitingNotificationForPhotosBatchID:(id)arg1;
- (void)_removeWaitingNotificationForPhotosBatchID:(id)arg1;
- (void)triggerNotificationThumbnailUpdateForAsset:(id)arg1;
- (void)getThumbnailImageDataAssetUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateImageDataForNotification:(id)arg1;
- (void)discardAllNotifications;
- (void)sendResponse:(_Bool)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (_Bool)_shouldAllowAlertsFromContactWithEmail:(id)arg1;
- (_Bool)_isMyEmailAddress:(id)arg1;
- (void)_resetAlertFiltration;

@end
