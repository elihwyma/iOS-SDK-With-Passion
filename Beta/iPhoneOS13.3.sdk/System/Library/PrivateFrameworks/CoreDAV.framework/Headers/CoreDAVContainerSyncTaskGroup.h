/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup

{
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    _Bool _ensureUpdatedCTag;
    _Bool _useSyncCollection;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSMutableArray *_actions;
    unsigned long long _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    unsigned long long _maxIndependentTasks;
    NSURL *_addMemberURL;
    _Bool _useMultiGet;
    NSDictionary *_bulkRequests;
    NSString *_bulkChangeCheckCTag;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_urlToETag;
    Class _appSpecificDataItemClass;
    _Bool _syncItemOrder;
    NSMutableArray *_localItemURLOrder;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    _Bool _actionsOnly;
}

@property (retain, nonatomic) NSString *nextCTag;
@property (retain, nonatomic) NSString *previousSyncToken;
@property (nonatomic, readonly) NSURL *folderURL;
@property (retain, nonatomic) NSString *previousCTag;
@property (nonatomic) _Bool useSyncCollection;
@property (nonatomic) unsigned long long multiGetBatchSize;
@property (nonatomic) _Bool useMultiGet;
@property (weak, nonatomic) id <CoreDAVLocalDBInfoProvider> delegate;
@property (nonatomic) unsigned long long maxIndependentTasks;
@property (retain, nonatomic) NSURL *addMemberURL;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *bulkChangeCheckCTag;
@property (nonatomic) _Bool actionsOnly;
@property (nonatomic, readonly) NSArray *localItemURLOrder;
@property (nonatomic) _Bool ensureUpdatedCTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(_Bool)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)dataContentType;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (_Bool)shouldFetchMoreETags;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (_Bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)bailWithError:(id)arg1;
- (unsigned long long)_submitTasks;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (_Bool)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (void)deleteResourceURLs:(id)arg1;
- (void)_tearDownAllUnsubmittedTasks;
- (void)_getETags;
- (id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (void)_getCTag;
- (Class)bulkChangeTaskClass;
- (void)_pushActions;
- (void)_sendNextBatch;
- (void)_getDataPayloads;
- (void)_configureMultiGet:(id)arg1;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;
- (void)_bulkChange;
- (_Bool)isWhitelistedError:(id)arg1;
- (void)_getOrder;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)syncAway;

@end
