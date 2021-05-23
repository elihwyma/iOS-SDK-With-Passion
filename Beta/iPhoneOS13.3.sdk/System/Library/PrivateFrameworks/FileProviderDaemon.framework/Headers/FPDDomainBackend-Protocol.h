/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/Swift-Protocol.h>

@class NSArray, NSObject;

@protocol OS_dispatch_queue;

@protocol FPDDomainBackend <Swift>

@property (copy, readonly) NSArray *rootURLs;
@property (readonly) NSObject<OS_dispatch_queue> *backendQueue;

- (unsigned short)invalidate;
- (unsigned short)initWithDomain: /* Error: Ran out of types for this method. */;
- (unsigned short)reimportItemsBelowItemWithID:removeCachedItems:markItemDataless:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateMaterializedSetFromSyncAnchor:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)currentMaterializedSetSyncAnchorWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateWithSettings:lifetimeExtender:observer:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)evictItemAtURL:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)URLForItemID:creatingPlaceholderIfMissing:ignoreAlternateContentsURL:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemIDForURL:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startAndGetSyncAnchor: /* Error: Ran out of types for this method. */;
- (unsigned short)isProviderForURL: /* Error: Ran out of types for this method. */;
- (unsigned short)needsRootCreation;
- (unsigned short)createRootByImportingURL:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForItemID:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForURL:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFSItemsForItemIdentifiers:materializingIfNeeded:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startProvidingItemAtURL:readingOptions:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)evictItemWithID:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createItemBasedOnTemplate:fields:urlWrapper:options:bounceOnCollision:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemChangedAtURL:request: /* Error: Ran out of types for this method. */;
- (unsigned short)updateRootAfterDomainChangeWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpStateTo:limitNumberOfItems: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllFilesWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesForAttributes:forURL:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createIndexerWithExtension:enabled:error: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchOperationServiceOrEndpointWithRequest:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveProviderItemID:completionHandler: /* Error: Ran out of types for this method. */;

+ (unsigned short)registerXPCActivities;

- (unsigned short)forceIngestionForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fakeFSEventAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)decorateItems:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)materializedURLForItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)forceIngestionAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)forceFSIngestionForItemID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)nonEvictableSpace;
- (unsigned short)downloadItemWithItemID:request:progress:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDownloadPolicy:forItemWithID:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pinItemWithID:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unpinItemWithID:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)didChangeItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)ingestFromCacheItemWithID:requestedFields:request:completionHandler: /* Error: Ran out of types for this method. */;

@end
