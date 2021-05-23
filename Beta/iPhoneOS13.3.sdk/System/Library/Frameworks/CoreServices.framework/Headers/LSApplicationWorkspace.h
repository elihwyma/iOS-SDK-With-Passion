/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class LSInstallProgressList, NSMutableDictionary;

@interface LSApplicationWorkspace : NSObject

{
    NSMutableDictionary *_createdInstallProgresses;
    LSInstallProgressList *_observedInstallProgresses;
}

@property (readonly) LSInstallProgressList *observedInstallProgresses;
@property (readonly) NSMutableDictionary *createdInstallProgresses;

+ (id)progressQueue;
+ (id)_remoteObserver;
+ (id)callbackQueue;
+ (id)defaultWorkspace;
+ (id)activeManagedConfigurationRestrictionUUIDs;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)establishConnection;
- (id)remoteObserver;
- (id)observerProxy;
- (id)applicationProxiesWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
- (id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2;
- (_Bool)openURL:(id)arg1 withOptions:(id)arg2;
- (_Bool)openURL:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (id)applicationForUserActivityType:(id)arg1;
- (void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 isContentManaged:(_Bool)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)optionsFromOpenConfiguration:(id)arg1;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (_Bool)installPhaseFinishedForProgress:(id)arg1;
- (void)placeholderInstalledForIdentifier:(id)arg1 filterDowngrades:(_Bool)arg2;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (_Bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (_Bool)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 error:(id *)arg6;
- (_Bool)allowsAlternateIcons;
- (id)syncObserverProxy;
- (id)applicationsAvailableForOpeningURL:(id)arg1;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)getKnowledgeUUID:(id *)arg1 andSequenceNumber:(id *)arg2;
- (id)directionsApplications;
- (id)applicationsWithUIBackgroundModes;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithVPNPlugins;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (_Bool)openApplicationWithBundleID:(id)arg1;
- (_Bool)openURL:(id)arg1;
- (_Bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (void)openURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)installedPlugins;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(CDUnknownBlockType)arg4;
- (void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
- (_Bool)applicationIsInstalled:(id)arg1;
- (id)removedSystemApplications;
- (id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id *)arg2;
- (id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)getClaimedActivityTypes:(id *)arg1 domains:(id *)arg2;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (_Bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (_Bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)restoreSystemApplication:(id)arg1;
- (_Bool)registerApplicationDictionary:(id)arg1;
- (_Bool)registerApplication:(id)arg1;
- (_Bool)unregisterApplication:(id)arg1;
- (_Bool)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failure:(unsigned long long)arg3 underlyingError:(id)arg4 source:(unsigned long long)arg5 outError:(id *)arg6;
- (_Bool)initiateProgressForApp:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)registerPlugin:(id)arg1;
- (_Bool)unregisterPlugin:(id)arg1;
- (_Bool)garbageCollectDatabaseWithError:(id *)arg1;
- (_Bool)isVersion:(id)arg1 greaterThanOrEqualToVersion:(id)arg2;
- (_Bool)invalidateIconCache:(id)arg1;
- (void)clearAdvertisingIdentifier;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (_Bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3;
- (void)_LSPrivateSyncWithMobileInstallation;
- (void)_LSPrivateUpdateAppRemovalRestrictions;
- (void)_LSPrivateSetRemovedSystemAppIdentifiers:(id)arg1;
- (id)_LSPrivateRemovedSystemAppIdentifiers;
- (_Bool)_LSPrivateDatabaseNeedsRebuild;
- (void)_LSClearSchemaCaches;
- (void)sendApplicationStateChangedNotificationsFor:(id)arg1;
- (id)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2;
- (id)scanForApplicationStateChangesWithWhitelist:(id)arg1;
- (id)scanForForDeletableSystemApps;
- (void *)ls_testWithCleanDatabaseWithError:(id *)arg1;
- (_Bool)ls_injectUTTypeWithDeclaration:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (void)ls_resetTestingDatabase;
- (id)legacyApplicationProxiesListWithType:(unsigned long long)arg1;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(CDUnknownBlockType)arg4;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)applicationsOfType:(unsigned long long)arg1;
- (id)allInstalledApplications;
- (id)placeholderApplications;
- (id)unrestrictedApplications;
- (id)allApplications;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(_Bool)arg2;
- (_Bool)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isApplicationAvailableToOpenURL:(id)arg1 error:(id *)arg2;
- (_Bool)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(_Bool)arg2 error:(id *)arg3;
- (id)applicationForOpeningResource:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)publicURLSchemes;
- (id)privateURLSchemes;
- (id)URLOverrideForURL:(id)arg1;
- (id)URLOverrideForNewsURL:(id)arg1;

@end
