/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@protocol CalSearchDataSink;

@interface CalSearch : NSObject

{
    struct CalDatabase *_database;
    struct CalFilter *_filter;
    struct __CFString *_searchString;
    int _seed;
    id <CalSearchDataSink> _dataSink;
    _Bool _dateToStartShowingResultsSentToDataSink;
    _Bool _moreResultsAvailable;
    struct __CFArray *_partialResults;
    struct __CFArray *_partialCachedOccurrences;
    struct __CFArray *_partialCachedDays;
    struct __CFArray *_partialCachedDaysIndexes;
    struct __CFSet *_matchedEventsSet;
    struct __CFSet *_matchedParticipantsSet;
    struct __CFSet *_matchedLocationsSet;
    _Bool _stopLoadingResults;
    struct _opaque_pthread_mutex_t _dataSourceDeallocLock;
    _Bool _implementsCancellationCallback;
    _Bool _searchParticipants;
    _Bool _searchLocations;
    _Bool _searchAttendees;
    _Bool _shouldMatchLocationsOnlyForEventSearch;
}

@property _Bool searchParticipants;
@property _Bool searchLocations;
@property _Bool searchAttendees;
@property _Bool shouldMatchLocationsOnlyForEventSearch;

- (void)dealloc;
- (int)seed;
- (void)startSearching;
- (void)stopSearching;
- (id)initWithDatabase:(struct CalDatabase *)arg1 filter:(struct CalFilter *)arg2 dataSink:(id)arg3;
- (void)_startLoadingResults;
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg1;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg1;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg1;
- (struct CalEventIdsSearchContext *)_createEventIdsSearchContext;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg1;
- (struct CalEventOccurrenceSearchContext *)_createSearchContext;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg1;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg1;
- (void)_addMatchedEventIds:(struct __CFArray *)arg1;
- (_Bool)moreResultsAvailable;

@end
