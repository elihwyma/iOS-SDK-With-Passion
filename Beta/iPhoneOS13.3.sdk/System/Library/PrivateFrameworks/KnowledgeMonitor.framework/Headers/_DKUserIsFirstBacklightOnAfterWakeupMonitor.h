/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDate, NSString, _DKEvent, _DKPeriod;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor

{
    _DKPeriod *eligibleForNotification;
    int displayStatusNotifyToken;
    int internalSettingChangedNotificationToken;
    _Bool _enabled;
    _Bool _FirstWakeUINotificationEnabled;
    _Bool _SoftwareUpdateUINotificationEnabled;
}

@property (nonatomic) _Bool FirstWakeUINotificationEnabled;
@property (nonatomic) _Bool SoftwareUpdateUINotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType instantHandler;
@property (nonatomic, readonly) _DKEvent *currentEvent;
@property (copy, nonatomic) CDUnknownBlockType historicalHandler;
@property (copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;

+ (id)eventStream;
+ (id)prettyPrintDateAsLocalTime:(id)arg1;
+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+ (id)fetchMostRecentPastEventForStream:(id)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)receiveNotificationEvent:(id)arg1;
- (void)deactivate;
- (_Bool)isInternalBuild;
- (_Bool)didQualifyingScreenLockEndInEligibilityPeriod;
- (_Bool)isUINotificationEnabledForKey:(id)arg1;
- (void)setUINotificationEligibility;
- (id)convertUTCToLocalTimeString:(id)arg1;
- (id)getNextSWUpdatePrediction;
- (void)showUINotification:(id)arg1;
- (id)firstWakeupEventWithValue:(_Bool)arg1;
- (void)recordFirstWakeup:(id)arg1;
- (_Bool)isFirstBacklightOn;
- (_Bool)eligibleForFirstWakeUINotification;
- (void)showSoftwareUpdateUINotification;
- (void)showFirstWakeupUINotification;
- (void)handleScreenUnlockEvent;
- (void)setupNotificationEligiblityPeriod;
- (void)handleBacklightTurnedOffEvent;
- (void)handleBacklightTurnedOnEvent;
- (void)registerHandleBacklightEvents;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)unregisterHandleBacklightEvents;

@end
