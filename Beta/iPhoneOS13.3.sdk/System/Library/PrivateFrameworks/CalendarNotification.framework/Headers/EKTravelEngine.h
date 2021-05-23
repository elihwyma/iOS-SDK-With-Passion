/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, EKTimedEventStorePurger, NSMutableDictionary, NSString, PCPersistentTimer;

@protocol CALNRouteHypothesizerProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelEngine : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    _Bool _running;
    _Bool _needsRefresh;
    _Bool _databaseIsEncryptedAndUnreadable;
    _Bool _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    PCPersistentTimer *_periodicRefreshTimer;
    CLLocationManager *_locationManager;
    EKTimedEventStorePurger *_timedEventStorePurger;
    _Bool _authorizedInternal;
    CDUnknownBlockType _adviceBlock;
    CDUnknownBlockType _authorizationChangedBlock;
    CDUnknownBlockType _eventSignificantlyChangedBlock;
    id <CALNRouteHypothesizerProvider> _routeHypothesizerProvider;
}

@property (nonatomic, readonly) id <CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (nonatomic) _Bool authorizedInternal;
@property (copy, nonatomic) CDUnknownBlockType adviceBlock;
@property (nonatomic, readonly) _Bool authorized;
@property (copy, nonatomic) CDUnknownBlockType authorizationChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType eventSignificantlyChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestedDarwinNotifications;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)travelEligibleEvents:(id)arg1 fromStartDate:(id)arg2 untilEndDate:(id)arg3;
+ (double)_periodicRefreshInterval;
+ (double)requestRefreshTimeInterval;
+ (id)travelEligibleEventsInEventStore:(id)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_refreshIfNeeded;
- (void)handleDarwinNotification:(id)arg1;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
- (_Bool)_isProtectedDataAvailable;
- (void)_stopInternal;
- (void)_registerForNotificationObservation;
- (void)_installPeriodicRefreshTimer;
- (void)_installLocationManager;
- (void)_uninstallLocationManager;
- (void)_unregisterAllAgendaEntries;
- (void)_unregisterForNotificationObservation;
- (void)_uninstallSyncYieldTimer;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (void)_eventKitFeatureSetChanged;
- (void)_updateDatabaseEncryptionState;
- (void)_suggestEventLocationsSettingChanged;
- (id)btaJobName;
- (void)_periodicRefreshTimerFired:(id)arg1;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)arg1 feedback:(CDUnknownBlockType)arg2;
- (_Bool)isLocationManagerStatusAuthorized:(int)arg1;
- (void)_installSyncYieldTimer;
- (_Bool)_authorizedToAcquireLocation;
- (void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2;
- (id)initWithRouteHypothesizerProvider:(id)arg1;

@end
