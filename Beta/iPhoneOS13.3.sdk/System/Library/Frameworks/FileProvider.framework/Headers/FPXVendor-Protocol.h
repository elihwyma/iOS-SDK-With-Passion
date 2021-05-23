/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/Swift-Protocol.h>

@protocol FPXVendor <Swift>

- (unsigned short)startProvidingItemAtURL:readingOptions:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)changeItem:baseVersion:changedFields:contents:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)providePlaceholderAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)identifierForItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)importDidFinishWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)beginRequestWithDomain:alternateContentsDictionary:usesFPFS: /* Error: Ran out of types for this method. */;
- (unsigned short)evictItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemChangedAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)trashItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)bulkEvictItemsWithItemIDs:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchServicesForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchVendorEndpoint: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchOperationServiceEndpoint: /* Error: Ran out of types for this method. */;
- (unsigned short)dropDomainWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCustomPushTopicsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)wakeForPushWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesForAttributes:forItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)didChangeItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)URLForItemID:creatingPlaceholderIfMissing:ignoreAlternateContentsURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setAlternateContentsURL:forDocumentWithItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)didUpdateAlternateContentsDocumentForDocumentWithItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteSearchableItemsWithSpotlightDomainIdentifiers:domainIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTrashedItemsOlderThanDate:domainIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpInternalStateToTermDumper:domainIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOneBatchInDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOneBatchInDomain:fromAnchor:toAnchor:updatedItems:deletedItems:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentIndexingAnchorForDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dropIndexForDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpIndexStateForDomain:toFileHandler:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)acknowledgeUserVisibleRootDidChangeForDomain:urlWrapper:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)contentsForItemWithIdentifier:version:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateExistingContents:ofItemWithIdentifier:existingVersion:toVersion:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)signalEnumeratorForMaterializedItemsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_test_callFileProviderManagerAPIs: /* Error: Ran out of types for this method. */;

@end
