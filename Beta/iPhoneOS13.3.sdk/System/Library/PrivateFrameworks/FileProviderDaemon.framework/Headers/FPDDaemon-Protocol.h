/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@protocol FPDDaemon

- (unsigned short)reindexAllSearchableItemsWithAcknowledgementHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)providerDomainsCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBlacklistedProcessNamesForProvider:processNames:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)trashItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_test_callFileProviderManagerAPIs: /* Error: Ran out of types for this method. */;
- (unsigned short)startOperation:toFetchIconsForAppBundleIDs:requestedSize:scale:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)wakeUpForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)evictItemAtURL:evenIfEnumeratingFP:andClearACLForConsumer:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setAlternateContentsURL:onDocumentURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAlternateContentsURLForDocumentURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)didUpdateAlternateContentsDocumentForDocumentAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleActionOperationWithInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setEnabled:forDomainIdentifier:providerIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)providerDomainForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)providerDomainForIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendSandboxForFileURL:fromProviderID:toConsumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startProvidingItemAtURL:fromProviderID:forConsumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)evictItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pinItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unpinItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDomainServicerForProviderDomainID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendBookmarkForFileURL:toConsumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastUsedDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)forceIngestionForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)forceIngestionForItemIDs:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createItemBasedOnTemplate:fields:urlWrapper:options:bounceOnCollision:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)bookmarkableStringFromDocumentURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)documentURLFromBookmarkableString:creatingPlaceholderIfMissing:ignoreAlternateContentsURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesForAttributes:forItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchListOfMonitoredApps: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpStateTo:limitNumberOfItems:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_test_retrieveItemWithName:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)makeTopologicallySortedItemsOnDisk:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getURLForContainerWithItemID:inDataScopeDomainWithIdentifier:documentsScopeDomainIdentifier:documentsFolderItemIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)backUpUserURL:outputUserURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)restoreUserURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAccessServicer: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDaemonOperationWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDaemonOperationIDsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDomain:forProviderIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllDomainsForProviderIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addDomain:forProviderIdentifier:byImportingDirectoryAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDomainsForProviderIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateMaterializedSetForDomain:inProvider:syncAnchor:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)currentMaterializedSetSyncAnchorForDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reimportItemsBelowItemWithID:removeCachedItems:markItemDataless:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDownloadPolicy:forItemWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)ingestFromCacheItemWithID:requestedFields:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFSItemsForItemIdentifiers:providerIdentifier:domainIdentifier:materializingIfNeeded:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchIndexPropertiesForItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendBookmarkForItemID:consumerID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)materializeURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)noteURLBecameFrontmost:inWindow:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reindexAllSearchableItemsForBundleIDs:acknowledgementHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startAccessingExtensionForProviderDomainID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)startAccessingOperationServiceForProviderDomainID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)startAccessingServiceForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startAccessingServiceForItemURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_test_callRemoveTrashedItemsOlderThanDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_test_simulateInstallOfBundleID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_test_simulateUninstallOfBundleID:completionHandler: /* Error: Ran out of types for this method. */;

@end
