/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate;

@interface UNUserNotificationCenter : NSObject

{
    id <UNUserNotificationCenterDelegate> _delegate;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id <UNUserNotificationCenterDelegatePrivate> _privateDelegate;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <UNUserNotificationCenterDelegatePrivate> privateDelegate;
@property (weak, nonatomic) id <UNUserNotificationCenterDelegate> delegate;
@property (nonatomic, readonly) _Bool supportsContentExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentNotificationCenter;
+ (_Bool)supportsContentExtensions;

- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)notificationSettings;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)badgeNumber;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationCategories:(id)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)notificationCategories;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)removeAllPendingNotificationRequests;
- (void)setNotificationRequests:(id)arg1;
- (id)pendingNotificationRequests;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)didChangeSettings:(id)arg1;
- (void)didOpenApplicationForResponse:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2;
- (void)getPendingNotificationRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addNotificationRequest:(id)arg1;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)deliveredNotifications;
- (void)getDeliveredNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllDeliveredNotifications;
- (void)getBadgeNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setNotificationTopics:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)notificationTopics;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)notificationSettingsForTopics;

@end
