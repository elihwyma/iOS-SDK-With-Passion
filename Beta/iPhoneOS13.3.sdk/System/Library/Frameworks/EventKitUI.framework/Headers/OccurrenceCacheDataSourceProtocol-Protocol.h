/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/Swift-Protocol.h>

@protocol OccurrenceCacheDataSourceProtocol <Swift>

- (unsigned short)invalidate;
- (unsigned short)cachedDayCount;
- (unsigned short)initWithEventStore:calendars: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsInvitations;
- (unsigned short)supportsFakeTodaySection;
- (unsigned short)cachedOccurrencesAreLoaded;
- (unsigned short)cachedOccurrencesAreBeingGenerated;
- (unsigned short)countOfOccurrencesAtDayIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)dateAtDayIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)cachedOccurrenceAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionForCachedOccurrencesOnDate: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateCachedOccurrences;
- (unsigned short)fetchDaysInBackgroundStartingFromSection: /* Error: Ran out of types for this method. */;
- (unsigned short)searchWithTerm: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSearching;

@end
