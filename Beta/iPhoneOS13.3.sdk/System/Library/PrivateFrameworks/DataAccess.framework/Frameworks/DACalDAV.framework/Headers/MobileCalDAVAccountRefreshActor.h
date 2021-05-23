/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class CalDAVRefreshContext, CalDiagAccountSync, DATransaction, MobileCalDAVAccount, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_group;

@interface MobileCalDAVAccountRefreshActor : NSObject

{
    DATransaction *_transaction;
    _Bool _shouldCancel;
    _Bool _didFinish;
    _Bool _refreshing;
    _Bool _refreshFoundUpdatedTaskContainer;
    _Bool _refreshFoundUpdatedSpecialCalendar;
    _Bool _refreshFoundDeletedContainerURL;
    int _state;
    CalDAVRefreshContext *_context;
    MobileCalDAVAccount *_account;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_pathsToCTags;
    NSMutableDictionary *_pathsToSyncTokens;
    NSMutableArray *_calendarsToRefresh;
    NSObject<OS_dispatch_group> *_outstandingOperationGroup;
    NSMutableSet *_outstandingTaskGroups;
    NSMutableSet *_outstandingTasks;
    NSString *_calendarHomeSyncToken;
    CalDiagAccountSync *_accountSyncDiagnostics;
    NSArray *_attachmentUUIDsToUpload;
}

@property (weak, nonatomic) MobileCalDAVAccount *account;
@property (retain, nonatomic) CalDAVRefreshContext *context;
@property (nonatomic) _Bool shouldCancel;
@property (nonatomic) _Bool didFinish;
@property (nonatomic) _Bool refreshing;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) NSMutableDictionary *pathsToCTags;
@property (retain, nonatomic) NSMutableDictionary *pathsToSyncTokens;
@property (retain, nonatomic) NSMutableArray *calendarsToRefresh;
@property (nonatomic) _Bool refreshFoundUpdatedTaskContainer;
@property (nonatomic) _Bool refreshFoundUpdatedSpecialCalendar;
@property (nonatomic) _Bool refreshFoundDeletedContainerURL;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingOperationGroup;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;
@property (retain, nonatomic) NSMutableSet *outstandingTasks;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) CalDiagAccountSync *accountSyncDiagnostics;
@property (retain, nonatomic) NSArray *attachmentUUIDsToUpload;
@property (nonatomic, readonly) _Bool needsRemindersSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)refresh;
- (void)teardown;
- (id)_powerLogInfoDictionary;
- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccount:(id)arg1 context:(id)arg2;
- (void)_teardownAllOutstandingOperations;
- (void)_sendResultToAccount;
- (_Bool)_refreshShouldContinue;
- (void)_refreshCalendarProperties;
- (void)_refreshDelegateAccountProperties;
- (void)_sendMoveTasks;
- (id)_attachmentUUIDsToUpload;
- (void)_refreshRegularCalendars;
- (void)_uploadAttachments;
- (void)_refreshSpecialCalendars;
- (void)_calendarCollectionsWereRefreshed;
- (void)_refreshAccountProperties;
- (void)_waitForStateTransition;
- (void)_cleanUpDuplicateCalendars;
- (void)calendarSyncForPrincipal:(id)arg1 calendar:(id)arg2 completedWithError:(id)arg3;
- (_Bool)_cleanUpDuplicateCalendar:(id)arg1 ofCalendar:(id)arg2;
- (_Bool)_sendMoveForItem:(id)arg1;
- (void)_clearMoveChange:(id)arg1;
- (void)_saveMoveChange:(id)arg1;
- (void)_handleMoveTaskComplete:(id)arg1 moveItem:(id)arg2;
- (void)_syncCalendar:(id)arg1;
- (id)_refreshedCtagForCalendar:(id)arg1;
- (id)_refreshedSyncTokenForCalendar:(id)arg1;
- (struct __CFArray *)_copyArrayOfAttachmentsToUpload;
- (id)_attachmentsByOwnerURL:(struct __CFArray *)arg1 calDAVItemsByOwnerURL:(id *)arg2;
- (void)_uploadAttachments:(id)arg1 calDAVItemsByOwnerURL:(id)arg2;
- (void)_uploadAttachments:(struct __CFArray *)arg1 forOwnerURL:(id)arg2 syncKey:(id)arg3 scheduleTag:(id)arg4;
- (void)_handleAttachmentUploadComplete:(id)arg1 attachmentUUID:(id)arg2;
- (void)_cleanUpOrphanedPreferredUserAddressesPerCalendar;
- (id)_guidsOfExistingCalendars;
- (void)propertyRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2;
- (void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6;
- (_Bool)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg1 calendar:(id)arg2 error:(id)arg3;
- (void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg1;
- (void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg1;
- (void)calendarRefreshFoundDeletedContainerURL:(id)arg1;
- (void)delegateRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2;

@end
