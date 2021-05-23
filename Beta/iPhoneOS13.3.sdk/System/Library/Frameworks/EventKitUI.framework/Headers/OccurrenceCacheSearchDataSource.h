/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource

{
    EKOccurrenceCacheSearch *_search;
    NSMutableArray *_processingCachedDays;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _resultsLock;
}

- (void)dealloc;
- (void)invalidate;
- (id)_cachedDays;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (_Bool)supportsInvitations;
- (_Bool)supportsFakeTodaySection;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;
- (void)_setCachedDaysAndNotify:(id)arg1;

@end
