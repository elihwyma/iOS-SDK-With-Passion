/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSArray, NSMutableSet, NSSet;

@protocol CalendarEventLoaderDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CalendarEventLoader : NSObject

{
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_occurrencesLock;
    NSArray *_loadedOccurrences;
    NSArray *_loadedProposedTimeOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSSet *_selectedCalendars;
    _Bool _selectedCalendarsWereSet;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    unsigned long long _componentForExpandingRequests;
    unsigned long long _componentForExpandingPadding;
    double _preferredReloadStart;
    double _preferredReloadEnd;
    NSObject<OS_dispatch_group> *_loadGroup;
    NSObject<OS_dispatch_queue> *_loadQueue;
    int _cancelSeed;
    double _loadedStart;
    double _loadedEnd;
    _Bool _loadedOccurrencesAreStale;
    double _currentlyLoadingStart;
    double _currentlyLoadingEnd;
    double _lastRequestedStart;
    double _lastRequestedEnd;
    _Bool _allowEventLocationPrediction;
    id <CalendarEventLoaderDelegate> _delegate;
}

@property (weak, nonatomic) id <CalendarEventLoaderDelegate> delegate;
@property (nonatomic) _Bool allowEventLocationPrediction;

- (void)dealloc;
- (void)setPadding:(unsigned int)arg1;
- (void)loadIfNeeded;
- (void)_eventStoreChanged:(id)arg1;
- (void)_pruneLoadedOccurrences;
- (void)_reload;
- (void)setCacheLimit:(unsigned int)arg1;
- (void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double *)arg4 resultEnd:(double *)arg5;
- (void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(_Bool)arg3;
- (void)waitForBackgroundLoad;
- (void)_getLoadStart:(double *)arg1 end:(double *)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double *)arg5 resultEnd:(double *)arg6;
- (void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2;
- (id)_uniqueEventsFromArray:(id)arg1;
- (void)cancelAllLoads;
- (id)initWithEventStore:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)setSelectedCalendars:(id)arg1;
- (_Bool)loadIsComplete;
- (void)timeZoneChanged;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(_Bool)arg3 waitForLoad:(_Bool)arg4;
- (_Bool)firstLoadBegan;

@end
