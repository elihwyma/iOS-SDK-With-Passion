/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, PLCFNotificationOperatorComposition, PLEntry, PLEntryNotificationOperatorComposition, PLMonotonicTimer, PLNSNotificationOperatorComposition, PLTimer, PLXPCListenerOperatorComposition;

@interface PLSpringBoardAgent : PLAgent

{
    _Bool _autoLockIsNil;
    _Bool _deviceIsCharging;
    PLNSNotificationOperatorComposition *_notificationSBScreenTimeTrackingChanged;
    PLCFNotificationOperatorComposition *_notificationSBLockTrackingChanged;
    PLCFNotificationOperatorComposition *_notificationSBBlankTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBWallpaperTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBAutoLockTimerFiredNotification;
    PLTimer *_dailyWallpaperPoll;
    PLEntryNotificationOperatorComposition *_displayOnNotification;
    PLEntryNotificationOperatorComposition *_displayOffNotification;
    PLEntryNotificationOperatorComposition *_receivedPushNotification;
    PLXPCListenerOperatorComposition *_userNotificationRequestEvent;
    PLXPCListenerOperatorComposition *_userNotificationTriggerEvent;
    PLXPCListenerOperatorComposition *_bulletinBoardNotificationPublishEvent;
    PLMonotonicTimer *_autolockEnergyPeriodicTimer;
    NSDate *_lastEligibleAutolockEnergyComputationDate;
    NSDictionary *_screenNumberToName;
    PLEntryNotificationOperatorComposition *_deviceChargingStateNotification;
    PLEntry *_lastSBEntry;
    PLEntry *_lastReceivedPushEntry;
}

@property (readonly) PLNSNotificationOperatorComposition *notificationSBScreenTimeTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBLockTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBBlankTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBWallpaperTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBAutoLockTimerFiredNotification;
@property (retain) PLTimer *dailyWallpaperPoll;
@property _Bool autoLockIsNil;
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *receivedPushNotification;
@property (readonly) PLXPCListenerOperatorComposition *userNotificationRequestEvent;
@property (readonly) PLXPCListenerOperatorComposition *userNotificationTriggerEvent;
@property (readonly) PLXPCListenerOperatorComposition *bulletinBoardNotificationPublishEvent;
@property (retain) PLMonotonicTimer *autolockEnergyPeriodicTimer;
@property (retain) NSDate *lastEligibleAutolockEnergyComputationDate;
@property (retain) NSDictionary *screenNumberToName;
@property _Bool deviceIsCharging;
@property (retain) PLEntryNotificationOperatorComposition *deviceChargingStateNotification;
@property (retain) PLEntry *lastSBEntry;
@property (retain, nonatomic) PLEntry *lastReceivedPushEntry;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointAutoLock;
+ (id)entryEventPointLocalRemoteNotifications;
+ (id)entryEventPointBulletins;
+ (id)entryEventForwardDefinitionBlank;
+ (id)entryEventForwardDefinitionLock;
+ (id)entryEventForwardDefinitionScreen;
+ (id)entryEventForwardDefinitionWallpaper;
+ (id)entryAggregateDefinitionNotifications;
+ (id)entryAggregateDefinitionBulletins;

- (id)init;
- (void)dealloc;
- (void)log;
- (double)currentMediaTime;
- (void)initOperatorDependancies;
- (void)setUpScreenNumberDictionary;
- (void)resetAutoLockIsNil;
- (void)settingsChangedNotification:(id)arg1;
- (void)addAccountingEvent:(id)arg1;
- (id)fetchSBWallpaperForType:(int)arg1;
- (void)handleChargingStateChange:(id)arg1;
- (void)startAutolockEnergyPeriodicTimer;
- (void)stopAutolockEnergyPeriodicTimer;
- (void)logBulletin:(id)arg1;
- (void)logNotification:(id)arg1;
- (void)logMailNotification:(id)arg1;
- (void)computeAutolockEnergyWithNow:(id)arg1;
- (id)screenLock:(id)arg1;
- (id)addCountsAndDurationsFor:(id)arg1 toEntry:(id)arg2;
- (void)closeLastOpenEventsWithStopDate:(id)arg1;

@end
