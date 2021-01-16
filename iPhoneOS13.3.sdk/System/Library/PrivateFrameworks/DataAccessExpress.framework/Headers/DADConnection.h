//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DADConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    id /* CDUnknownBlockType */ _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
    NSMutableDictionary *_inFlightGrantedDelegatesListRequests;
    NSMutableDictionary *_inFlightUpdateGrantedDelegatePermissionRequests;
    BOOL _registered;
}

+ (NSUInteger)_nextStopMonitoringStatusToken;
+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnection;
@property(nonatomic) BOOL registered; // @synthesize registered=_registered;
// - (void).cxx_destruct;
- (void)_dispatchMessage:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)resetTimersAndWarnings;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(NSUInteger)arg4 resultsBlock:(id /* CDUnknownBlockType */)arg5 completionBlock:(id /* CDUnknownBlockType */)arg6;
- (void)_updateGrantedDelegatePermissionRequestFinished:(id)arg1;
- (id)updateGrantedDelegatePermissionForAccountID:(id)arg1 grantedDelegate:(id)arg2 resultsBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_grantedDelegatesListRequestFinished:(id)arg1;
- (void)cancelGrantedDelegatesListRequestWithID:(id)arg1;
- (id)requestGrantedDelegatesListForAccountID:(id)arg1 resultsBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(id /* CDUnknownBlockType */)arg6 completionBlock:(id /* CDUnknownBlockType */)arg7;
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(BOOL)arg3;
- (id)activeSyncDeviceIdentifier;
- (void)fillOutCurrentEASTimeZoneInfo;
- (BOOL)registerForInterrogationWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)reallyRegisterForInterrogation;
- (id)statusReports;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(id /* CDUnknownBlockType */)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id /* CDUnknownBlockType */)arg2;
- (void)handleURL:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(NSUInteger)arg3 andAccountWithID:(id)arg4;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)cancelServerContactsSearch:(id)arg1;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4;
- (void)requestDaemonShutdown;
- (void)removeStoresForAccountWithID:(id)arg1;
- (NSUInteger)requestDaemonStopMonitoringAgentsSync;
- (void)requestDaemonStartMonitoringAgentsSyncWithToken:(NSUInteger)arg1;
- (NSUInteger)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgentsWithToken:(NSUInteger)arg1;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 withToken:(NSUInteger)arg2 waitForReply:(BOOL)arg3;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (BOOL)_validateXPCReply:(id)arg1;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(BOOL)arg3;
- (BOOL)_checkInvalidIdExistsInXPCRely:(id)arg1;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (id)decodedErrorFromData:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)_initializeXPCConnection:(id)arg1;
- (void)_initializeConnectionWithXPCEndpoint:(id)arg1;
- (void)_initializeConnection;
- (id)_connection;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_tearDownInFlightObjects;

@end
