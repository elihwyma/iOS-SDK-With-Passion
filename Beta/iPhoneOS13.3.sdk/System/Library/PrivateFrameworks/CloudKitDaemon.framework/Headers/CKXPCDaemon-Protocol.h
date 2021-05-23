/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@protocol CKXPCDaemon <Swift>

- (unsigned short)performRepairAssetsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performMarkAssetBrokenOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performModifyRecordZonesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performDiscoverAllIdentitiesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelOperationWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountStatusWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountInfoWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)importantUserIDsWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)statusForApplicationPermission:setupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestApplicationPermission:setupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getSandboxExtensionsWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)frameworkCachesDirectoryWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performDiscoverUserIdentitiesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchShareParticipantsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchRecordsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performModifyRecordsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchRecordChangesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchRecordZoneChangesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchRecordVersionsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchArchivedRecordsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performArchiveRecordsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performPublishAssetsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performModifyWebSharingOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getNewWebSharingIdentityWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getNewWebSharingIdentityDataWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchXPCCriteriaWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performModifyRecordAccessOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performQueryOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performModifySubscriptionsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchSubscriptionsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchRecordZonesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchDatabaseChangesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performModifyBadgeOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchNotificationChangesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performMarkNotificationsReadOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performAcceptSharesOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performCompleteParticipantVettingOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchShareMetadataOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchShareParticipantKeyOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)decryptPersonalInfoOnShare:setupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performInitiateParticipantVettingOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchUserQuotaOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchWebAuthTokenOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchWhitelistedBundleIDsOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)performCodeFunctionInvokeOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLongLivedOperationsWithIDs:setupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllLongLivedOperationIDsWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)serverPreferredPushEnvironmentWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)serverEnvironmentWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)currentDeviceIDWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)displayInfoOnAccountWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)currentUserBoundaryKeyWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performAggregateZonePCSOperation:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpAllClientsStatusReportToFileHandle:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpDaemonStatusReportToFileHandle:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setFakeError:forNextRequestOfClassName:setupInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)setFakeResponseOperationResult:forNextRequestOfClassName:forItemID:withLifetime:setupInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)countAssetCacheItemsWithSetupInfo:databaseScope:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAssetCacheWithSetupInfo:databaseScope:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)showAssetCacheWithSetupInfo:databaseScope: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRecordCacheWithSetupInfo:databaseScope: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAuthTokensWithSetupInfo:recordID:databaseScope: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCachesWithSetupInfo:options:databaseScope:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCachesForRecordWithSetupInfo:recordID:databaseScope:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCachesForZoneWithSetupInfo:zoneID:databaseScope:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)wipeAllCachedLongLivedProxiesWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getOutstandingOperationCountWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPCSCachesForKnownContextsWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getBehaviorOptionForKey:isContainerOption:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsDidGrantAccessToBundleID:containerIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsDidRevokeAccessToBundleID:sourceApplicationBundleID:containerIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWillDeleteAccount:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountWithID:changedWithChangeType: /* Error: Ran out of types for this method. */;
- (unsigned short)setApplicationPermission:enabled:setupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllApplicationPermissionsWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)statusGroupsForApplicationPermission:setupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)wipeAllCachesAndDie;
- (unsigned short)clearContextFromMetadataCache;
- (unsigned short)clearPILSCacheForLookupInfos: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePushTokens;
- (unsigned short)dataclassEnabled:withSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)flushOperationMetricsToPowerLog;
- (unsigned short)triggerAutoBugCaptureSnapshot;
- (unsigned short)submitClientEventMetric:withSetupInfo:completeWhenQueued:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPCSDiagnosticsForZonesWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getRecordPCSDiagnosticsForZonesWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)repairZonePCSWithOperationInfo:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)tossConfigWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestClientSyncWithOperationInfo:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceCountWithSetupInfo:completionHandler: /* Error: Ran out of types for this method. */;

@end
