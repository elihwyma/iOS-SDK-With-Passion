/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSDateComponents;

@protocol CalDAVCalendar;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup

{
    int _fetchingEtagState;
    _Bool _getScheduleTags;
    _Bool _getScheduleChanges;
    _Bool _syncEvents;
    _Bool _syncTodos;
    _Bool _supportsExtendedCalendarQuery;
    _Bool _fallbackOnMultiGetError;
    id <CalDAVCalendar> _calendar;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
}

@property (retain, nonatomic) id <CalDAVCalendar> calendar;
@property (nonatomic) _Bool getScheduleTags;
@property (nonatomic) _Bool getScheduleChanges;
@property (nonatomic) _Bool syncEvents;
@property (nonatomic) _Bool syncTodos;
@property (nonatomic) _Bool supportsExtendedCalendarQuery;
@property (nonatomic) _Bool fallbackOnMultiGetError;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)dataContentType;
- (_Bool)_shouldFetchEventsForState:(int)arg1;
- (_Bool)_shouldFetchTodosForState:(int)arg1;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (_Bool)shouldFetchMoreETags;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (_Bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(_Bool)arg5 getScheduleChanges:(_Bool)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(_Bool)arg4 getScheduleChanges:(_Bool)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;

@end
