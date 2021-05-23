/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDPushConnection, FPDServer, NSMapTable, NSMutableDictionary;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDExtensionManager : NSObject

{
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_providersLoadedGroup;
    id _matchingContext;
    struct NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    FPDPushConnection *_pushConnection;
    FPDServer *_server;
}

@property (weak, nonatomic) FPDServer *server;
@property (nonatomic, readonly) FPDPushConnection *pushConnection;

- (id)initWithServer:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)domainForURL:(id)arg1;
- (id)allProviders;
- (void)loadProvidersAndMonitorWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)domainFromItemID:(id)arg1;
- (id)nonEvictableSizeByProviderDomain;
- (id)providerDomainsByID;
- (id)providerWithTopLevelBundleIdentifier:(id)arg1;
- (id)clouddocsExtensionIdentifier;
- (void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2;
- (id)alternateContentsURLForItemID:(id)arg1;
- (id)xattrForName:(id)arg1 url:(id)arg2;
- (void)garbageCollectDomainOwnedDirectoriesAtURL:(id)arg1 isUserData:(_Bool)arg2 installedProviderIdentifiers:(id)arg3;
- (void)_loadAlternateContentsDictionary;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1;
- (void)migrateEnabledStateIfNecessary:(id)arg1;
- (void)_updateProviderListForMatchingExtensions:(id)arg1 allExtensionStartedHandler:(CDUnknownBlockType)arg2;
- (void)afterFirstDiscovery;
- (id)uniquedExtensions:(id)arg1;
- (id)providerDomainsByIDFromExtensionsByID:(id)arg1;
- (id)_domainForURL:(id)arg1;
- (void)_serializeAlternateContentsURLDictionary:(struct NSMutableDictionary *)arg1;
- (id)_deserializedAlternateContentsDictionary;
- (id)extensionsByID:(id)arg1;
- (id)domainForActionOperationLocator:(id)arg1;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)arg1;

@end
