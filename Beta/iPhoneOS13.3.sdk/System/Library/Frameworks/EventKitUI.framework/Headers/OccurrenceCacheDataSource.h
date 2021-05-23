/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSArray, NSSet, NSString;

@interface OccurrenceCacheDataSource : NSObject

{
    EKEventStore *_eventStore;
    NSSet *_calendars;
    NSArray *_cachedDays;
    int _cachedDaysSeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)_cachedDays;
- (long long)cachedDayCount;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (_Bool)supportsInvitations;
- (_Bool)supportsFakeTodaySection;
- (_Bool)cachedOccurrencesAreLoaded;
- (_Bool)cachedOccurrencesAreBeingGenerated;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (id)dateAtDayIndex:(long long)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (void)invalidateCachedOccurrences;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;

@end
