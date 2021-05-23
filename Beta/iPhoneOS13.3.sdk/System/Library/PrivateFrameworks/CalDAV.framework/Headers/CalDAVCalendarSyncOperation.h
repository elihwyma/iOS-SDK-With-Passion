/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/CalDAVOperation.h>

@class NSError, NSString;

@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation

{
    NSError *_savedError;
    NSString *_nextCtag;
    NSString *_nextSyncToken;
    id <CalDAVCalendar> _calendar;
    NSError *_reportJunkError;
    unsigned long long _currentStage;
    _Bool _getScheduleTags;
    _Bool _getScheduleChanges;
}

@property (nonatomic) id <CalDAVCalendarSyncDelegate> delegate;
@property (nonatomic) _Bool getScheduleTags;
@property (nonatomic) _Bool getScheduleChanges;

- (void)_finishWithError:(id)arg1;
- (void)_reportJunk;
- (void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6;
- (void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2;
- (id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4;
- (void)syncCalendar;
- (_Bool)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
- (void)_performNextStage;
- (void)_advanceStage;
- (void)_splitRecurrences;
- (void)_syncCalendar;
- (id)_distantFutureEndDate;
- (void)_processAddedOrModified:(id)arg1 removed:(id)arg2;
- (void)_syncEventsForMerge;
- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (_Bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
- (_Bool)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (_Bool)syncDeleteTask:(id)arg1 error:(id)arg2;
- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;

@end
