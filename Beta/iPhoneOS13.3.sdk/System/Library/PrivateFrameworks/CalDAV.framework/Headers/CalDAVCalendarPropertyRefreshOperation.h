/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/CalDAVOperation.h>

#import <CalDAV/Swift-Protocol.h>

@class NSError, NSMutableDictionary, NSMutableSet, NSObject, NSString;

@protocol CalDAVCalendarPropertyRefreshDelegate, OS_dispatch_group;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <Swift>

{
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    NSMutableSet *_updatedCalendars;
    _Bool _didFinish;
    _Bool _didMakeCalendars;
    _Bool _isSecondRefresh;
    int _nextCalendarOrder;
    _Bool _useCalendarHomeSyncReport;
    _Bool _forceClearCalendarHomeSyncToken;
    NSString *_calendarHomeSyncToken;
    NSObject<OS_dispatch_group> *_outstandingTasksGroup;
}

@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingTasksGroup;
@property (nonatomic) _Bool forceClearCalendarHomeSyncToken;
@property (nonatomic) id <CalDAVCalendarPropertyRefreshDelegate> delegate;
@property (nonatomic) _Bool useCalendarHomeSyncReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPrincipal:(id)arg1;
- (void)refreshCalendarProperties;
- (void)_initializePrincipalCalendarCache;
- (void)_reallyRefreshCalendarProperties;
- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;
- (void)_sendDeletesForCalendars;
- (void)_sendAddsForCalendars;
- (void)_handleCalendarPublish;
- (void)_sendShareActionTasks;
- (void)_prepareCalendarsBeforeRefresh;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)arg1 atURL:(id)arg2;
- (id)_getIsAffectingAvailabilityCoreDAVItem:(id)arg1;
- (id)_generateTimeZoneString:(id)arg1;
- (_Bool)_handleMkCalTaskGroupError:(id)arg1 forCalendar:(id)arg2;
- (void)_retryMkCalForCalendar:(id)arg1;
- (int)_sharingStatusForContainer:(id)arg1;
- (id)_getSetIsAffectingAvailabilityTask:(_Bool)arg1 forCalendar:(id)arg2 atURL:(id)arg3;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (_Bool)_handleUpdateForCalendar:(id)arg1;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(_Bool)arg2;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)_finishRefresh;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;

@end
