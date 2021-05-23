/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSApplicationLibrary, NSMutableDictionary, NSSet, NSString, SBApplicationInfo, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject

{
    NSMutableDictionary *_applicationsByBundleIdentifer;
    struct os_unfair_lock_s _applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBSApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;
+ (void)_setClearAllLegacySnapshotsWhenLoaded:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)allApplications;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (id)_appLibrary;
- (id)mobilePhone;
- (id)allBundleIdentifiers;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)runningApplications;
- (void)waitForUninstallsToComplete;
- (id)restrictionController;
- (id)applicationWithPid:(int)arg1;
- (id)setupApplication;
- (id)musicApplication;
- (id)dataActivationApplication;
- (void)uninstallApplication:(id)arg1;
- (id)cameraApplication;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)webApplication;
- (void)_loadApplications:(id)arg1 remove:(id)arg2;
- (void)_memoryWarningReceived;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 replaced:(id)arg3 updated:(id)arg4;
- (Class)_appClassForInfo:(id)arg1;
- (void)_preLoadApplications;
- (id)_loadApplicationFromApplicationInfo:(id)arg1;
- (id)_appInfosToBundleIDs:(id)arg1;
- (void)_updateVisibilityOverrides;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)applicationsAdded:(id)arg1;
- (void)applicationsReplaced:(id)arg1;
- (void)applicationsUpdated:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsDemoted:(id)arg1;
- (void)applicationVisibilityMayHaveChanged;
- (void)applicationRestrictionsMayHaveChanged;
- (void)requestUninstallApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)faceTimeApp;
- (id)inCallServiceApp;
- (id)clockApplication;
- (id)iPodOutApplication;
- (id)mapsApplication;
- (id)loginApplication;
- (id)testFlightApplication;
- (id)notesApplication;
- (id)_appLibraryObserver;

@end
