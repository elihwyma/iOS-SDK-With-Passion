/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNUNNotificationContentMapper, CALNUNNotificationMapper, CALNUNNotificationRequestMapper, CALNUNNotificationResponseMapper, NSString;

@protocol CALNNotificationStorage, CALNUNUserNotificationCenterProtocol, CALNUserNotificationCenterDelegate;

@interface CALNUNUserNotificationCenter : NSObject

{
    _Bool _active;
    id <CALNUserNotificationCenterDelegate> _delegate;
    id <CALNUNUserNotificationCenterProtocol> _userNotificationCenter;
    id <CALNNotificationStorage> _storage;
    CALNUNNotificationMapper *_notificationMapper;
    CALNUNNotificationRequestMapper *_notificationRequestMapper;
    CALNUNNotificationContentMapper *_notificationContentMapper;
    CALNUNNotificationResponseMapper *_notificationResponseMapper;
}

@property (nonatomic, readonly) id <CALNUNUserNotificationCenterProtocol> userNotificationCenter;
@property (nonatomic, readonly) id <CALNNotificationStorage> storage;
@property (nonatomic, readonly) CALNUNNotificationMapper *notificationMapper;
@property (nonatomic, readonly) CALNUNNotificationRequestMapper *notificationRequestMapper;
@property (nonatomic, readonly) CALNUNNotificationContentMapper *notificationContentMapper;
@property (nonatomic, readonly) CALNUNNotificationResponseMapper *notificationResponseMapper;
@property (nonatomic, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CALNUserNotificationCenterDelegate> delegate;

+ (void)_addSettingName:(id)arg1 value:(id)arg2 toStatsPayload:(id)arg3 forTopicIdentifier:(id)arg4;
+ (id)_statsPayloadKeyForSettingName:(id)arg1 topicIdentifier:(id)arg2;

- (void)activate;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)deactivate;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setNotificationCategories:(id)arg1;
- (id)notificationCategories;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (id)deliveredNotifications;
- (void)removeAllDeliveredNotifications;
- (_Bool)addNotificationRequest:(id)arg1 error:(id *)arg2;
- (_Bool)replaceNotificationRequest:(id)arg1 error:(id *)arg2;
- (id)_updatedRecord:(id)arg1;
- (void)collectSettingsStats:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 userNotificationCenterFactory:(id)arg2 storage:(id)arg3 notificationIconCache:(id)arg4;

@end
