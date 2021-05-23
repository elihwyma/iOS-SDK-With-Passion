/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@interface EKSourceConstraints : NSObject

{
    CDStruct_6a9d2bb3 _flags;
}

@property (nonatomic) int maxAlarmsAllowed;
@property (nonatomic) int maxRecurrencesAllowed;
@property (nonatomic) _Bool supportsAlarmTriggerIntervals;
@property (nonatomic) _Bool supportsAlarmTriggerDates;
@property (nonatomic) _Bool supportsAlarmsTriggeringAfterStartDate;
@property (nonatomic) _Bool snoozeAlarmRequiresDetach;
@property (nonatomic) _Bool organizerCanSeeAttendeeStatuses;
@property (nonatomic) _Bool inviteesCanSeeAttendeeStatuses;
@property (nonatomic) _Bool statusesAreAccurate;
@property (nonatomic) _Bool supportsIncomingInvitations;
@property (nonatomic) _Bool supportsOutgoingInvitations;
@property (nonatomic) _Bool requiresOutgoingInvitationsInDefaultCalendar;
@property (nonatomic) _Bool supportsInvitationModifications;
@property (nonatomic) _Bool supportsEventForwarding;
@property (nonatomic) _Bool supportsResponseComments;
@property (nonatomic) _Bool deliverySourceOrExternalIDRequiredForResponse;
@property (nonatomic) _Bool proposedStatusRequiredForResponse;
@property (nonatomic) _Bool declinedStatusChangeRequiresNoPendingStatus;
@property (nonatomic) _Bool eventDurationConstrainedToRecurrenceInterval;
@property (nonatomic) _Bool alarmTriggerIntervalConstrainedToRecurrenceInterval;
@property (nonatomic) _Bool occurrencesMustOccurOnSeparateDays;
@property (nonatomic) _Bool futureStartDateLimitedToOccurrenceCacheBounds;
@property (nonatomic) _Bool supportsRecurrencesOnDetachedEvents;
@property (nonatomic) _Bool recurrencesShouldPinToMonthDays;
@property (nonatomic) _Bool requiresAttendeeSearchInSingleAccount;
@property (nonatomic) _Bool mustAcknowledgeMasterEvent;
@property (nonatomic) _Bool canSetAvailability;
@property (nonatomic) _Bool eventAvailabilityLimited;
@property (nonatomic) _Bool requiresMSFormattedUID;
@property (nonatomic) _Bool shouldCancelDeletedEvents;
@property (nonatomic) _Bool shouldDeclineDeletedInvitations;
@property (nonatomic) _Bool supportsStructuredLocations;
@property (nonatomic) _Bool supportsReminderActions;
@property (nonatomic) _Bool supportsReminderLocations;
@property (nonatomic) _Bool supportsAlarmProximity;
@property (nonatomic) _Bool allowsCalendarAddDeleteModify;
@property (nonatomic) _Bool allowsTasks;
@property (nonatomic) _Bool allowsEvents;
@property (nonatomic) _Bool supportsURLField;
@property (nonatomic) _Bool supportsAllDayDueDates;
@property (nonatomic) _Bool supportsSharedCalendars;
@property (nonatomic) _Bool isFacebook;
@property (nonatomic) _Bool supportsPrivateEvents;
@property (nonatomic) _Bool prohibitsPrivateEventsWithAttendees;
@property (nonatomic) _Bool requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (nonatomic) _Bool supportsAvailabilityRequests;
@property (nonatomic) _Bool supportsIgnoringEventsInAvailabilityRequests;
@property (nonatomic) _Bool supportsLocationDirectorySearches;
@property (nonatomic) _Bool supportsInboxAvailability;
@property (nonatomic) _Bool recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
@property (nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) _Bool prohibitsYearlyRecurrenceInterval;
@property (nonatomic) _Bool requiresOccurrencesConformToRecurrenceRule;
@property (nonatomic) _Bool prohibitsDetachmentOnCommentChange;
@property (nonatomic) _Bool allowsProposeNewTime;
@property (nonatomic) _Bool prohibitsICSImport;
@property (nonatomic) _Bool supportsAutoGeocodingStructuredLocations;
@property (nonatomic) _Bool supportsJunkReporting;
@property (nonatomic) _Bool supportsPhoneNumbers;
@property (nonatomic) _Bool attendeesUseDeletedByOrganizerStatus;
@property (nonatomic) _Bool prohibitsSlicingEventsWithAttendees;
@property (nonatomic) _Bool supportsSubscribedCalendars;
@property (nonatomic) _Bool supportsAttachments;
@property (nonatomic) _Bool requiresOpeningAttachmentAsLink;
@property (nonatomic) _Bool shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
@property (nonatomic) _Bool supportsDelegation;
@property (nonatomic) _Bool supportsDelegateEnumeration;
@property (nonatomic) _Bool supportsRecurrenceSplit;

- (id)init;
- (id)initWithCDBSourceConstraintFlags:(CDStruct_6a9d2bb3)arg1;
- (_Bool)supportsFloatingTimeZone;
- (void)setSupportsFloatingTimeZone:(_Bool)arg1;
- (_Bool)prohibitsUsingEventOrganizerEmailWhenComposingMail;
- (void)setProhibitsUsingEventOrganizerEmailWhenComposingMail:(_Bool)arg1;

@end
