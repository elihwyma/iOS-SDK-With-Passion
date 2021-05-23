/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNCalendarCoreLocationManager, CALNTriggeredEventNotificationMailtoURLProvider, NSString;

@protocol CALNAlarmEngineMonitor, CALNDataSourceEventRepresentationProvider, CALNDebugPreferences, CALNFoundInAppsEventTracker, CALNRemoteMutator, CALNRouteHypothesizerProvider, CALNStats, CALNSuggestionsServiceLogger, CALNTTLEventTracker, CALNTimeToLeaveRefreshMonitor, CALNTravelEngine, CALNTriggeredEventNotificationDataSourceDelegate, EKEventStoreProvider;

@interface CALNTriggeredEventNotificationEKDataSource : NSObject

{
    id <CALNTriggeredEventNotificationDataSourceDelegate> _delegate;
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNRemoteMutator> _remoteMutator;
    id <CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
    CALNCalendarCoreLocationManager *_coreLocationManager;
    id <CALNStats> _stats;
    id <CALNTTLEventTracker> _ttlEventTracker;
    id <CALNAlarmEngineMonitor> _alarmEngineMonitor;
    id <CALNTravelEngine> _travelEngine;
    id <CALNFoundInAppsEventTracker> _foundInAppsEventTracker;
    id <CALNSuggestionsServiceLogger> _suggestionsServiceLogger;
    id <CALNRouteHypothesizerProvider> _routeHypothesizerProvider;
    id <CALNTimeToLeaveRefreshMonitor> _timeToLeaveRefreshMonitor;
    id <CALNDebugPreferences> _debugPreferences;
    CALNTriggeredEventNotificationMailtoURLProvider *_mailtoURLProvider;
}

@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) id <CALNRemoteMutator> remoteMutator;
@property (nonatomic, readonly) id <CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (nonatomic, readonly) CALNCalendarCoreLocationManager *coreLocationManager;
@property (nonatomic, readonly) id <CALNStats> stats;
@property (nonatomic, readonly) id <CALNTTLEventTracker> ttlEventTracker;
@property (nonatomic, readonly) id <CALNAlarmEngineMonitor> alarmEngineMonitor;
@property (nonatomic, readonly) id <CALNTravelEngine> travelEngine;
@property (nonatomic, readonly) id <CALNFoundInAppsEventTracker> foundInAppsEventTracker;
@property (nonatomic, readonly) id <CALNSuggestionsServiceLogger> suggestionsServiceLogger;
@property (nonatomic, readonly) id <CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (nonatomic, readonly) id <CALNTimeToLeaveRefreshMonitor> timeToLeaveRefreshMonitor;
@property (nonatomic, readonly) id <CALNDebugPreferences> debugPreferences;
@property (nonatomic, readonly) CALNTriggeredEventNotificationMailtoURLProvider *mailtoURLProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CALNTriggeredEventNotificationDataSourceDelegate> delegate;

+ (id)_alarmForEvent:(id)arg1 withAlarmID:(id)arg2;
+ (id)_alarmDateForAlarm:(id)arg1 eventStartDate:(id)arg2;
+ (id)_sourceClientIdentifierForAlertInfo:(id)arg1;
+ (double)snoozeInterval;

- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
- (void)_alertsFired:(id)arg1;
- (_Bool)_shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1 event:(id)arg2 alarmID:(id)arg3;
- (id)_eventForEventID:(id)arg1;
- (id)_notificationExpirationDateForNullableAlarmDate:(id)arg1 eventEndDate:(id)arg2;
- (id)_notificationExpirationDateForAlarmDate:(id)arg1 eventEndDate:(id)arg2;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 eventID:(id)arg2;
- (void)_didSetUpTimeToLeaveRefreshTimerForEventID:(id)arg1 triggerDate:(id)arg2;
- (void)removeTimeToLeaveRefreshTimerForEventID:(id)arg1;
- (double)_requestHypothesisRefreshInterval;
- (void)ceaseRouteMonitoringEventWithEventID:(id)arg1;
- (void)_handleNotificationActionForSourceClientIdentifier:(id)arg1 acknowledgeAlarm:(_Bool)arg2 eventActions:(CDUnknownBlockType)arg3;
- (id)_eventForSourceClientIdentifier:(id)arg1;
- (void)_alertFiredForAlertInfo:(id)arg1;
- (_Bool)_shouldTriggerForAlertInfo:(id)arg1;
- (void)travelEngine:(id)arg1 receivedHypothesis:(id)arg2 eventExternalURL:(id)arg3;
- (void)travelEngine:(id)arg1 eventSignificantlyChangedWithEventExternalURL:(id)arg2;
- (void)travelEngine:(id)arg1 authorizationChanged:(_Bool)arg2;
- (void)timeToLeaveRefreshMonitor:(id)arg1 refreshTimerFiredForEventExternalURL:(id)arg2;
- (id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)arg1 isProtectedDataAvailable:(_Bool)arg2;
- (_Bool)shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1;
- (_Bool)shouldRemoveNotificationMetaDataWithEventID:(id)arg1;
- (_Bool)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
- (id)notificationExpirationDateForEventID:(id)arg1 alarmID:(id)arg2;
- (void)acknowledgeEventWithSourceClientIdentifier:(id)arg1 shouldMarkAsHavingReceivedLocation:(_Bool)arg2;
- (void)snoozeEventWithSourceClientIdentifier:(id)arg1;
- (void)handleDirectionsActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3;
- (void)handleConferenceCallActionWithSourceClientIdentifier:(id)arg1;
- (void)handleMailOrganizerActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2;
- (id)eventObjectIDForEventID:(id)arg1;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1;
- (void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1;
- (void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 travelAdvisoryTimelinessPeriod:(unsigned long long)arg3;
- (void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)arg1;
- (id)initWithEventStoreProvider:(id)arg1 remoteMutator:(id)arg2 dataSourceEventRepresentationProvider:(id)arg3 coreLocationProvider:(id)arg4 stats:(id)arg5 ttlEventTracker:(id)arg6 alarmEngineMonitor:(id)arg7 travelEngine:(id)arg8 foundInAppsEventTracker:(id)arg9 suggestionsServiceLogger:(id)arg10 routeHypothesizerProvider:(id)arg11 timeToLeaveRefreshMonitor:(id)arg12 debugPreferences:(id)arg13 mailtoURLProvider:(id)arg14;

@end
