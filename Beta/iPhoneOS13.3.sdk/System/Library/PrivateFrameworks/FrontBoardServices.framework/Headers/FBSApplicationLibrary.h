/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSApplicationLibraryConfiguration, LSApplicationWorkspace, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface FBSApplicationLibrary : NSObject

{
    FBSApplicationLibraryConfiguration *_configuration;
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMapTable *_observerQueue_tokensToBlocks;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _workQueue_usingNetwork;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    NSMutableSet *_workQueue_injectedAppIdentifiers;
    unsigned long long _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _initializing;
}

@property (nonatomic, readonly, getter=isUsingNetwork) _Bool usingNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (id)allInstalledApplications;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)_load;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (void)synchronize:(CDUnknownBlockType)arg1;
- (id)_initWithApplicationWorkspace:(id)arg1 configuration:(id)arg2;
- (void)_reloadPlaceholdersNotificationFired;
- (id)_observeType:(long long)arg1 withBlock:(id)arg2;
- (void)_workQueue_addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg1 withReason:(id)arg2;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_executeOrPendInstallSynchronizationBlock:(CDUnknownBlockType)arg1;
- (void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
- (id)_workQueue_currentProcessProxyWithOutURL:(id *)arg1;
- (void)_notifyForType:(long long)arg1 synchronously:(_Bool)arg2 withCastingBlock:(CDUnknownBlockType)arg3;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createReason:(id)arg4 createdPlaceholders:(id *)arg5 existingPlaceholders:(id *)arg6 filterExistingPlaceholders:(id *)arg7 unmappedProxies:(id *)arg8;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(_Bool)arg2 createReason:(id)arg3 createdApplications:(id *)arg4 existingApplications:(id *)arg5 filterExistingApplications:(id *)arg6 unmappedProxies:(id *)arg7;
- (id)_workQueue_placeholderForProxy:(id)arg1 filterExisting:(_Bool)arg2 updateExistingIfNecessary:(_Bool)arg3 createIfNecessary:(_Bool)arg4 createReason:(id)arg5;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 filterExisting:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createReason:(id)arg4;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (void)_notifyDidAddPlaceholders:(id)arg1;
- (void)_notifyDidDemoteApplications:(id)arg1;
- (void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg1 withReason:(id)arg2;
- (_Bool)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_notifyDidCancelPlaceholders:(id)arg1;
- (void)_notifyDidAddApplications:(id)arg1;
- (void)_notifyDidReplaceApplications:(id)arg1;
- (void)_notifyDidRemoveApplications:(id)arg1;
- (void)_notifyDidUpdateApplications:(id)arg1;
- (void)_handleApplicationStateDidChange:(id)arg1 notifyForUpdateInsteadOfReplacement:(_Bool)arg2;
- (void)_notifyDidChangeNetworkUsage:(_Bool)arg1;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allPlaceholders;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (void)uninstallApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserverForToken:(id)arg1;
- (id)observeDidAddPlaceholdersWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidCancelPlaceholdersWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidAddApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidReplaceApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidUpdateApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidRemoveApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidDemoteApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidChangeNetworkUsageWithBlock:(CDUnknownBlockType)arg1;
- (void)addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2;
- (void)removeApplicationProxy:(id)arg1;
- (void)_addCurrentProcess;

@end
