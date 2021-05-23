/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class MISSING_TYPE;

@protocol CPLDaemonLibraryManagerMinimalProtocol

- (MISSING_TYPE *)cancelTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)reportMiscInformation: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)rampingRequestForResourceType:numRequested:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getSystemBudgetsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchMomentShareFromShareURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)queryUserIdentitiesWithParticipants:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)acceptMomentShare:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)publishMomentShare:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)noteClientIsInBackground;
- (MISSING_TYPE *)noteClientIsInForeground;
- (MISSING_TYPE *)getCloudCacheForRecordWithScopedIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getChangedStatusesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setShouldOverride:forSystemBudgets: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getStatusForRecordsWithScopedIdentifiers:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getStatusForComponents:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getStreamingURLForResource:intent:hints:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)reportSetting:hasBeenSetToValue: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)checkHasBackgroundDownloadOperationsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)noteClientIsEndingSignificantWork;
- (MISSING_TYPE *)noteClientIsBeginningSignificantWork;
- (MISSING_TYPE *)setDiagnosticsEnabled: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)connectWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)openLibraryWithClientLibraryBaseURL:cloudLibraryStateStorageURL:cloudLibraryResourceStorageURL:libraryIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)closeLibraryWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)deactivateLibraryWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginDownloadForResource:clientBundleID:highPriority:proposedTaskIdentifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginInMemoryDownloadOfResource:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getMappedScopedIdentifiersForScopedIdentifiers:inAreLocalIdentifiers:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)forceSyncForScopeIdentifiers:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelSyncTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startSyncSession;
- (MISSING_TYPE *)resetStatus;
- (MISSING_TYPE *)addStatusChangesForRecordsWithScopedIdentifiers:persist: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)disableSynchronizationWithReason: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)enableSynchronizationWithReason: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)disableMingling;
- (MISSING_TYPE *)enableMingling;
- (MISSING_TYPE *)resetCacheWithOption:reason:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getListOfComponentsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getStatusArrayForComponents:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getStatusesForScopesWithIdentifiers:includeStorages:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cloudCacheGetDescriptionForRecordWithScopedIdentifier:related:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getResourcesForItemWithScopedIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)compactFileCacheWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addInfoToLog: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)blockEngineElement: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unblockEngineElement: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unblockEngineElementOnce: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)provideLibraryInfoForScopeWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)provideRecordWithCloudScopeIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)provideCloudResource:completionHandler: /* Error: Ran out of types for this method. */;

@end
