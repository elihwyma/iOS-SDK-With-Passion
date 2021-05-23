/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@class CLSCalendarEventsCache, CNContact, CNContactStore, NSMutableSet;

@interface CLSSocialServiceCalendar

{
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSCalendarEventsCache *_calendarEventsCache;
    NSMutableSet *_prefetchedDateIntervals;
}

+ (_Bool)_isEventInMeetingRoom:(id)arg1;
+ (id)relevantCalendars:(id)arg1;
+ (_Bool)shouldKeepEvent:(id)arg1 withClueCollection:(id)arg2;
+ (_Bool)_isCalendarRelevant:(id)arg1;
+ (_Bool)eventAtLocation:(id)arg1 withAttendeeNames:(id)arg2 matchesClueCollection:(id)arg3;

- (id)meContact;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;
- (id)_fullNameWithContact:(id)arg1;
- (id)eventFromProxyEvent:(id)arg1;
- (id)eventsForDates:(id)arg1;
- (void)invalidateMemoryCaches;
- (_Bool)_sortedAssetCollections:(id)arg1 containsEvent:(id)arg2;
- (_Bool)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2;
- (void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateEventsFromDate:(id)arg1 toDate:(id)arg2 fetchIfNeeded:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)eventsForClueCollection:(id)arg1;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3;
- (id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(_Bool)arg2;

@end
