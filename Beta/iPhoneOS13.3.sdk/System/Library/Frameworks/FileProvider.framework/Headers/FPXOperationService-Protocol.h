/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@protocol FPXOperationService

- (unsigned short)singleItemChange:changedFields:bounce:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteItemsWithIDs:baseVersions:options:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)createItemBasedOnTemplate:fields:contents:options:bounce:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)attemptRecoveryFromError:optionIndex:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTrashIdentifiersWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startOperation:toFetchThumbnailsForItemIdentifiers:size:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)preflightReparentItemID:underParentID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)bulkItemChanges:changedFields:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchHierarchyForItemID:recursively:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDefaultContainerForBundleIdentifier:defaultName:inDomainIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchItemID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)preflightTrashItemIDs:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPublishingURLForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnectDomainID:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performActionWithIdentifier:onItemsWithIdentifiers:domainIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)wakeForSessionIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)userInteractionErrorsForPerformingAction:sourceItems:destinationItem:completionHandler: /* Error: Ran out of types for this method. */;

@end
