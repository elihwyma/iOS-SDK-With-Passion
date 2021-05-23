/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString, UNUserNotificationCenter;

@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject

{
    UNUserNotificationCenter *_userNotificationCenter;
}

@property (nonatomic, readonly) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id <UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBundleIdentifier:(id)arg1;
- (id)notificationSettings;
- (void)setNotificationCategories:(id)arg1;
- (id)notificationCategories;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (id)deliveredNotifications;
- (void)removeAllDeliveredNotifications;
- (id)notificationSettingsForTopics;
- (_Bool)addNotificationRequest:(id)arg1 error:(id *)arg2;
- (_Bool)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 error:(id *)arg3;

@end
