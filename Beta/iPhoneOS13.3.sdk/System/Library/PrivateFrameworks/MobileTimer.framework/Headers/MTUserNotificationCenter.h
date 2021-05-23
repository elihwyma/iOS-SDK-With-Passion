/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTUserNotificationActionDispatcher, NSDictionary, NSString;

@interface MTUserNotificationCenter : NSObject

{
    NSDictionary *_notificationCenters;
    MTUserNotificationActionDispatcher *_actionHandler;
}

@property (retain, nonatomic) NSDictionary *notificationCenters;
@property (retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_timeFormatter;
+ (id)_snoozeCountdownIdentifier:(id)arg1;
+ (id)contentForScheduledAlarm:(id)arg1;
+ (id)requestIdentifierForScheduledAlarm:(id)arg1;
+ (id)_goToBedIdentifier:(id)arg1;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(_Bool)arg2;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(_Bool)arg2 includeSnooze:(_Bool)arg3;
+ (id)_allIdentifiersForAlarm:(id)arg1;
+ (id)contentForScheduledTimer:(id)arg1;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1;
+ (void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)launchURLForScheme:(id)arg1;
+ (id)userInfoForAlarm:(id)arg1;
+ (void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2;
+ (void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (id)_wakeUpAlarmStringForAlarm:(id)arg1 bundle:(struct __CFBundle *)arg2;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)userInfoForTimer:(id)arg1;
+ (id)notificationPrefixes;
+ (id)_durationComponentsFormatter;

- (id)init;
- (id)notificationCategories;
- (void)removeAllDeliveredNotifications;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(_Bool)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;
- (id)alarmCategories;
- (id)timerCategories;
- (id)bedtimeCategories;
- (void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_notificationCenterForScheduledAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(_Bool)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(_Bool)arg2 includeSnooze:(_Bool)arg3;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_notificationCenterForScheduledTimer;
- (void)setupNotificationCenter;
- (void)registerActionHandler:(id)arg1;
- (void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2;

@end
