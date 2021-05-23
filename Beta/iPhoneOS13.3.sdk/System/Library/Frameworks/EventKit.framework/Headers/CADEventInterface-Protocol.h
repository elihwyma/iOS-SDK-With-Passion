/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@protocol CADEventInterface

- (unsigned short)CADOccurrenceCacheSearchWithTerm:inCalendars:responseToken:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheCancelSearchWithReplyID: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetDefaultLocalCalendarWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseSetDefaultCalendarForNewEvents:delegateSource: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetEventWithEventIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetEventWithUniqueID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetAllEventsWithUniqueID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetCountOfUnacknowledgedEvents: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetCountOfNotifiableEvents: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:timeZone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseSetShowsDeclinedEvents: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetSuggestedEventCalendarWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseCanModifySuggestedEventCalendar: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseInsertSuggestedEventCalendarWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseRemoveSuggestedEventCalendarWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseActOnSuggestedEvent:action:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheAreOccurrencesBeingGenerated: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheGetOccurrenceCountsForCalendars:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheGetOccurrenceForCalendars:onDay:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:nearestDate:prefersForwardSearch:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheDoEvents:haveOccurrencesAfterDate:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrenceCacheSearchLocationsWithTerm:inCalendars:responseToken:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADOccurrencesExistInRangeForEvent:startDate:endDate:mustStartInInterval:timezone:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:reply: /* Error: Ran out of types for this method. */;

@end
