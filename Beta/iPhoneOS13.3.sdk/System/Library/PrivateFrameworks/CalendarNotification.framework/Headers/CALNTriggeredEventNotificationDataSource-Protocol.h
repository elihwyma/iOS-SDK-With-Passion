/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@protocol CALNTriggeredEventNotificationDataSourceDelegate;

@protocol CALNTriggeredEventNotificationDataSource

@property (weak, nonatomic) id <CALNTriggeredEventNotificationDataSourceDelegate> delegate;

- (unsigned short)didDismissUINotification:forPlannedDestination:dismissalType: /* Error: Ran out of types for this method. */;
- (unsigned short)setUpTimeToLeaveRefreshTimerWithTriggerDate:eventID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTimeToLeaveRefreshTimerForEventID: /* Error: Ran out of types for this method. */;
- (unsigned short)ceaseRouteMonitoringEventWithEventID: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:isProtectedDataAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldWithdrawNotificationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldRemoveNotificationMetaDataWithEventID: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:eventID: /* Error: Ran out of types for this method. */;
- (unsigned short)notificationExpirationDateForEventID:alarmID: /* Error: Ran out of types for this method. */;
- (unsigned short)acknowledgeEventWithSourceClientIdentifier:shouldMarkAsHavingReceivedLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)snoozeEventWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)handleDirectionsActionWithSourceClientIdentifier:hypothesis:lastFireTimeOfAlertOffsetFromTravelTime: /* Error: Ran out of types for this method. */;
- (unsigned short)handleConferenceCallActionWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)handleMailOrganizerActionWithSourceClientIdentifier:hypothesis: /* Error: Ran out of types for this method. */;
- (unsigned short)eventObjectIDForEventID: /* Error: Ran out of types for this method. */;
- (unsigned short)setUpTimeToLeaveRefreshTimerWithTriggerDate:sourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTimeToLeaveRefreshTimerForSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)ceaseRouteMonitoringEventForSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:hypothesis:travelAdvisoryTimelinessPeriod: /* Error: Ran out of types for this method. */;
- (unsigned short)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;

@end
