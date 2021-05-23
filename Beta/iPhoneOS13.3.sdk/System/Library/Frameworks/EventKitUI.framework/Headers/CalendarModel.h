/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class CalendarEventLoader, CalendarModelSceneState, EKCalendarDate, EKEvent, EKEventStore, EKSource, NSArray, NSCalendar, NSLock, NSMutableDictionary, NSSet, NSString, _EKNotificationMonitor;

@protocol OccurrenceCacheDataSourceProtocol;

@interface CalendarModel : NSObject

{
    _Bool _modelLocked;
    _Bool _notificationMonitorSetUp;
    EKEventStore *_eventStore;
    CalendarEventLoader *_eventLoader;
    NSLock *_filterLock;
    NSArray *_visibleCalendars;
    long long _readWriteCalendarCount;
    NSArray *_delegateSources;
    long long _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    id <OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
    id <OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
    long long _cachedFakeTodayIndex;
    NSMutableDictionary *_displayableAccountErrorCounts;
    long long _initialAccountSyncCount;
    _Bool _suspendSelectedDateChanges;
    EKCalendarDate *_suspendedSelectedDate;
    CalendarModelSceneState *_persistedSceneState;
    _Bool _autoStartNotificationMonitor;
    NSSet *_selectedCalendars;
    NSString *_searchString;
    NSCalendar *_calendar;
    EKCalendarDate *_selectedDate;
    unsigned long long _firstVisibleSecond;
    EKEvent *_selectedOccurrence;
    EKSource *_sourceForSelectedIdentity;
    NSArray *_sortedEnabledDelegates;
    NSString *_sceneIdentifier;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) EKCalendarDate *selectedDate;
@property (nonatomic, readonly) EKCalendarDate *selectedDay;
@property (nonatomic, readonly) long long readWriteCalendarCount;
@property (nonatomic, readonly) long long accountsInInitialSyncCount;
@property (nonatomic, readonly) _Bool currentlyLocked;
@property (nonatomic) unsigned long long firstVisibleSecond;
@property (retain, nonatomic) EKEvent *selectedOccurrence;
@property (retain, nonatomic) NSSet *selectedCalendars;
@property (copy, nonatomic) NSSet *unselectedCalendars;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) _Bool showDayAsList;
@property (nonatomic) _Bool showMonthAsDivided;
@property (retain, nonatomic, readonly) EKSource *sourceForSelectedIdentity;
@property (retain, nonatomic) NSArray *sortedEnabledDelegates;
@property (nonatomic, readonly) _Bool containsDelegateSources;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) _Bool autoStartNotificationMonitor;
@property (nonatomic) _Bool allowEventLocationPrediction;

+ (void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)arg1;
+ (id)sortedEnabledDelegateSourcesFromStore:(id)arg1;
+ (unsigned long long)errorForSource:(id)arg1;
+ (id)calendarModelWithDataPath:(id)arg1;
+ (id)calendarModelWithEventStore:(id)arg1;

- (id)init;
- (void)dealloc;
- (double)_tomorrow;
- (void)_localeChanged:(id)arg1;
- (_Bool)cachedOccurrencesAreLoaded;
- (_Bool)cachedOccurrencesAreBeingGenerated;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (id)defaultCalendarForNewEvents;
- (void)_eventStoreChanged:(id)arg1;
- (void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 wasEmptyLoad:(_Bool)arg4;
- (id)initWithEventStore:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(_Bool)arg3 waitForLoad:(_Bool)arg4;
- (id)refreshAccountListIfNeeded:(_Bool)arg1;
- (id)refreshCalendarDataIfNeeded:(_Bool)arg1;
- (id)initWithDataPath:(id)arg1;
- (void)_performCommonInitialization;
- (void)_createOccurrenceCacheDataSources;
- (void)_significantTimeChange:(id)arg1;
- (void)_tzSupportTodayRolledOver;
- (void)_timeZoneChanged:(id)arg1;
- (void)_searchResultsAvailable:(id)arg1;
- (void)_sceneEnteredBackground:(id)arg1;
- (void)_ignoredErrorsChanged;
- (void)_sceneEnteredForeground:(id)arg1;
- (void)_invalidateOccurrenceCacheDataSources;
- (void)_loadVisibleCalendarsIfNeeded;
- (_Bool)_setSelectedCalendars:(id)arg1;
- (void)postSelectedCalendarsChanged;
- (id)_calendarsForCurrentIdentityFromCalendars:(id)arg1 lock:(_Bool)arg2;
- (void)_recreateOccurrenceCacheDataSources;
- (void)_processReloadForCacheOnly:(_Bool)arg1 includingCalendars:(_Bool)arg2 checkCalendarsValid:(_Bool)arg3 checkSources:(_Bool)arg4;
- (void)setSourceForSelectedIdentity:(id)arg1;
- (_Bool)_eventBelongsToCurrentIdentity:(id)arg1;
- (void)setSelectedCalendarsAndRequestPreferenceSave:(id)arg1;
- (void)updateSourceForSelectedIdentity:(id)arg1 selectedCalendars:(id)arg2;
- (id)calendarsForCurrentIdentityFromCalendars:(id)arg1;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(_Bool)arg2;
- (long long)numberOfDaysWithCachedOccurrencesUsingFilter:(_Bool)arg1;
- (id)_dataSourceUsingFilter:(_Bool)arg1;
- (id)dateForCachedOccurrencesInSection:(long long)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(_Bool)arg2;
- (id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(_Bool)arg2;
- (id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(_Bool)arg2;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(_Bool *)arg2 usingFilter:(_Bool)arg3;
- (long long)cachedFakeTodayIndex;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(_Bool *)arg2;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(_Bool)arg2;
- (void)_invalidateCachedOccurrences;
- (void)_checkSources;
- (_Bool)countSourcesWithErrors;
- (long long)countAccountsInInitialSync;
- (void)_finishedFirstLoad;
- (void)startNotificationMonitor;
- (id)_notificationMonitor;
- (void)_reloadIfTodayDetermined;
- (id)persistedSceneState;
- (void)_notificationsExpired:(id)arg1;
- (void)_notificationCountExpired:(id)arg1;
- (id)eventNotificationReferencesForIdentity:(id)arg1;
- (id)allEventNotificationReferences;
- (_Bool)selectedOccurrenceIsSearchMatch;
- (void)ensureCalendarVisibleWithId:(id)arg1;
- (_Bool)isCalendarVisibleWithID:(id)arg1;
- (void)setSelectedDateChangesDelayedUntilAfterTransition:(_Bool)arg1;
- (void)updateSelectedDateTimeZone;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(_Bool)arg3 waitForLoad:(_Bool)arg4;
- (id)selectedDateOccurrences:(_Bool)arg1 loadIsComplete:(_Bool *)arg2;
- (id)closestOccurrenceToTomorrowForEventUID:(int)arg1;
- (void)setDesiredPaddingDays:(unsigned int)arg1;
- (void)setMaxCachedDays:(unsigned int)arg1;
- (long long)numberOfDaysWithCachedOccurrences;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(_Bool)arg2;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1;
- (long long)displayableAccountErrorsForSource:(id)arg1;
- (void)simulateFirstLoadFinished;
- (void)_occurrenceCacheChanged;
- (void)updateAfterAppResume;
- (void)prepareForAppSuspend;
- (void)_systemWake;
- (_Bool)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id *)arg3;
- (_Bool)invitationBearingStoresExistForEvents;
- (unsigned long long)allEventNotificationsCount;
- (unsigned long long)eventNotificationsForCurrentIdentityCount;
- (id)eventNotificationReferencesForCurrentIdentity;
- (_Bool)searchingOccurrences;

@end
