/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDDomain, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDDomainExtensionBackend : NSObject

{
    FPDDomain *_domain;
    _Bool _invalidated;
    NSMutableDictionary *_provideFileCompletionsByURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSArray *rootURLs;
@property (readonly) NSObject<OS_dispatch_queue> *backendQueue;

- (void)invalidate;
- (id)initWithDomain:(id)arg1;
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelProvidingItemAtURL:(id)arg1 withKey:(id)arg2 request:(id)arg3;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)itemIDForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isAllowedToProvideItemID:(id)arg1 toConsumerWithIdentifier:(id)arg2;
- (_Bool)startAndGetSyncAnchor:(id *)arg1;
- (_Bool)isProviderForURL:(id)arg1;
- (_Bool)needsRootCreation;
- (id)createRootByImportingURL:(id)arg1 error:(id *)arg2;
- (void)itemForItemID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 request:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)itemChangedAtURL:(id)arg1 request:(id)arg2;
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(_Bool)arg2;
- (_Bool)removeAllFilesWithError:(id *)arg1;
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createIndexerWithExtension:(id)arg1 enabled:(_Bool)arg2 error:(id *)arg3;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveProviderItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didIndexOneBatchWithError:(id)arg1 updatedItems:(id)arg2 deletedIDs:(id)arg3 anchor:(id)arg4;

@end
