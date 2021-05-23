/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class MISSING_TYPE;

@protocol FPDDaemon

- (MISSING_TYPE *)reindexAllSearchableItemsWithAcknowledgementHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)providerDomainsCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateBlacklistedProcessNamesForProvider:processNames:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)itemForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)trashItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)_test_callFileProviderManagerAPIs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startOperation:toFetchIconsForAppBundleIDs:requestedSize:scale:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)wakeUpForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)evictItemAtURL:evenIfEnumeratingFP:andClearACLForConsumer:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setAlternateContentsURL:onDocumentURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchAlternateContentsURLForDocumentURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didUpdateAlternateContentsDocumentForDocumentAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)scheduleActionOperationWithInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setEnabled:forDomainIdentifier:providerIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)providerDomainForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)providerDomainForIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)extendSandboxForFileURL:fromProviderID:toConsumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startProvidingItemAtURL:fromProviderID:forConsumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)evictItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)pinItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unpinItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchDomainServicerForProviderDomainID:handler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)extendBookmarkForFileURL:toConsumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateLastUsedDate:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)forceIngestionForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)forceIngestionForItemIDs:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)createItemBasedOnTemplate:fields:urlWrapper:options:bounceOnCollision:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)bookmarkableStringFromDocumentURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)documentURLFromBookmarkableString:creatingPlaceholderIfMissing:ignoreAlternateContentsURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)valuesForAttributes:forItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchListOfMonitoredApps: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)dumpStateTo:limitNumberOfItems:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)_test_retrieveItemWithName:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)makeTopologicallySortedItemsOnDisk:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getURLForContainerWithItemID:inDataScopeDomainWithIdentifier:documentsScopeDomainIdentifier:documentsFolderItemIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)backUpUserURL:outputUserURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)restoreUserURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchAccessServicer: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchDaemonOperationWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchDaemonOperationIDsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeDomain:forProviderIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeAllDomainsForProviderIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addDomain:forProviderIdentifier:byImportingDirectoryAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getDomainsForProviderIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)enumerateMaterializedSetForDomain:inProvider:syncAnchor:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)currentMaterializedSetSyncAnchorForDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)reimportItemsBelowItemWithID:removeCachedItems:markItemDataless:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setDownloadPolicy:forItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)ingestFromCacheItemWithID:requestedFields:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchFSItemsForItemIdentifiers:providerIdentifier:domainIdentifier:materializingIfNeeded:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchIndexPropertiesForItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)extendBookmarkForItemID:consumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)materializeURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)noteURLBecameFrontmost:inWindow:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)reindexAllSearchableItemsForBundleIDs:acknowledgementHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startAccessingExtensionForProviderDomainID:handler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startAccessingOperationServiceForProviderDomainID:handler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startAccessingServiceForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)startAccessingServiceForItemURL:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)_test_callRemoveTrashedItemsOlderThanDate:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)_test_simulateInstallOfBundleID:completionHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)_test_simulateUninstallOfBundleID:completionHandler: /* Error: Ran out of types for this method. */;

@end
