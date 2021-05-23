/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class UNUserNotificationCenter;

@protocol PLNotificationUNCenterDelegate;

@interface PLNotificationUNCenter : NSObject

{
    UNUserNotificationCenter *_unc;
    id <PLNotificationUNCenterDelegate> _delegate;
}

@property (weak, nonatomic) id <PLNotificationUNCenterDelegate> delegate;

+ (id)_soundForNotification:(id)arg1;
+ (id)_contentUserInfoForNotification:(id)arg1;
+ (id)_topicIdentifiersForNotificationType:(long long)arg1;
+ (id)_threadIdentifierForNotification:(id)arg1;
+ (id)_categoryIdentifierForNotification:(id)arg1;
+ (id)_UNNotificationInitialize;
+ (id)_updatesCategory;
+ (id)_updatesLikedCategory;
+ (id)_updatesCommentedCategory;
+ (id)_invitationsCategoryWithJunkAction:(_Bool)arg1;
+ (id)_invitationAcceptedCategory;
+ (id)_suggestedCMMCategory;
+ (id)_expiringCMMCategory;
+ (id)_readyToViewInvitationCMMCategory;

- (id)init;
- (void)sendNotificationForNotification:(id)arg1;
- (void)sendNotificationForNotification:(id)arg1 withAttachmentURL:(id)arg2 forceToSound:(_Bool)arg3;
- (void)removeAllNotifications;
- (void)removeNotificationsForNotifications:(id)arg1;
- (void)updateBadgeCountWithDelay:(unsigned long long)arg1;
- (void)updateImageData:(id)arg1 forNotificationWithIdentifier:(id)arg2;
- (void)_findNotificationForRequestIdentifier:(id)arg1 withPendingHandler:(CDUnknownBlockType)arg2 deliveredHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeNotificationWithRequestIdentifiers:(id)arg1;
- (void)mergeExistingAndSendNotificationForNotification:(id)arg1 thumbnailHandler:(CDUnknownBlockType)arg2;
- (void)mergeExistingAndSendNotificationForNotification:(id)arg1 requestIdentifier:(id)arg2 thumbnailHandler:(CDUnknownBlockType)arg3;
- (void)findExistingNotificationByIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateExistingNotificationsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_makeTempThumbnailFileForNotification:(id)arg1;
- (id)_makeTempThumbnailFileForImageData:(id)arg1 identifier:(id)arg2;
- (id)_notificationContentWithNotification:(id)arg1 withImageURL:(id)arg2 sound:(_Bool)arg3;
- (id)_copiedContentFromContent:(id)arg1 WithImageData:(id)arg2 identifier:(id)arg3;
- (void)_updateAppBadge;

@end
