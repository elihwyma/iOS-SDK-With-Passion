/*
 Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CDDADConnection : NSObject

{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    CDUnknownBlockType _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
    _Bool _registered;
}

@property (nonatomic) _Bool registered;

+ (id)sharedConnection;
+ (unsigned long long)_nextStopMonitoringStatusToken;
+ (void)setShouldIgnoreAccountChanges;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)_init;
- (void)handleURL:(id)arg1;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)_initializeConnection;
- (void)resetTimersAndWarnings;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (void)cancelServerContactsSearch:(id)arg1;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(_Bool)arg4;
- (void)_tearDownInFlightObjects;
- (void)_initializeXPCConnection:(id)arg1;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (id)decodedErrorFromData:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)reallyRegisterForInterrogation;
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(_Bool)arg3;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)_validateXPCReply:(id)arg1;
- (_Bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)requestPolicyUpdateForAccountID:(id)arg1;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)_requestDaemonChangeAgentMonitoringStatus:(_Bool)arg1 withToken:(unsigned long long)arg2 waitForReply:(_Bool)arg3;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(_Bool)arg4;
- (_Bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (void)reportFolderItemsSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (_Bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (void)fillOutCurrentEASTimeZoneInfo;
- (id)activeSyncDeviceIdentifier;
- (_Bool)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_registerForAppResumedNotification;
- (void)_foldersUpdated:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_initializeConnectionWithXPCEndpoint:(id)arg1;
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1;
- (unsigned long long)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1;
- (unsigned long long)requestDaemonStopMonitoringAgentsSync;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)statusReports;
- (_Bool)registerForInterrogationWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(_Bool)arg3;
- (_Bool)watchFoldersWithSyncKeyMap:(id)arg1 forAccountID:(id)arg2 persistent:(_Bool)arg3;
- (_Bool)resumeWatchingFoldersWithSyncKeyMap:(id)arg1 forAccountID:(id)arg2;

@end
