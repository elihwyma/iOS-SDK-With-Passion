/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface IMBalloonPluginManager : NSObject

{
    Class _richLinksDataSourceClass;
    NSMutableDictionary *_pluginsMap;
    id _extensionMatchingContext;
    id _highMemoryExtensionMatchingContext;
    NSString *_pluginMetaDataFolder;
    NSMutableDictionary *_pluginIDToMetadataCache;
    NSMutableSet *_pluginsToRemoveAfterExtensionsUpdate;
}

@property (retain, nonatomic) NSMutableDictionary *pluginsMap;
@property (retain, nonatomic) id extensionMatchingContext;
@property (retain, nonatomic) id highMemoryExtensionMatchingContext;
@property (retain, nonatomic) NSString *pluginMetaDataFolder;
@property (retain, nonatomic) NSMutableDictionary *pluginIDToMetadataCache;
@property (retain, nonatomic) NSMutableSet *pluginsToRemoveAfterExtensionsUpdate;
@property (retain, nonatomic, readonly) Class richLinksDataSourceClass;

+ (id)sharedInstance;
+ (id)_extensionBlacklist;
+ (_Bool)isRunningPPT;
+ (void)disableExtensionDiscovery;
+ (void)setIsRunningPPT:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)balloonPluginForBundleID:(id)arg1;
- (id)existingDataSourceForMessageGUID:(id)arg1 bundleID:(id)arg2;
- (Class)dataSourceClassForBundleID:(id)arg1;
- (void)setPluginEnabled:(_Bool)arg1 identifier:(id)arg2;
- (void)removePluginWithBundleID:(id)arg1;
- (id)allPlugins;
- (void)insertDataSource:(id)arg1 forGUID:(id)arg2;
- (void)pluginChatItem:(id)arg1 didRelinquishReusableController:(id)arg2;
- (void)pluginChatItem:(id)arg1 didRelenquishNonResuableController:(id)arg2;
- (id)systemBundleIdentifierForPluginIdentifier:(id)arg1;
- (id)dataSourceForPluginPayload:(id)arg1;
- (id)_insertPluginForExtension:(id)arg1 balloonProviderBundle:(id)arg2 andTimingCollection:(id)arg3;
- (void)_loadAllDataSources;
- (id)_pluginPlistPath:(id)arg1;
- (id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)arg1;
- (id)_metadataForPluginIdentifier:(id)arg1;
- (void)_storeMetadata:(id)arg1 _forPlugin:(id)arg2;
- (id)_identifiersForAppPlugins;
- (id)_pluginsForWhichWeHaveMetadata;
- (void)_deleteMetaDataForPlugins:(id)arg1;
- (id)_loadAppExtensionDataSourcesForExtensionPoint:(id)arg1;
- (void)_updatePluginsForExtensions:(id)arg1 extensionPoint:(id)arg2;
- (void)_updatePluginsForBundles:(id)arg1;
- (void)_removePluginsWithDelay;
- (id)_appProxyBundleIdentifiersForAppPlugins;
- (id)_proxyIdentifiersForPlugins;
- (id)_insertPluginForAppBundle:(id)arg1 balloonProviderBundle:(id)arg2;
- (void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)arg1;
- (void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
- (id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)arg1;
- (_Bool)_isServerBlackListedBundle:(id)arg1 serverBag:(id)arg2;
- (_Bool)_isExtensionBlackListed:(id)arg1;
- (void)_clearPluginMetadataForUninstalledApps;
- (void)_removePluginsForIdentifiers:(id)arg1;
- (void)_findPluginsInPaths:(id)arg1;
- (void)_findPluginsInPathInternal:(id)arg1;
- (void)_loadAppBundleDataSources;
- (void)_loadAppExtensionDataSources;
- (id)_fallBackMessagesExtensionPluginForBundleID:(id)arg1;
- (id)localParticipantIdentifierForAppID:(id)arg1 conversationID:(id)arg2;
- (id)recipientIDForRecipient:(id)arg1 appID:(id)arg2;
- (id)conversationID:(id)arg1 appID:(id)arg2;
- (void)loadExtensionWithIdentifierIfNeeded:(id)arg1;

@end
